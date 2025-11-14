#include "HomeSpan.h"
#include "wifi_info.h"

int ledPins[] = {16, 17, 18};
int ledCount = sizeof(ledPins) / sizeof(ledPins[0]);

struct LEDService : Service::LightBulb {
  int pin;
  SpanCharacteristic *power;

  LEDService(int ledPin) : Service::LightBulb() {
    pin = ledPin;
    power = new Characteristic::On();
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
    Serial.printf("LED Servisi eklendi. Pin: %d\n", pin);
  }

  boolean update() override {
    bool newState = power->getNewVal<bool>();
    digitalWrite(pin, newState ? HIGH : LOW);
    Serial.printf("LED Pin %d -> %s\n", pin, newState ? "AÇIK" : "KAPALI");
    return true;
  }
};

void setup() {
  Serial.begin(115200);
  delay(100);

  wifi_connect();

  homeSpan.setPairingCode("11122333");
  homeSpan.setQRID("111-22-333");
  homeSpan.begin(Category::Lighting, "Ali-Eren-kopru");

  new SpanAccessory();
    new Service::AccessoryInformation();
      new Characteristic::Identify();

    for (int i = 0; i < ledCount; i++) {
      new LEDService(ledPins[i]);
    }

  Serial.printf("Toplam %d LED HomeKit'e tanimlandi.\n", ledCount);
}

void loop() {
  homeSpan.poll();
}
