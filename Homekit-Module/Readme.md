# ESP32 HomeKit LED Kontrol Projesi

Bu proje, **ESP32 mikrodenetleyici kartı** kullanarak Apple HomeKit üzerinden LED kontrolü yapmayı sağlar. Proje, ESP32’nin WiFi özelliklerini kullanarak yerel ağınıza bağlanır ve iOS cihazlarda Home uygulaması üzerinden LED'i açıp kapatmanıza olanak tanır.

> ⚠️ Not: ESP32 yalnızca **2.4GHz WiFi ağları** ile çalışır.

---

## Proje Açıklaması

ESP32 kartına bağlı bir LED, Apple HomeKit uygulaması üzerinden kontrol edilebilir. Cihazı HomeKit uygulamasına ekleyip belirlediğiniz şifre ile eşleştirdikten sonra LED'i açıp kapatabilirsiniz.

**Kontrol Edilen Pinler:**
- D16
- D17
- D18

İsteğe bağlı olarak daha fazla cihaz ve LED ekleyebilirsiniz.

---

## Gereksinimler

- ESP32 mikrodenetleyici kartı  
- Arduino IDE veya ESP-IDF (ESP32 desteği ile)  
- Apple HomeKit uygulaması (iOS cihazlarda)  
- LED ve direnç (ESP32’nin GPIO pinlerinden birine bağlanacak)  

---

## Kurulum

### 1. Geliştirme Ortamını Hazırlama

1. Arduino IDE kullanıyorsanız ESP32 desteğini kurun.  
2. Gerekli kütüphaneleri yükleyin:  
   - [HomeSpan](https://github.com/HomeSpan/HomeSpan)  
   - ESP32 Espressif Systems kütüphaneleri  
3. ESP32 kartınızı seçin ve doğru portu ayarlayın.  

### 2. WiFi Bilgilerini Güncelleme

`wifi_info.h` dosyasını açın ve kendi ağ bilgilerinizi girin:

```cpp
const char *ssid = "Wifi-Name";
const char *password = "Password";
