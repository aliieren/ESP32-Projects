# ESP32 Projects

Bu klasör, **ESP32 mikrodenetleyici kartı** kullanarak geliştirdiğim projeleri içermektedir. ESP32’nin WiFi, Bluetooth ve güçlü işlemci özelliklerini kullanarak IoT tabanlı çeşitli uygulamalar geliştirmekteyim.  

Her proje, kurulum adımlarını ve gerekli dosyaları içeren kendi klasöründe yer almaktadır.  

---

## Projeler Listesi

### 1. **HomeKit LED Kontrol Projesi**
- **Açıklama**: ESP32 kartını kullanarak Apple HomeKit üzerinden bir LED'i kontrol etmeyi sağlayan proje.  
- **Özellikler**:
  - WiFi üzerinden HomeKit entegrasyonu (yalnızca 2.4GHz ağlarda).  
  - iOS cihazlarda **Home** uygulaması ile LED kontrolü.  
  - D19 pinine bağlı LED’i açıp kapatma.

### 2. **HomeKit Modülü LED Kontrol Projesi**
- **Açıklama**: ESP32 kartını kullanarak Apple HomeKit üzerinden birden fazla LED'i kontrol etmeyi sağlayan proje. Bu projeyi sadece LED kontrolü için değil herhangi bir cihaz için kullanabilirsiniz ama bu zaman ESP32 kart özelliklerini inceleyiniz.  
- **Özellikler**:
  - WiFi üzerinden HomeKit entegrasyonu (yalnızca 2.4GHz ağlarda).  
  - iOS cihazlarda **Home** uygulaması ile LED kontrolü.  
  - D16, D17, ve D18 pinlerine bağlı LED’i açıp kapatma.
  - Daha fazla kontrol edilebilir cihaz ekleme. 

---

## Kullanılan Teknolojiler

- **ESP32**: WiFi ve Bluetooth destekli mikrodenetleyici.  
- **Arduino IDE : Projelerin geliştirildiği ortam.  
- **Apple HomeKit**: iOS cihazlarda IoT cihazlarını kontrol etmek için kullanılan platform.  

