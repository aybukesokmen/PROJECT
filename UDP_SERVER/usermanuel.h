#pragma once
/*ARASTIRMA
* Soket programlamada, bir server (sunucu) programý, bir veya daha fazla client (istemci) programý tarafýndan isteklerin yönetildiði bir bilgisayar uygulamasýdýr. 
Server programý, istekleri dinler ve gelen isteklere yanýt verir. 
Örneðin, bir web sunucusu istemcilerin tarayýcýlarýndan HTTP isteklerini alýr ve web sayfalarý gibi kaynaklarý yanýt olarak gönderir.
*
* Server, ayrýca istemcilerin verileri birbirleriyle paylaþmasýný da saðlayabilir. 
Örneðin, bir sohbet uygulamasý server aracýlýðýyla mesajlarý iletir, böylece farklý istemciler arasýnda iletiþim kurulabilir.
*/

/*PROGRAM
* 
1-Winsock API için gerekli veri yapýsýnýn tanýmý yapýlýr.
2-Winsock API sürümü belirlenir.
3-WSAStartup fonksiyonu çaðrýlarak Winsock baþlatýlýr.
4-Ýletiþim için bir soket oluþturulur.
5-Soket oluþturulamazsa hata mesajý verilir ve program sonlandýrýlýr.
6-Sunucu adres bilgisinin tanýmý yapýlýr.
7-Soket baðlanýr ve baðlanamazsa hata mesajý verilir ve program sonlandýrýlýr.
8-Ýstemci adres bilgisi için soket adresi yapýsý tanýmlanýr.
9-Sonsuz döngü baþlatýlýr.
10-Ýstemciden gelen mesaj alýnýr.
11-Mesaj alýnamazsa hata mesajý verilir ve döngü devam eder.
12-Gönderen IP adresi elde edilir.
13-Alýnan mesaj ve gönderen IP adresi ekrana yazdýrýlýr.
14-Döngü devam eder.
15-Soket kapatýlýr ve Winsock sonlandýrýlýr.
*/

/*****************Versiyon**********************
* 
* ******	v1*****************
* Yazan:Aybüke SÖKMEN
* Tarih:29/03/23
* Yapýlanlar: Program yazýlýmý tamamlandý.
*/