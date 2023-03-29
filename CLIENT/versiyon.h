#pragma once
/******************ARASTIRMA****************************************
* UDP (User Datagram Protocol), internet üzerinde veri iletiþimi yapmak için kullanýlan bir iletiþim protokolüdür.
* UDP'nin temel görevi, veri paketlerinin gönderimini saðlamaktýr. Bu paketler, veri transferi sýrasýnda hýzlý bir þekilde gönderilir ve alýnýr. UDP, veri paketlerinin kayýpsýz bir þekilde iletilmesini saðlar. 
Bu nedenle, ses ve video gibi gerçek zamanlý verilerin iletiminde kullanýlýr.
* UDP'nin en önemli özelliklerinden biri, TCP gibi bir el sýkýþma (handshake) yapmamasýdýr. 
Bu nedenle, TCP'ye göre daha hýzlý bir iletiþim saðlar.
Ancak, bu hýzlý iletiþim özelliði ayný zamanda UDP'nin güvenliðini de azaltýr. 
Veri paketleri doðrulanmadýðý için, paketler kaybolabilir veya deðiþtirilebilir.
* 
* UDP, genellikle oyunlar, video konferans uygulamalarý, DNS (Domain Name System) ve NTP (Network Time Protocol) gibi uygulamalarda kullanýlýr.
Özellikle, oyunlar gibi uygulamalarda hýzlý bir iletiþim saðlanmasý gerektiði için UDP tercih edilir.
*/
/**********************PROJE HAKKINDA BÝLGÝLER********************/
/*
Bu kod, C++ dili kullanýlarak bir UDP göndericisi sýnýfý oluþturmayý göstermektedir.
Bu sýnýf, Winsock kütüphanesi kullanýlarak oluþturulmuþtur ve UDP (User Datagram Protocol) kullanarak mesaj gönderme iþlevselliðine sahiptir.
Sýnýfýn yapýcý fonksiyonu, Winsock'u baþlatýr ve bir soket tanýmlayýcýsý oluþturur. Ardýndan, sunucu adres bilgileri tanýmlanýr ve soket adresi atanýr. 
Bu iþlemler tamamlandýktan sonra soket oluþturulur.

Sýnýfýn yýkýcý fonksiyonu, soketin kapatýlmasý ve Winsock'un sonlandýrýlmasý iþlevselliðini içerir.

Sýnýfýn gönderme iþlevi, soket üzerinden belirli bir mesajýn gönderilmesini saðlar. Bu iþlev, sendto() iþlevini kullanýr ve gönderilen mesajýn boyutu gibi parametreleri alýr. 
Ýþlev, gönderme iþlemi baþarýlý olursa true deðeri döndürürken, baþarýsýzlýk durumunda false deðeri döndürür.
*********************
Ýlk olarak ip ve tr girdisi yapýlýr. UdpSender.cpp dosyasýna gir ve makroda bulunan IP ve Port bilgini deðiþtir. 
proje dosyasýna git (-X64-Release)->CMD-> -\client.exe "MESAJ"

*/

/*******************VERSÝYON*************************************/
/*
* Yazan: Aybüke SÖKMEN
* Tarih:29/03/23
* Yapýlanlar: 
*1-Winsock baslatildi.
* 2-Soket olusturuldu
* 3-Send metodu olsuturuldu verilen mesaj sunucuya gönderildi.
* 4- Try Catch yapýsý ile gönderme islemi basarili veya basarisiz olarak donduruldu.
* 5-Projede UdpSender classý olusturuldu.
* Yapýlacaklar: Proje tamamlandý.
* 
*/