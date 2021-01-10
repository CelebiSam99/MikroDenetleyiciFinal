# MikroDenetleyiciFinal

### 1.	tinkerCAD yazılımda 1 buton kullanarak 4 farklı çıkışı çalıştırınız (simülasyon yaparak her adımı ve  anlatınız)
[Tinkercad](https://www.tinkercad.com/things/hbXhWg57xYd-final-1-/editel?sharecode=Pf7I4IHb57vft3oGhBaB1FVLpQpCx4IAjfPrnBCNLy8)
[YOUTUBE]()
![Şema](https://github.com/CelebiSam99/MikroDenetleyiciFinal/blob/main/Final-1-.png)
- 1. Çıkış, giriş sinyali açıldıktan 3 sn sonra aktif olacak ve giriş 1 kapanınca hemen kapanacak  
- 2. Çıkış, giriş aktif olunca hemen çalışacak, giriş sinyali 0 olduktan 5 sn sonra kapanacak 
- 3. Çıkış giriş sinyali aktif olduktan sonra hemen açılacak ve giriş sinyali kapanınca hemen kapanacak ama asla kesintisiz max çalışma süresi hiçbir zaman 10 sn yi geçemeyecek
- 4. Çıkış giriş sinyali aktif olduktan sonra hemen aktif olacak ve sabit 10 sn çalışacak ve kapanacak  

### 2.	tinkerCAD yazılımda 2 input kullanarak 2 farklı çıkışı çalıştırınız (simülasyon yaparak her adımı ve parametre ayarlamalarını anlatınız), 
- 1. Çıkış, giriş sinyali ile aktif olacak, giriş sinyali düştükten 20 sn sonra kapanacak ve kapanmadan 5 sn önce 1 sn lik uyarma yapacak
- 2. Çıkış, giriş sinyali ile aktif olacak, giriş sinyali 3 sn den önce düşerse çıkış 20 sn sonra kapanacak ve kapanmadan 5 sn önce 1 sn lik sön-yan uyarma yapacak. Ancak giriş sinyali 3 sn den fazla aktif kalırsa çıkışı düşürmek için giriş 2 den 1 sinyali gönderilecek

### 3.	Bir otoparkta giren ve çıkan araçları sayacak gerçek bir arduino devresi tasarlayınız. Sensör yerine buton kullanabilirsiniz. Çıkışları da LED ile gösteriniz
[YOUTUBE]()
![Şema](https://github.com/CelebiSam99/MikroDenetleyiciFinal/blob/main/Final-3-_bb.jpg)
- A ve B sensörleri garajın giriş ve çıkışlarına konumlandırılmıştır. 
- Girişten araç girerken I1e bağlı A sensörü aktif sinyal, çıkıştan araç çıkarken de I2ye bağlı B sensörü aktif sinyal göndermektedir. 
- Garajın girişine 3 farklı uyarı lambası yerleştirilmiş. İçerdeki araçların adedi 15in altında ise Q1e bağlı yeşil YER VAR lambası, 15e ulaşınca Q2ye bağlı turuncu SIKIŞIK lambası, 20ye ulaşınca Q3e bağlı kırmızı DOLU yanmaktadır. 
- SIKIŞIK lambası yanarken hemen yanmakta, sönerken 5 sn gecikmeli sönmektedir.
- Giriş ve çıkış olduğu esnada Q4 nolu çıkışa bağlı buzzer biiip biiip şeklinde ses vermektedir. 
- Tedbir amaçlı I3e bağlı bir butona basıldığında diğerleri sönüp sadece kırmızı DOLU lambası yanmaktadır. I3e bağlı buton bırakıldıktan 15 sn sonra sistem eski haline dönmektedir.
- A ve B sensörlerinden gelen bilgileri alıp araçların sayısını tespit eden ve uygun uyarı lambasını yakan bir Arduino kontrol sistemi tasarlayınız.
- İçerideki araç sayısını sürekli olarak LCD ekranda ilk satırda gösteriniz. 
- LCD ekranın İkinci satırında ortamdaki sıcaklığı yazdırınız. Sıcaklık sensörü olarak DHT11 kullanabilirsiniz
