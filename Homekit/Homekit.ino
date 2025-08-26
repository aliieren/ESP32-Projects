#include <HomeSpan.h>
#include "wifi_info.h"


// D19 LED aksesuar sınıfı
struct LED_D19 : Service::LightBulb {
  SpanCharacteristic *power;
  int pin;

  LED_D19(int ledPin) : Service::LightBulb() {
    pin = ledPin;
    power = new Characteristic::On();  // HomeKit üzerinden kontrol edilecek
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }

  boolean update() override {
    digitalWrite(pin, power->getNewVal() ? HIGH : LOW);
    return true;
  }
};

void setup() {
  Serial.begin(115200);
  
  // WiFi bağlan
  wifi_connect();

  Serial.begin(115200);
  homeSpan.setPairingCode("11122333");
  homeSpan.setQRID("111-22-333");
  homeSpan.begin(Category::Bridges, "Led Kontrol");
  new SpanAccessory();
    new Service::AccessoryInformation();
      new Characteristic::Identify();
    new LED_D19(19);  
}

void loop() {
  homeSpan.poll();
}
