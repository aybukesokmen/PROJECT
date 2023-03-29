#pragma once
/*ARASTIRMA
* Soket programlamada, bir server (sunucu) program�, bir veya daha fazla client (istemci) program� taraf�ndan isteklerin y�netildi�i bir bilgisayar uygulamas�d�r. 
Server program�, istekleri dinler ve gelen isteklere yan�t verir. 
�rne�in, bir web sunucusu istemcilerin taray�c�lar�ndan HTTP isteklerini al�r ve web sayfalar� gibi kaynaklar� yan�t olarak g�nderir.
*
* Server, ayr�ca istemcilerin verileri birbirleriyle payla�mas�n� da sa�layabilir. 
�rne�in, bir sohbet uygulamas� server arac�l���yla mesajlar� iletir, b�ylece farkl� istemciler aras�nda ileti�im kurulabilir.
*/

/*PROGRAM
* 
1-Winsock API i�in gerekli veri yap�s�n�n tan�m� yap�l�r.
2-Winsock API s�r�m� belirlenir.
3-WSAStartup fonksiyonu �a�r�larak Winsock ba�lat�l�r.
4-�leti�im i�in bir soket olu�turulur.
5-Soket olu�turulamazsa hata mesaj� verilir ve program sonland�r�l�r.
6-Sunucu adres bilgisinin tan�m� yap�l�r.
7-Soket ba�lan�r ve ba�lanamazsa hata mesaj� verilir ve program sonland�r�l�r.
8-�stemci adres bilgisi i�in soket adresi yap�s� tan�mlan�r.
9-Sonsuz d�ng� ba�lat�l�r.
10-�stemciden gelen mesaj al�n�r.
11-Mesaj al�namazsa hata mesaj� verilir ve d�ng� devam eder.
12-G�nderen IP adresi elde edilir.
13-Al�nan mesaj ve g�nderen IP adresi ekrana yazd�r�l�r.
14-D�ng� devam eder.
15-Soket kapat�l�r ve Winsock sonland�r�l�r.
*/

/*****************Versiyon**********************
* 
* ******	v1*****************
* Yazan:Ayb�ke S�KMEN
* Tarih:29/03/23
* Yap�lanlar: Program yaz�l�m� tamamland�.
*/