# ESP32 HomeKit LED Kontrol Projesi

Bu proje, **ESP32 mikrodenetleyici kartını** kullanarak Apple HomeKit üzerinden bir LED'i kontrol etmeyi sağlar. Proje, ESP32'nin WiFi özelliklerini kullanarak yerel ağınıza bağlanır ve HomeKit uygulaması üzerinden LED'i açıp kapatmanıza olanak tanır.  

## Proje Açıklaması

Proje, ESP32 kartına bağlı bir LED'in Apple HomeKit uygulaması üzerinden kontrol edilmesini sağlar. HomeKit uygulamasına cihaz ekleyerek, belirlediğiniz şifre ile cihazı eşleştirebilir ve LED'i açıp kapatabilirsiniz.  

⚠️ **Not:** ESP32 yalnızca **2.4GHz WiFi ağları** ile çalışır.  

## Kurulum

### Gereksinimler

- **ESP32** mikrodenetleyici kartı  
- **Arduino IDE** veya **ESP-IDF** (ESP32 desteği ile kurulu)  
- **Apple HomeKit** uygulaması (iOS cihazlarda)  
- **LED** ve direnç (ESP32’nin GPIO pinlerinden birine bağlanacak)  

### Adım Adım Kurulum

1. **Geliştirme Ortamını Hazırlama**  
   - Arduino IDE kullanıyorsanız ESP32 desteğini kurun.  
   - Gerekli kütüphaneleri yükleyin (`HomeSpan , esp32 Espressif Systems` vb.).  
   - ESP32 kartınızı seçin ve doğru portu ayarlayın.  

2. **WiFi Bilgilerini Güncelleme**  
   - `wifi_info.h` dosyasını açın ve kendi ağ bilgilerinizi girin:  
     ```cpp
     const char *ssid = "Wifi-Name";
     const char *password = "Password";
     ```  
   - `Wifi-Name` ve `Password` yerine kendi WiFi SSID ve şifrenizi yazın.  

3. **Kodu Yükleme**  
   - `Homekit.ino` dosyasını açın.  
   - Kodu ESP32 kartınıza yükleyin.  

4. **HomeKit ile Eşleştirme**  
   - iPhone cihazınızda **Home** uygulamasını açın.  
   - "Cihaz Ekle" seçeneğini seçin ve ESP32 kartını bulun.  
   - Şifre olarak `111-22-333` girin ve cihazı eşleştirin.  

5. **LED Kontrolü**  
   - HomeKit uygulamasındaki buton üzerinden LED’i açıp kapatabilirsiniz.  

## Dosyalar

- **Homekit.ino / app_main.c**: ESP32’nin HomeKit ile iletişimini sağlayan ana dosya.  
- **wifi_info.h**: WiFi ağ bilgilerinin bulunduğu dosya (kendi SSID ve şifrenizi buraya ekleyin).    

## Önemli Notlar

- **WiFi Ağı**: ESP32 yalnızca **2.4GHz WiFi ağları** ile çalışır.  
- **HomeKit Şifresi**: Eşleştirme şifresi varsayılan olarak `111-22-333` şeklindedir.  
- Değiştirmek için `Homekit.ino` dosyasındaki `homeSpan.setPairingCode("11122333") ve homeSpan.setQRID("111-22-333")` yapısını düzenleyebilirsiniz.  
 
