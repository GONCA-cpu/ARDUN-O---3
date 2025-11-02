 Çift Kavşaklı Yaya Kontrollü Trafik Işıkları (Arduino)

Bu proje, karşılıklı iki araç akışını yöneten ve yaya geçiş butonuyla kontrol edilen basit bir trafik ışığı sistemi uygulamasıdır. Kod, [Buraya Kod Dosyanızın Adını Yazın, Örn: cift_kavsak_yaya_kontrol.ino] dosyasında bulunmaktadır.

🚦 Proje Tanımı
Projenin temel amacı, normal trafik akışını sürdürürken, yayaların güvenli geçişini sağlamaktır. Sistem, karşılıklı iki araç yolunu (Kavşak 1 ve Kavşak 2) yöneten **8 LED** ve iki farklı yönden yaya geçişini tetiklemek için kullanılan **iki adet butondan** oluşur. Herhangi bir butona basılması, araç trafiğini durdurur ve yayalara geçiş izni verir.

 🛠️ Kullanılan Bileşenler
* Arduino Uno R3
* 8 adet LED (Kavşak 1 için K-S-Y, Kavşak 2 için K-S-Y ve Yaya Kırmızı/Yeşil)
* 1 adet Push Buton (Karşılıklı Yaya Butonları)
* Uygun değerde dirençler (Genellikle 400 Ohm)
* Breadboard ve Jumper Kabloları

⚙️ Çalışma Mantığı
1.  **Normal Akış:** Varsayılan olarak araç trafiği yeşildir. Yayalar için kırmızı ışık yanar.
2.  **Yaya Talebi:** Karşılıklı konumlandırılmış iki butondan **herhangi birine** basıldığında, araç trafiği durdurulur (Sarı ışık atlanabilir veya kısa süre yanabilir).
3.  **Yaya Geçişi:** Araç ışıkları kırmızıya döndükten sonra, yaya yeşil ışığı yanar ve sabit bir süre (örneğin 5 saniye) boyunca yayalara geçiş izni verilir.
4.  **Akışa Dönüş:** Yaya geçiş süresi dolunca, sistem normal araç akışına geri döner.

🔌 Devre Şeması
Devre bağlantıları, bu repository'ye ekran görüntüsü  olarak yüklenmiştir. 


# Dual Intersection Traffic Lights with Pedestrian Control (Arduino)

This project implements a simple traffic light system controlled by pedestrian buttons, managing the flow of two opposing vehicle streams at a dual intersection. The code is located in the [Write Your Code Filename Here, e.g., dual_crossing_pedestrian_control.ino] file.

🚦 Project Description
The main goal of the project is to maintain normal vehicle traffic flow while ensuring safe passage for pedestrians. The system utilizes **8 LEDs** to manage two opposite vehicle lanes (Intersection 1 and Intersection 2) and **two buttons** placed on opposite sides to trigger pedestrian crossing. Pressing either button halts vehicle traffic and grants permission for pedestrians to cross.

🛠️ Components Used
* Arduino Uno R3
* 8 LEDs (R-Y-G for Intersection 1, R-Y-G for Intersection 2, and Pedestrian Red/Green)
* 1 Push Buttons (Opposing Pedestrian Buttons)
* Appropriate resistors (Typically 400 Ohm)
* Breadboard and Jumper Wires

 ⚙️ Functionality
1.  **Normal Flow:** By default, vehicle traffic is green. The pedestrian light is red.
2.  **Pedestrian Request:** When **either** of the two opposing buttons is pressed, vehicle traffic is halted immediately (may transition directly to Red or briefly via Yellow).
3.  **Pedestrian Crossing:** After vehicle lights turn red, the pedestrian green light turns on, allowing passage for a fixed duration (e.g., 5 seconds).
4.  **Return to Flow:** Once the pedestrian crossing time is complete, the system reverts to the normal vehicle traffic flow.

 🔌 Circuit Diagram
The circuit connections have been uploaded to this repository as a screenshot . 
