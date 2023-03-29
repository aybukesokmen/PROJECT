#pragma once
/******************ARASTIRMA****************************************
* UDP (User Datagram Protocol), internet �zerinde veri ileti�imi yapmak i�in kullan�lan bir ileti�im protokol�d�r.
* UDP'nin temel g�revi, veri paketlerinin g�nderimini sa�lamakt�r. Bu paketler, veri transferi s�ras�nda h�zl� bir �ekilde g�nderilir ve al�n�r. UDP, veri paketlerinin kay�ps�z bir �ekilde iletilmesini sa�lar. 
Bu nedenle, ses ve video gibi ger�ek zamanl� verilerin iletiminde kullan�l�r.
* UDP'nin en �nemli �zelliklerinden biri, TCP gibi bir el s�k��ma (handshake) yapmamas�d�r. 
Bu nedenle, TCP'ye g�re daha h�zl� bir ileti�im sa�lar.
Ancak, bu h�zl� ileti�im �zelli�i ayn� zamanda UDP'nin g�venli�ini de azalt�r. 
Veri paketleri do�rulanmad��� i�in, paketler kaybolabilir veya de�i�tirilebilir.
* 
* UDP, genellikle oyunlar, video konferans uygulamalar�, DNS (Domain Name System) ve NTP (Network Time Protocol) gibi uygulamalarda kullan�l�r.
�zellikle, oyunlar gibi uygulamalarda h�zl� bir ileti�im sa�lanmas� gerekti�i i�in UDP tercih edilir.
*/
/**********************PROJE HAKKINDA B�LG�LER********************/
/*
Bu kod, C++ dili kullan�larak bir UDP g�ndericisi s�n�f� olu�turmay� g�stermektedir.
Bu s�n�f, Winsock k�t�phanesi kullan�larak olu�turulmu�tur ve UDP (User Datagram Protocol) kullanarak mesaj g�nderme i�levselli�ine sahiptir.
S�n�f�n yap�c� fonksiyonu, Winsock'u ba�lat�r ve bir soket tan�mlay�c�s� olu�turur. Ard�ndan, sunucu adres bilgileri tan�mlan�r ve soket adresi atan�r. 
Bu i�lemler tamamland�ktan sonra soket olu�turulur.

S�n�f�n y�k�c� fonksiyonu, soketin kapat�lmas� ve Winsock'un sonland�r�lmas� i�levselli�ini i�erir.

S�n�f�n g�nderme i�levi, soket �zerinden belirli bir mesaj�n g�nderilmesini sa�lar. Bu i�lev, sendto() i�levini kullan�r ve g�nderilen mesaj�n boyutu gibi parametreleri al�r. 
��lev, g�nderme i�lemi ba�ar�l� olursa true de�eri d�nd�r�rken, ba�ar�s�zl�k durumunda false de�eri d�nd�r�r.
*********************
�lk olarak ip ve tr girdisi yap�l�r. UdpSender.cpp dosyas�na gir ve makroda bulunan IP ve Port bilgini de�i�tir. 
proje dosyas�na git (-X64-Release)->CMD-> -\client.exe "MESAJ"

*/

/*******************VERS�YON*************************************/
/*
* Yazan: Ayb�ke S�KMEN
* Tarih:29/03/23
* Yap�lanlar: 
*1-Winsock baslatildi.
* 2-Soket olusturuldu
* 3-Send metodu olsuturuldu verilen mesaj sunucuya g�nderildi.
* 4- Try Catch yap�s� ile g�nderme islemi basarili veya basarisiz olarak donduruldu.
* 5-Projede UdpSender class� olusturuldu.
* Yap�lacaklar: Proje tamamland�.
* 
*/