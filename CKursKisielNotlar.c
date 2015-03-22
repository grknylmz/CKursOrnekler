C DERS NOTLARI
Declaration en basta belirtilecek mesela int=x; fonksiyonun sadece basında yazılacak.
Declaration(bildirim)
int x=10;
Definition(tanımlama)
Int func(int)
FONKSİYONLAR

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
void printName(name){
printf(name);
}
printName(“Gurkan\"”);
//////&////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

İC İCE FONKSİYONLAR
Function(){
	Function();
	Function();
}

          					  İŞLEVLERİN TANIMLANMASI
int func(){

}
double getSinus (value){

}
Bir fonksiyonun bir adet geri donus degeri vardır.
implicit int== eger fonksiyonun basına bi tur degeri yazmazsan int olarak varsayar.
Fonksiyonun geri donus degerinin olmamasını istiyor isek VOID anahrar sozcugunu kullanıyoruz.

void func(){
}
Yazdıgın kod sadece C de degil ayrıca c++ dada derlenebilecek kadar ozenle yazılmıs olursa buna
cleanC denir.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int func(void){
}
double getCircleArea(double radius){
/////
}
int getMax(int a , int b){
int x;
////
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double getTriangleArea(double edge1,double edge2,double edge3){
	double hc=0.5*(edge1+edge2+edge3);
	double area=hc*
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CAGIRMA
int main(){
	int yoncaAge(void);
}

C de ve C++ da alt programın icerisinde alt program olusturulamaz.
** calculate & find verme GET verebilirsin.
func() parantez parameter parantezi
** double func(int x,int y)
func onunue belli bir tur yazmazsan otomatik olarak implicit int yani gizli int olarak varsayılır.
C de iç içe fonksiyonlar tanımlanamaz sadece ana fonksiyon kendi içerisinde geri çağrılabilir.

FONKSIYONLARIN GERİ DONUS DEGERLERİNİN OLUŞTURULMASI
RETURN statement
if		for	while	do while		switch	goto	break 	continue

return 	-------> çalışan fonksiyonu bitirme ifadesidir.
çıkan değeri geri iletir.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double getCircleArea(double Radius){
	return pi*radius*radius;

	if(radius <10 )
		printf(“Cemberin yarıcapı cok kucuk”);
		return 0;
	else
		return radius*pi*radius;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double getCircleArea(double radius){
	double area;
area= pi*radius*radius
return area;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int getmax (int a , int b ){
	if(a>b)
		return a;
	else
		return b;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int getmax (int a , int b, int c){
	if(a>b)
		if(a>c)
			return a;
	if(b >a)
		if(b>c)
			return b;
	return c;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int getmax3(int a , int b , int c){
	int max;
	max=a;
	if(b>a)
		max=b;
	if(c>max)
		max =c;

	return max;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int getDigitNumber(int a){
	int c =0;
	if(a==0)
		return 1 ;
	while (a != 0){
		c++;
		a=a/10;
}
return c;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
C++ da kesinlikle donus degeri olmalıdır , c de ise donus degerinin olup olmaması onemli degildir. Tek sonuc varsa geri donus otomatik olarak yapılır.
Bir kurala gore birseyi yazmasakta oluyor ise yazmasak daha iyi olur. Fonksiyon icinde control amaclı return deyimi kullanılır.
C de geri donus degerleri bool yerine int dir.  Boolean yoklugunda int kullanılmakta , C++ da ise bool lar mevcut.
int isValidCard(int ch){
}
C de 0 donusu false , 1 ve diger deger donusleri ise true olarak ele alınabilir.
Bazı kutuphanlerde negatif deger false veya pozitif deger false bildirimini yapabilir. İlla sıfır olacak diye birsey yok.
C de string kavramı yok.


in
1-	Standart Fonksiyonlar(printf , sqrt)
2-	Kutuphaneler
C de string olmadıgıından dolayı  char func() olarak dizi kullanılır yani C de string harflerden oluşan dizi bütünüdür.
char str[100]
Bazı int lere numaralandırma int I deriz cunku bunları bazı stringlerle tamsayılarla eşlemek için kullanırız.
Geri donus degeri number dır.
printf fonksiyonunda geri donus degeri int dir bu int degeri yazdırılan karakterleri saydırtarak ekrana yazdırır.
Geri donus degerini kullanmamak discard the return value dur.

Geri donus degeri nerede saklanır???

FONKSİYON CAGIRMA(Function Calls)
func(arg1,arg2,… ){
}
int func(int x, int y ){
}
func(a+10,b*2-3){}
Once ifadelerin degeri hesaplanır ondan sonar parameter degiskenine atama yapılır.
int func(){
	double d1,d2;
	getCircleArea(d1+d2);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
a = getmax(x,y);   //fonksiyonu degiskene atama
area=getCircleArea(d);
x= getCircleArea(d1)+getCircleArea(d2);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
abs(x)  		 // mutlak deger fonksiyonu
sqrt(x) 		// karekök fonksiyonu

void func() geri donusu olmayan fonksiyon!!
Geri donusu olmayan fonksiyonlar ayrıca sonuna  ; almalıdır.
func(); gibi
void clc();
double sin(double angle); //// kullanılabilir fakat mantık hatası var. Kullanmayacagın degeri çağırmanın bi mantığı yok.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int main(){
	int x;
	x=printf(“Gurkan”);
	return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

a=func(x);
Fonksiyonun geri donus degerini a degerine ata.
Senaryolar (Neden?)
1-	Degiskeni tekrar baska bi yerde kullanmak istiyorum
b=getValue();
if(b>10)
	m++;
değişken sadece tek bir yerde kullanılır ise bu kullanım yanlış, birden fazla yerde kullanılacaksa kullanım doğru , tek kullanımlık değisken tanımlamaları kodu okuyan kisiyi yanıltır.

/// foksiyon çağrıları bitecek , standart kütüphaneler vs.



C notlar 08.11.2014
Func(x,y)

X= func(); birden fazla yerde kullanmak istediğimde değişkene  atayıp kullanabilirim.
İç içe fonksiyon
f1(f2(f3()));

int main(){
	int x , y,z,t;
	int max;
	printf(“4 sayi giriniz:”);
	scanf(“%d%d%d,&x,&y,&z,&t”);

max=max2(max2(x,y),max2(z,t));
printf(“en buyuk = %d\n”, max);
///////
M1=max2(x,y);
M2=max2(z,t);
…
…

	return 0;
}
İç içe fonksiyonlar verimli.



call by value
pass by value




call by reference
&y , &x
#include <stdio.h>
void func(int a){
	a=9999;
}

int main(){
	int x=10;
	printf(“x= %d\n”,x);
	func(x);
	printf(“x = %d\n”,x);

}







Geleneksel (eski C) Ornek
double func(a,b,c)
double a;
float b,c;
{
	return a+b+c;
}
Global bir değişken bir fonksiyonun parameter değişkeni olamaz!!!!


default argument;

func (int a , int b =200, int c =300)
func(10)
a ya 10 atanır.
b ve c ye otomatik olarak  200,300 atanır.
function overloading
#include <stdio.h>

void func (int x){
	printf(“parameter degiskeni int olan func islevi”)
}
void func (double  x){
	printf(“parameter degiskeni double  olan func islevi”)
}

void func (long x){
	printf(“parameter degiskeni long olan func islevi”)
}
constans-sabitler –değişmezler
token
	keyword
	identifier
	constant
	operator
Constant (sabit) larında türleri mevcut.
constants
	*integer constants
	*floating constants

tamsayı sabitleri
	character literals(karakter sabitleri)


int main(){
	int x,y,z;
	x=141;
	y=0xab;
	z=0141;
	printf(“x= %\n”,x);
	printf(“y= %\n”,y);
	printf(“z= %\n”,z);
	return 0;
}

typeid(constant)c++ da tür yazdrma


C++
Long yapma
#include <iostream>

using namespace std;
int main(){
	cout <<typeid(45).name() << endl;
	cout <<typeid(45L).name() << endl;
	cout <<typeid(45l).name() << endl;
	cout <<typeid(451).name() << endl;

}

int main(){
	cout <<typeid(45).name() << endl;
	cout <<typeid(45U).name() << endl;
	cout <<typeid(45L).name() << endl;
	cout <<typeid(45UL).name() << endl;-U Unsigned

}
!!! Gerçek sayı sabitini kullanırken nokta kullanılmalıdır.
,  farklı bir anlam ifade eder.

5.0 yerine 5.  ayrıca 0.125 yerine .125 yazılabilir.

Scientific Notation yazış stili

25e-23    25x1023
int main(){
	double d=23e3;
	printf(“d = %\n” , d);
	return 0;
}

‘a ’tek tırnak karakteri sadece karakter sabiti kullanılırken kullanılır.
character encoding

grif  karakterin goruntusu

punctuation karakterler @,{][]& mesela
#include <stdio.h>
#include <ctype.h>
int main(){
	int k;
	for(k=0;k<128;k++)
		if
}

‘\’ belli bir ifade içerir . escape!
Kaçış sekansları – escape squence

'\0' sonlandırıcı karakter (null character)
'\a' çan sesi (alert)
'\b' geri boşluk (back space)
'\t' tab karakteri (tab)
'\n' aşağı satır (new line)
'\v' düşey tab (vertical tab)
'\f' sayfa ileri (form feed)
'\r' satır başı (carriage return)
'\"' çift tırnak (double quote)
'\'' tek tırnak (single quote)
'\?' soru işareti (question mark)
'\\' ters bölü (back slash)
C  de bütün çağrılar call by value dır.
Pointer ile çağrı yapılır.
Adres tutan değişkenler pointer değişkenlerdir.
STANDART KÜTÜPHANE VE STANDART FONKSİYONLAR
Standart kütüphanesi 160 adet fonksiyon bulunduruyor.(Common interface – Ortak arayüz)
Neden standart kütüphaneler mevcut?
-Öncelikli olarak standardizasyonu sağlamak amacı ile.
STANDART C Kütüphanesi
<math.h>

int main(){
	double a,b;
	double dval;
	printf(“iki gercek sayi giriniz.”);
	scanf(“%l%lf”,&a,&b);
	dval=pow(a,b);
	printf(“dval= %f\n”,dval);
	return 0;

}
POW  Üs alma fonksiyonu

int main (){
	int k;
	for(k=0;k<=100;k++)
	printf(,k,sqrt(k));
}
myprog > koktablo.txt die yazdırdığında bunu bir dosyaya yönlendirmis oluyorsun. Yani dosyaya yazdır
fmod modunu alma;

I/O

standard input stream		--	Program	-- 	output stream
(standard input)						(standard output)

Variadic Fonksiyon;
Sadece giriş çıkış işlemleri için kullanılır.
Elipsise geldiğimizde istediğimiz kadar argüman gönderebiliriz.
int neco(int x,int y,int z , …..);
int printf(const char * ptr,…);

String ‘ in C dilinde temel inşa anlamı char karakterinin  dizi şeklinde printf fonksiyonu ile ekrana yazdırılmasıdır.
\n “new line”
\t “tab ”
“\x42”B harfinin 16 lık sistemde hexadecimal ifadesi
Örneğin;
	(“\x42URS\X41\n”);
	(“\102\101\102\101\n”) BABA kelimesinin 8 lik sistemde yazılmış hali;
int main(){
	int x = 345;
printf(“KAYA”,x+10);
//Formatlama yapmak gerekmektedir.
return 0;
};

printf(“x= %d\n”,x) %d onluk sayı sisteminde yazdır
%x 16’lık sayı sisteminde yazdır
%o 8’lik sayı sisteminde yazdır.


int x= 100;
int y= 200;
int z=300;
printf(“deger 1 = %d\ndeger 2= %d\ndeger3=%d\n,x+234,y*2-542,z*3+19”);

int vat = 18;
printf(“kdv %%%d\n”,vat)

Printf fonksiyonunun geri donus degeri;
//////////////////////////////////////////////////
int x=198;
int retval;

retval=printf(“%d,x”);
printf(“\nretval\n=%d\n”,retval);
burada ikinci printf fonksiyonu ekrana 3 yazdırır cunku retval in numeric gosteriminde 3 tane eleman olup geri donus turü inttir.
//////////////////////////////////////////////////

SCANF
Formatlı giris fonksiyonu.
int scanf(const char * p ,…)


scanf(“%d%d%d”,x,y,z);

///////////////////////////////////////////////
int x,y,z;
printf(“Uc sayi giriniz”);
scanf(“%d%d%d”,&x,&y,&z);

printf(“%d + %d + %d = %d\n”,x,y,z,x+y+x);
return 0;

eksta girilen degiskenler printf in buffer ında scanf de çağrılmasa bile bulunur.

//////////////////////////////////////////////////////
int x,y,z
printf(“bir sayı girniz”);

/////////////////////////////////////////////////////
int ival ;
double dval;
printf(“bir giris yapın”);
scanf(“%d%lf”,&ival,&dval);
printf(“ival=%d\n”,ival);
printf(“dval=%f\n”,dval);
///////////////////////////////////////////////////////
int max3(int a,int b,int c){
	int max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
return max;
}
int main(){
int x,y,z;
printf(“uc sayi giriniz”);
scanf(“%d%d%d”,&x,&y,&z);

printf(“%d,%d ve %d nin en buyugu %d\n”,x,y,z,max3(x,y,z));
}

%s ------- char almak icin girilen format deferi
ahmet yazısını %x%s şeklinde formatladığımızda
a sayısınının değerini alır ve ardından hmet stringini %s bölümüyle formatlayıp atar.


///////////////////////////////////////////
int x,y,z;
int retval;
printf(“uc sayi girniz”);

retval= scanf(“%d%d%d”,&x,&y,&z);
printf(“retval = %d\n”,retval);
********** 3 sayi girildiginde retval degeri sonuc olarak 3 verir
ama basa iki sayi 3. string girildiginde retval 2 olur
basa string gerisi string olur ise retval 0 olur.

ctrl z +  enter - standart inputun bufferını boş bırakma simulasyonu



int main (){
	int x;
	for(;;){
		printf("giris:");
		scanf("%d",&x);
		printf("onluk  : %d\n",x);
		printf("onaltilik : %x\n",x);
		printf("sekizlik  : %o\n",x);
		printf("************************************\n");

	}

}





Operatorler
32 anahtar sozcuk
45 operator var

operand	-->	operatorun isleme soktugu elemanlara denir.

unary  1 operand
binary	2 operand
ternary	3 operand----> ? operatoru muhtemel kastedilen

prefix onek		!x
postfix sonek		y++
infix araek			a>b

Operator oncelik durumları

1///		()  [] , ->
2///		++  --  !  sizeof type 						sagdan sola
3///		* / %
4///		+  -
5///
6			> >= < <=
7			== !=
8			&
9			^
10		|
11
12
13//: ?  														sagdan sola
14// =														sagdan sola

			Toplama ve Cıkarma Operatorleri
			////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////

			#include <stdio.h>

			int main(){
			int x,y;

			printf("iki sayi giriniz :  ");
			scanf("%d%d",&x,&y);

			printf("(%d)+(d%) =  (%d)\n",x,y,x+y);
			printf("(%d)-(d%) =  (%d)\n",x,y,x+y);


			return 0;
			}

			////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////
			////////////////////////////////////////////////////////


			unery 2.oncelik seviyesindedir.

			+x =34;  //// gecersiz


			Carpma bolme ve mod operatorleri ;

			0 a bolme calısma zamanı hatası verir.

			Aynı sekilde mod islemindede hata verir.







			%% ekrana yazdırılırken cift kullanılmalı!!



			printf("birler basamagı =  %d\n", x%10)
			printf("onlar basamagı =  %d\n", x%100/10)
			printf("yuzler =  %d\n", x/10%10)
			printf("birler basamagı =  %d\n", x%10)

			......................


			4 basamaklı bir sayı
			7295

			y=(x%10)*1000+(x%100/10)*100......
			printf("(%d) tersi %d ",x, )

			eger double degiskenler olacak sekilde degisken tanımlanır ve modu alınırsa derleyici gecersiz olarak hata verir dilin kuralını çiğnedigimiz icin


			Arttırma ve eksiltme operatorleri



			x++ > 10 seklinde ifadeler kullanılmaktadır.

			10   +1
			12
			12    +1
			12
			12



			int x = 15 ;
			int y = 6 ;

			printf(%d\n" , ++x - y--);  /// = 10 x = 16 y= 5
			printf(%d\n" , x++ - --y); /// = 16-4= 12 x = 17 y = 4
			printf(%d\n" , ++x + --y);	/// = 21
			printf(%d\n" , x+y);




			//////////////////////////////////////////////////////////////////////////////
			if ( x!=5 ||  x!=10)
				m++;					/// yazım yanlis bu ifade herzaman dogrudur.


			//////////////////////////////////////////////////////////////////////////////


				0 || 0 = 0 !!!!!!



				!(x && y)	  ----->  !x || !y

			///////////////////////////////////////////////////////////////////////////////

			int getmid(int a, int b, int c){
				///// a en buyuk yada en kucukse a ortancadır.
				///// a nın logic degiliini alırsak max yada min durumundaykeb  ! ile ortanca deger olur.

				if (!(a>b && a>c || a<b && a<c))
					return a;
					.
					.
					.
					return b;
					.
					.
					.
					return c;


			}

			////// eger cıkan deger 0 ise false olarak degerlendirilir her zaman

			/////// IDIOM kullanımı


			if ((x=func())==0)
				foo();


			if ((x=func())!=0)
				foo(int x);


				Tanımsız Davraıns


				if (x>5)
					y++,a=c,b=a+y;


				Yorum Satırları
				ctrl + k+c

				Kaynak dosyada belirli bir yerlesim duzeni mevcut

				/**************************************************************************************************************

													file	: lcddriver.c (implementation of lcd module)
													author : Ogulcan Oner (a.k.a speedy coder)
													company:
													19.12.2013
													last update:
													all rights reserved by .....

				**************************************************************************************************************/


				/* 		Global Declarations		*/







				/*			Function Definitions		*/
				/*


				function	isprime
				test primeness of an integer



				*/


				BİLİNİRLİK ALANI VE ÖMÜR

				(Scope) & (Storage Duration lifespan)


				Name Lookup kuralları iyi bilinmeli

				1-Isim arama context e gore yapılmaz
				2-Isim arama bir kez yapılır , aranan isim bulundugunda arama biter.

				/// undeclared identifier

				çift anlamlılık hatası


				void func(){
					int x;
				}

				void foo(){
					x = 23; //////////////yanlış kullanılamaz local degisken
				}


			1- File scope
			2- Block scope
			3- function prototype scope
			4- function scope


			degiskenin tanıtıldıgı noktadan itibaren derleyici degiskeni dosyada aramaya baslar.


			////////////////////////////////////////////

			visibility

			int a= 10;

			int main (){
				int a=20;

				printf("a = %d\n",a);
				return 0;
			}


			burada geri donus degeri sadece 20 olur cunku erisim yok unvisible


			:: scope resolution (c++ da) global degiskene erisme sansı bu sekilde



			Ömür(Storage Duration )


			static
			automatic
			dynamic

			STATIC ÖMÜRLÜ OLANLAR

			global varlıklar(global degiskenler , fonksiyonlar)
			static anahtar sozcuguyle tanımlana yerel degiskenler , stringler.

			int g = 20 ;  /// static omurlu




			void func(){

				static  int y =99;
				char *p="aliriza";
			}



			int main (){
				g++;
				printf("g=%d\n",g);

				func();

				printf("g=%d\n",g);


				return 0;
			}


			///////////////////////////////////////////////////////


			void func (){
				static int x=20;

				printf("x=%d\n",x);
				x+=5;

			}


			int main (){
				for (int k =0;k<10;k++)
					func();


				return 0;
			}


		/////////////////////////////////////////////////////////////

		void func(){
			int y=45;  /// otomatik ömürlü
		}


															ÖMÜR										SCOPE

		GLOBAL DEGİSKENLER					STATIC										FILE

		YEREL DEGİSKENLER 						AUTOMATIC								BLOCK SCOPE

		(STATIC) YEREL DEGISKENLER			STATIC										BLOCK SCOPE


		//////////////////////////////////////////////////////////////


			int callCounter=0;

			void func(){
				++callCounter;
				printf(".... kez cagırıldı")

			}


			int main(){

			func();
			func();
			func();
			func();
			func();
			}


		//////////////////////////////////////////////////


		Parametre degiskenleri static omurlu olamaz!!



		//// asla kullanma

		int gCount;	//// kesinlikle 0 degerini ver. 0 ile baslar hayata ama kod cirkin.

		int main(){
			gCount++;

			return 0;
		}


		Global degiskenlerin ilkdeger verici ifadeleri sabit ifadesi olmak zorunda

		int x=5;
		int y=x+44; olamaz.

		#include <stdio.h>

		int func(){
			printf("func islevi cagrıldı");

			return 17;
		}

		int g = func();

		int main(){
			printf("main basladı");

			printf("g = %d\n",g);


			return 0;

		}




		code segment  kodlar
		data segment	 statik veriler
		stack segment automatic veriler
		heap	dinamik veriler






	#include <stdio.h>

	int main(){

		int a;

		printf("a sayısını giriniz");
		scanf("%d",&a);
		printf("a = %d\n",a);


		return 0;
	}


Deyimler ;

Statements

bildirim
yurutulebilir


Expression Sttatement
Compound Statements
Null Statements
Control Statements

Kontrol Deyimleri

if
while
do while
for

switch

goto

break;

return

continue ;





if (x != 0 )    					if(x)

aynı kullanım



if(y==0)
b++;

ile

if(!y)
b++;

aynı kullanımda


if(x>10 && y<20 && z<90)

!!!!!Buradaki kısa devre durumuna dikkat edilmeli!


////////////////////////


if(x++)
	func(x);

foo(x)

////////////////////
if(x>10)
	m++,k--,t=5;



/////////////////

if(5==x)

 derse yanlıs yapma riskine karsı boyle islem yapılır embed

 Olusma sıklıgı yuksek olan ihtimali basa yazmalıyız.


 KARAKTER BAZLI GIRIS CIKIS FONKSIYONLARI

 getchar karakteri alan

	int getchar(void);

 ////////////////

 int ch;

 printf("bir giris yapab");
 ch=getchar();  /////////////echo veren fonksiyondur getchar

 ilk harfi alır ilk charı

 Line buffer fonksiyonlar!


 ard arda yapılan cagrılarda bufferdaki elemanlar sırası ile kelime elemanlarını sırası ile degiskene atar.


 printf("ch = %d\n",ch);


 ////////////////////


 A456MURAT

 scanf ve getchar arasındaki bagıntı ile dene!

 return 0;




				(conio.h)
	/getchar
	echo verdi
	new line lazım
	enter a ihtiyac var


	/getch
	echo vermiyor
	enter a ihtiyac duymaz


	/getche
	echo veriyor
	ama enter a ihtiyac duymaz




	while ((ch=getchar())!='\n')
		ival= ival*10+ch-'0' ;
			///////////harfin degerini sayının degerine atama




		////ekranı bekletmek icin kullanılabilir.

		for(k=0;k<1000;k++){
			if(k !=0 && k%100==0)
				getch();
			printf("%3d",k)
			}

putchar karakteri veren


putchar(65);
putchar('A');

putchar(getch()+1);//klavyeden girdiginin bir fazlasını ekrana yazdırır.



Girilen verinin sadece rakama olmasını istiyor isem ;;

for(;;){
	c=getch();
	if(c>='0'&&c<='9')
	putchar(c);

	}
//////////////////////////


	Klavyeden girilen sayının 3 e bolunuyorsa 3 veya bolunmuyorsa vsvsvs....

girilen sayının her bir karakterini toplarsam

while((c = getchar()) !='\n')
	sum += c-'0';

	if(sum%3==0)
	.
	.
	else
	.
	.
////////////////////////////////

%c


ctrl + z ---> standard inputun buffer ını boş bırakıyor.

								Test Fonksiyonları

count = !!isprime(x) +	!!isprime(y) + !!isprime(z)+!!isprime(t);





/////////////////////// 06.12.2014 C Kursu /////////////////////////////////////

system("dir");
system("pause");

BREAK;


# _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <con.io>

int main{
	printf("evet (e) hayir mi(h)");

	ch = getch();

	while (ch != 'e' && ch != 'h' )
		ch = getch();


	return 0;


}




int main{
	printf("evet (e) hayir mi(h)");

	ch = getch();

	while (1){
		ch = getch();
		if(ch = 'e' || ch == 'h')
			break;
	}

	printf("\n&c",ch);

	return 0;


}


	while ((ch = getch()) != 'e' && ch != 'h')
		;








	int main(){
		int flag = 0;
		int x;
		printf("tamsayi girisi yapacak misiniz?(e)(h)")


		while(1){
			while((ch=getch())!='e' && ch != 'h'){
				countFalseEnter +=1;
				;
			}

			while (ch == 'e' || ch == 'h'){
					printf("Sayiyi girin");
					scanf("%d",&x)
					countZSum +=x;
					printf("tamsayi girisi yapacak misiniz?")

			}
		}



	}

	/////////////////////////////////////////

	while((ch = getch()))




	for(k=0;;++k)
		printf("%d",k)

		ikinci ifadesi olmayan for dongusu kosulun her zaman dogru oldugu anlamına gelmekte.

		for(;;)
		sonsuz dongu idiomu



		int main(){
			int k;
			int n;
			printf("kac kez?");
			scanf("%d\n",&n);
			for(k=0;k<n;k++)
				printf("Necati");


		}






		double sum = 0.;


		printf("%.10f",sum)////sum ı 10 haneye kadar yazdır.
		printf("%3d")---> 3 karakterlik alan yazdır %d lik bolumu
		printf("%-6d!")---> sola dayama



		Asal Sayı Kontrol Algoritması

		int isprime(int val){
			int k;

			if(val==0 || val==1)
				return 0 ;

			if(val % 2 == 0)
				return 2;

			if(val % 3 == 0)
				return val == 3;

			if(val % 5==0)
				return val == 5;

			for(k = 7 ; k*k <= val ; k+=2)
				if(val % k == 0 )
					return  0  ;
			}


		int main(){
			int k ;
			int low,high;
			int perimeCounter = 0 ;

			printf("Aralik degerlerini giriniz");
			scanf("%d%d",&low,&high);
			if(low>high)
			{
				int temp = low;
				low = high;
				high = temp;
			}

			for(k = low; k<= high;k ++)
				if(isprime(k)){
					printf("%d",k);
					primeCounter++;
				}

			printf("%d tane sayi var",primecounter);
			}


			return 0;
		}



	foreach Dongusu
	c++ da range based for loop

	syntax

	for(int x : a)

	İÇ İÇER DONGULER (NESTED LOOPS)

	kare * uzunluk algoritması odev


	int k = 10

	for(int i = 0 ; i < n ;i++)
		if(n%i !=0 && k%i==0)
			printf("%d",i);

	KOŞUL OPERATORU
	
	
	logic ifade beklenen yerde void kullanılamaz.
		/////////////////////////////////
		
		
	a>b ? a:b *5
	
		/////////////////////////////////
		
		
		
	if (a>10)
		x=y;
	else
		x=z;
	
	
	x=a>10?y:z;
	
		/////////////////////////////////
	
	if (val > 100)
		return x;
	else
		return y;
		
	
	return val>100?x:y;
	
	/////////////////////////////////	
	
	if (mday > (isleap (y)=? 29 : 28 ))
		count++;
		
		
		/////////////////////////////////
		
		
		if(x>(a>b ? a:  b))
			m++;
			
		if (a>b){
			if(x>a)
				m++;
		}
		else if(x>b)
			m++;
			
	/////////////////////////////////
	
	
	
	
	x>10 ? a : b = 5;
	
	CPP de gecerli c de gecersiz bir ifade
	
	



















İşlev Bildirimleri (Function Declaration)

1- Derleyici geri donus degerinin turunu bilmek zorunda.

2- Kac tane parametre deigiskeni var bilmesi gerekir.

3- Herbir parametre degiskeninin turunun ne oldugu bilinmesi gerekir.

double func (int a , double d)

/////////////////////////////

#include <stdio.h>

int main(){
	int ival ; 
	
	printf("bir tamsayi giriniz");
	scanf("%d",&ival);
	dval = sqrt(ival);
	
	printf("dval = %f \n" , dval );
	
	return 0;
}


C++ da yukarıdaki ornekte sqrt ismi aranıp bulunamazsa syntax hatası olur.
///////////////////////////////

double sqrt(double);

#include <stdio.h>

int main(){
	int ival ; 
	
	printf("bir tamsayi giriniz");
	scanf("%d",&ival);
	dval = sqrt(ival);
	
	printf("dval = %f \n" , dval );
	
	return 0;
}

Uzantısı h olan dosyalar bildirim dosyalarıdır.

Fonksiyon Bildirim Syntax ı 

double func(int , int , int )



double func();

double foo(void);
bu iki bildirimdede verilen fonksiyonların parametre değişkeninin olmadığı anlamına gelir. (C++)

Ama C de 

Üstteki verilmemiş 
Alttaki yok demektir.



Fonksiyon bildiriminde parametre türlerinin yanısıra parametre değişkenlerinin de ismi yazılabilir.

fle Scope 
block scope
function prototype scope
function scope


int main(){
	int ch; 
	
	printf("bir karakter giriniz");
	ch = getchar();
	
	if(isupper(ch))
		printf("buyuk harf\n");
	else 
		printf("buyuk harf degil \n ");
	
	
	return 0;
	

}


C++ da önişlemci komutları ekli olmadığı için  3 adet syntax hatası verir.

C de hata vermez. Doğru çalışması doğru kod olduğu anlamına gelmez.

C de function overloading yok. C de bir isimli bir fonksiyondan sadece bir adet olabilir.

KONULAR

Önişlemci Komutları(4-5 Saat)
switch Deyimi (2 saat)
goto deyimi(30 dk)
tür donusumleri (3 Saat)
Uygulama(rasgele sayı üretimi 2 Saat)
Diziler (10 Saat)




Önişlemci Komutları Preprecessor Directives

/# ile baslar 

/# null directive bos satırların gorsel takibini kolaylastırmak icin kullanılabilir.

#include
#define
#undef
#if
#endif
#else
#elif
#ifdef
#ifndef
#line
#error
#pragma


/#include Komutu

Dosyayi bul icerigi kopyala ve yapistir. %99.5 baslik dosyalarini include etmek icin




#include <stdio.h>
#include "koray.h"

Kodun sonuna sonlandırıcı atom koyulmamalı


Standart kutuphanenin komutları < > icinde yazılmalı
Cift tırnak icinde kullanılıyorsa once ana dizine degil baska bir dizine bakar ardından bulamazsa ana dizine bakar

Onislemci komutları programın yavaslamasına sebep olmaz icinde executable code bulunmaz , sadece tanımlama bulunur icinde bu yuzden performans
 kaybı olmaz




/#define Komutu

Bul ve degistir islemini yapıyor. Mekanik kopyala yapıstır işlemi


#define 	SIZE 	500 		///// size gordugun heryere 500 yaz


bulundugu yerden asagıya dogru tarama yapar.

Degistirilecek degerin isim formunda olması gerekmekte yani constant degistirilemez.

#define 	NECO ((100+200)+SIZE/2))		Seklinde yazılabilir

#define		MSG 		String yazısıda kullanılabilir.

#define 		SIZE			1000

printf("SIZE = %d\n",mysize); da stringin icinde oldugu icin degistirme yapılamaz.

!!!!   ; kullanılması sıkıntı yasatır.

#define la olusturulan herseye macro denmekte

Yerdegistirme islemlerinde onislemci kesinlikle aritmetik islem yapmaz.


Sembolik Sabit Macro olarak tanıtılan degere denir

Sabitler onislemci komutlarıyla degistirilemezler.


#define		LIMITED

#define 	NO_OF_BOOKS		3453

Tamamı buyuk harf olarak secilen isimler onislemci define komutuyla tanımlanan isimlerdir. Sembolik Sabittie.


#define		 DOLLAR			double

void remoteOperation(int status);

int main(){
	remoteOperation(OFF);
	remoteOperation(STANBY);
	return 0;
	
}

Standart kutuphanenin referans kitabı The C Standard Library Plauger	/	accu.org	/	The C Programming Language A Modern Approach


Algorithms in C Robert Sedgewick	/	

limits.h ---->  INT_MAX    INT_MIN   Tamsayi degerlerinin max ve minimum degerleri ve diger degerler.


#define 	RAND_MAX		32767

 
#undef komutu


ifdef komutunda eger önişlemci komutunda 

#ifdef 	ABC şeklinde girilen ABC önişlemcide define olarak tanımlanmışsa girilen kod çalışır.

1- Yerdeğiştirme
2- Sildirme
3- Koşul

//// #UNDEF    ISIM

Isimin tanımını ortadan kaldırılıyor.


#define ettikten sonra tekrar #define kullanman aynı tanım için kesinlikle kullanılmamalıdır /// Tanımsız Davranış


#include "abidin.h"
#include "baris.h"
#include "oguz.h"

Aynı ismi define ettiklerini goz onunde bulunursak ;


SWITCH CASE 

switch(exp){
	case 1 :
	
		break;
	case 2 : 
 
		break;
		
	.
	.
	.
	.
	
	default : 
	
		break ;
}

case sayıları degistrilebilir istendiği şekilde

case 3;
case 17;
.
.
.


int twoSum(int a , int b){
	return a+ b ;
}

int main(){     

	printf("iki sayi giriniz.\n")
	return twoSum(scanf("%d",&a,),scanf("%d",&b));
	


}


#define ADD_RECORD
#define DEL_RECORD
#define UPDATE_RECORD


switch(option)
{
	
	
}






/////////////////////////////






#include <stdio.h>

void printDate (int day , int mon, int year){
	printf("%02d",day);
	
	switch(day){
		case 1 : 
		case 21:
		case 31: printf("st");break ;
		case 2 : 
		case 22: printf("nd");break ;
		case 3 : 
		case 23: printf("rd");break ; 
		default: printf("th");
	}
}
int main (){
	
	int d , m , y ; 
	
	printf("gun ay yil olarak tarihi giriniz");
	
	scanf("%d%d%d",&d , &m , &y);
	printf(d , m , y);////%02d --> doldurma artı 2 karakter
	
	



	return 0;
	
	}


case in içinde küme parantezi kullanılarak bloklanmasına gerek yok . 




const char * const p[]={"","JAN","FEB","MAR","APR","MAY","JUN"} ;


GOTO deyimi



Local Jump
Long Jump

C C++ Java C# long jump yok

Ripple Effect

Function Scope GOTO : 





Goto nun kullanım yerleri:

İç içe döngülerden en içte olanda iseniz örneğin ; bütün döngülerden çıkmak istediğinde kullanılabilir.



type : tür dönüşümleri

implicit type conversion
explicit type conversion

long double
double
float

unsigned long
long
unsigned int
int

char/short



integral promotion kuralında char/short türündeki ifadeler int e yükseltilirler.

Tam sayıyı tam sayıya bölmek 
Çarpma taşma sorunu 

Fonksiyonlarda atama tür dönüşümü yapılıyor.
Fonksiyonların geri fonus degeri uretmesinde.

int x = { exp }; --> Veri kaybının engellenmesi için yapılır ?

!! Büyük tamsayı türünden küçük tamsayı türüne dönüşüm yapma


c = (char)ival ;

func dark (name:String) -> Int 

kucukten buyuge sıkıntı yok
buyukten kucuge asla atama
tamsayıdan gercek sayı turune (keyfi)
gercek sayı turunden tamsayı turune kontrollu




int x = 34;
int y = 50 ;
x>10?y:3.;

RASGELE SAYI URETIMI

<stdlib.h> ---> rasgele sayı uretimi , yazı sayı denetimi vsvs (Genel kutuphane)
rand fonksiyonu rasgele sayı ureten fonk

int rand(void);

RAND_MAX (Derleyicide tanımlanan maksimum sayı degeri) isaretli 2 bayt sınır degeri kullanılır.///////	0 - 32767



#define 	NTOSS		10000

int main(){
	int k ;
	
	int headsCounter = 0;
	
	for(k = 0; k<NTOSS; k++)
		if(rand()%2 == 0)
			headsCounter++;
	
	///
	
	
	printf("%.12f\n",(double)headsCounter/NTOSS);
	
	
}


////  

SIK KULLANILAN ALGORİTMALAR


Arama İşlemleri / Search
Ekleme İşlemleri / Insert
Silme İşlemleri / Erase || Remove


Dinamik Dizi 
Deque
Bağlı Liste -- Linked List
İkili arama ağacı -- Binary Search Tree
Hash Tablosu -- Hash Table

Big O  notation

Eger adresle arama yapılıyor ise ; vektör veri yapısı kullanılmalı

DİZİLER 
// boyut belirten ifade mutlaka olmalı


int x 
int a[100];


int a[20+40];

int a[SIZE];     //// #define 	SIZE	100 yapıldığını varsayarsak


int b[2*SIZE];


int x1,x2,x3,x4,x5;

int a[5];



double a[50];
double dval ;



return 0;  


C de bir dizi başka bir diziye atanamaz

Diziler her zaman call by reference

int x , a[20], b , z[30];














int i , k ;

for(i= 0 ; i< SIZE ; i++)


YAZILAR VE DİZİLER

null character ---->   '\0'   ---> 0


ascii 0 -48 kod numaralı


int main (){
	int c1 = '\0';  //// 0 sonucunu verir
	int c2 = "0";	//// 48 sonucunu verir
	
	
}





int main(){
	char str[100];
	
	
	return 0;
}




ilk deger verme syntax i ----> 		char str[100]={'G','A','M','Z','E'};




int main(){

	char str[]="kaya";								///////////!!!!!!! Burada dizi boyutu 5 dir.
	
	int k ;
	
	printf("%u\n",sizeof(str)/sizeof(str[]0));
	
	for (k = 0 ; str[k] != '\0' , k++){
		printf("%c",str[k]);
		
	}

	printf("\n");
	
	return 0;
	
}


puts(str)----> fonksiyonuna new line karakteri de dahil





int main(){
	int ch;
	int index = 0 ; 
	
	printf("Bir yazı giriniz.");
	
	while((ch = getchar()) != '\n')
		str[index++];;
		
		str[index]='\0';
		
		puts(str);
		
		return 0;
		
}



gets(str)----> standart gets fonksiyonu 


koseli parantezin icindeki uzunluk degeri , yazının son karakteri olan '\0' ın indexidir.


Bir yazının karakteri null karakter olamaz.

null character 

null pointer

 


toupper ---> c type kutuphanesinde mevcut


!!! Klasik mülakat soruları 


int cnt[26]= {0}------>>>>> DİZİYE ilk deger olarak sıfır verme idiomu

isalpha yı kullanarak ---->>>>>>> harfmi degilmi onu anlıcaz


int main(){

	char s[size];
	int cnt[26]= {0};
	
	int i;
	
	printf("bir yazi giriniz");
	
	gets(s);
	
	for(i=0;s[i] != '\0'; i++)
		if(isalpha(s[i]))
		cnt[toupper(s[i])- 'A']++;
		
	for(i = 0 ; i<26 ; i++)
		if(cnt[i] != 0)
			printf("%c -----> %d\n")

}

!!!!!!!!! Mülakat Sorusu (Reverse Algoritması)



int main(){
	char s1[SIZE];
	char s2[SIZE];
	int k, i ;
	
	printf("bir yazi giriniz : ");
	gets(s1);
	
	for(k= 0 ; s1[k] != '\0';++k)
	;
	
	for(k--,i=0;k>=0;k--)
		s2[i++]=s1[k];
		
	
	}

	












int main(){
	char s[SIZE];
	int read_index=0;
	int write_index=0;
	
	printf("bir yazı girin");
	gets(s);
	
	for(read_index = 0 ; s[read_index] != '\0' ; read_index++)
		if(!isdigit(s[read_index]))
			
			
			
			
			
			
			
			
			
			
			
			
			
			Pointer Devam
			
			int *ptr; // adres verisini tutan nesne
			
			dereference , indirection ;
			
			Nesnenin adresi varsa kendisi de elimizde mevcut.
			
			%p standart output için kullanılır.
			





int main(){
	int a[5]= {0};
	int  k;
	
	++*a;
	for(k=0;k<5;k++)
		printf("%d",a);
		
	
	}


call by value ---- > int x

call by reference  ------> int *ptr

diziler soz konusu oldugunda call by reference olmaz!

call by value dur.

Bir adresle bir tamsayı toplanıp çıkartılabilir.///LEGAL
bir adresten bir tamsayı çıkarmak ///LEGAL

Bir tamsayıdan adres çıkartmak ///ILLEGAL!


Bu LEGAL işlemlerin hepsinin sonucu bir adrestir.

Adres + Adres ====!!! ERROR!!

Adres - Adres ==== VALID!




k[a]--->a[k] aynıdır.



a[k]--->*(a+k)
k[a]--->*(k+a)




a[k]			demekle 			*(a+k)

aynı anlama gelir.



&a[k] yerine c programcıları genel olarak a+k tercih eder.

ptr++ dediğimizde gösterdiği dizi elemanından bir sonraki elemanı göstermesini istemek demektir.

eğer nesne 4 byte lık int ise bellekteki 4 sonraki adrese gider yeni





adres - adres = tamsayıdır.


ADRESE GERİ DONEN FONKSIYONLAR


T x ; 
&x Türü(T *)


double *func(int *ptr){   /////Geri dönüş değeri adrestir //// Adres alır adres verir

}



int *func(void){

}



///////////////

int *func(void);

int main(){
	
	int *ptr;
	
	ptr = func();
	
	return 0;
}




int *func(void){

	
	
	
	return &g;
}


int g = 10;

int main(){

	printf(" g = %d ", 10);
	
	++*func();
	return 0;

	
	
}




&&&&&



int main(){
	
	int *ptr = func();
	
	printf("&g		= %p\n",&g);
	printf("ptr		= %p\n",ptr);
	
	*ptr= 99;
	printf("g = %d")

}



int main(){
	
	int k;

	++func()[5];
}







int *func(){
	
	int x;
	printf("bir tamsayı giriniz: ");
	scanf("%d",&x);
	
	
	return &x;

}


!!!!!!!!!!!!!Otomatik ömürlü nesnelerin adresleriyle geri dönüş yapılamaz.



char *func(){
	char str[1000];
	
	printf("bir yazi giriniz: ");
	
	gets(str);
	return str;
	

}

int main(){
	char *ptr;
	
	ptr = func();

	printf("%s\n",ptr);
	
	return 0;
	
	}
	
	
	
	
1)Global nesnelerin ya da dizilerin adresleri ile geri dönmek.
2)statik ömürlü yerel nesnelerin adresleri ile geri dönmek.
3)Çağıran işlevden aldığı adresi , çağıran işleve geri dönmek.
4)string literalleri ile geri dönmek*
5)dinamik ömürlü nesnelerin adresleriyle geri dönmek**



int *func(int *ptr){
	*ptr = 999;
	return ptr;0,
}

int main(){

	int x=20;
	int *ptr;
	
	ptr = func(&x);
	
	return 0;
}

///////////////////////////////////////////////////////

#include <stdio.h>


int main(){


	return 0;
}

////////////////////////////////////////////////////////


void setRandomArray(){
	
	while (size--)
		*ptr++=rand()%1000;
}


void randomize(){
	srand ((unsigned)time(0));
}





int *getmax(const int *ptr,int size){

	///// Burada getmax(a,SIZE)---> şeklinde çağrı en büyük elemanın 
	///// adresi
	///// *getmax(s,SIZE) ---> elemanın kendisini ifade eder.
	int k;
	int *pmax=(int *)ptr;
	
	for (k=1;k<SIZE;k++)
		if(*pmax < ptr[k])
			pmax = ptr + k ;
			

	return pmax;




	
}



printf("a dizisinin en buyuk ogesinin indisi %d\n",getmax(a,SIZE)-a));
displayArray(pmax)
displayArray(a,pmax-a+1);////0 dan en buyuge kadar yazdır.




void swap(int *p1, int *p2){

	int temp= *p1;
	*p1=*p2;
	*p2=temp;
	
}


swap(getmax(a,SIZE),getmin(a,SIZE));




Bu dizinin bir elemanı en büyük bir elemanı en küçük

	*getmax(a,SIZE)
	*getmin(a,SIZE)
	int *min;
	int *max;

	max = getmax(a,SIZE);
	min = getmin(a,SIZE);
	if(max < min )
		swap(max,min);
	displayArray(min,max-a);



SIZE kullanma displayArray kullanma 


Sıralama Algoritması (Selection SORT)

void selectionSort(int *ptr,int size{
	int k;
	for(k=0;k<size-1;k++)	
		swap(ptr+k,getmin(ptr+k,size - k));
}

Pointer Idioms


&x --> x nesne değilse compile time error verir.
&&x --> x nesnedir fakat &x nesne değildir bu yüzden hata verir.


*ptr++=0;----> *ptr=0 --> *ptr = *ptr+1

while(n--)
	*pdest++=*psource++;

	Dizi ismi ++ operatörünün operandı olamaz.
	
	

	
NULL ADRESİ

Büyük harfle yazılan NULL bir sembolik sabittir. C'nin birçok başlık dosyasında (stdio.h,stddef.h,stdlib.h,time.h,string.h vs.) tanımı yapılmıştır.
NULL bir adres bilgisidir. NULL pointer , NULL gösterici  ya da NULL adresi olarak okuyunuz.Bir pointer değişkeni bu adres bilgisi ile ilk 
değer verilebilir ya da bu adres bilgisi bir pointer değişkene atanabilir. Bu adres herhangi türden bir pointer değişkene atanabilir. 

Değeri NULL adresi olan bir pointer değişken hiçbiryeri göstermeyen , hiçbir nesneyi göstermeyen bir pointer değişkendir. Bir pointer değişken yalnızca 
iki durumda bulunabilir. Ya değeri bir nesnenin adresidir bu durumdapointer değişken o nesneyi göstermektedir ya da değeri NULL adresidir. Bu durumda o 
pointer değişken hiçbir nesneyi göstermemektedir.

Değeri NULL adresi olan pointer içerik alma işlemine sokulmamalıdır.(* ve [] işleçlerinin operandı olmamalıdır. Bu durumda kesinlikle 
çalışma zamanı hatasıdır.)

Değeri NULL adresi olan bir pointer + , += , - , -= , <,>,<=,>= işleçlerinin terimi olmamalıdır.



Değerleri NULL adresi olan iki pointer değerce eşittir. Lojik yorumlama yapılan yerlerde adres bilgilerinin bulunması geçerli ve doğrudur. Eğer adres bilgisi
NULL adresliyse yanlış i NULL adresli değil ise doğru olaraka yorumlanır. Bu durumda if(ptr!=NULL) ile if(ptr) aynı anlama gelir. 

if(ptr != NULL)
	m++;

if(ptr)
	m++;

if(ptr == NULL)
	m++;

if(!ptr)
	m++;


	



int main(){
	
	int *p1=NULL;
	int *p2=NULL;
	
	int x = 0 , *p3=&x;
	
	if(p1==p2)
		printf("dogru\n");
	else
		printf("yanlis");
	
	
	return 0;
}


Normal olarak bir pointer değişkene bir adres bilgisi atanmalıdır. Bir pointer değişkene bir tamsayı değerinin atanması doğru değildir. Ancak bir pointer değişkeni 
tamsayı sabiti olarak 0 değerinin atanması özel bir anlama gelir.

ptr = 10; ////Yanlıs
ptr = ival;///Yanlıs

ptr=0;///Özel anlama

Bu durumda atanan 0 değeri NULL adrese dönüştürülür. Bu durumda derleyici 0 tamsayı sabitini içsel olarak NULL adresine dönüştürür. 
ptr=NULL == ptr=0

İlk değer verilmemiş otomatik ömürlü pointer değişkenler çöp degerle hayata başlar . Ancak statik ömürlü pointer değişkenlere ilkdeğer verilmez ise NULL 
değer ile hayata gelirler.


NULL Adresi ne ise yarar?

Arama fonksiyonlarında aranan elemanın bulunması durumunda adres geri döndürülür, bulunuzmazsa NULL değeri döndürülür.


int *search(const int *ptr , int size , int sval)
{
	while{
		if(*ptr==sval)
			return(int *)ptr;
		ptr++;
	}
	return NULL;
}



if(search(a,SIZE,x)!=NULL)//aranan deger var ise
if(search(a,SIZE,x))//aranan deger var ise
if(search(a,SIZE,x)==NULL) //aranan deger yok ise
if(!search(a,SIZE,x)) //aranan deger yok ise

int main(){
	
	long timer;
	
	time(&timer);
	
	printf("%ld\n",timer);
	
}



int main(){
	
	int *ptr = NULL;
	
	if(/**/ 1 ){
		
		ptr = &x;
		
	}
	
	if(ptr){
		
		
		
	}
	
	return 0;
	
}


PUTS & GETS



int main(){
	char str[100];
	
	printf("bir yazı giriniz");
	
	gets(str);
	puts(str);
	
	return 0;
}


String Kütüphanesi

<string.h>

Fonksiyonlar

strlen
strcpy
strcat concatanade
strchr yazının içinde karakter arayan foksiyon
strrchr
strstr
strpbrk
strcmp
strncopy
st rncat
s.trncmp

Typedef Bildirimleri 1

Bu anahtar sozcukle istediğimiz türlere alias takılır.

C++ için typdef ve using kullanılabilir.

typedef int Word;


typedef Word Myint;

Sistem programlamada ve windows programlamada çok yaygın

typedef int *IPTR;
IPTR x,y,z;



define la yapılamaz. 


typedef int INT10[10];

INT10 x,y,z;


x y ve z INT10 türünden 10 elemanlı int diziler.


typedef int Bool; kullanıcı alias ı görerek kodu daha iyi anlayabilir.

Tipik olarak başlık dosyalarında yer alırlar.

Standart kütüphanenin typedef i özel kullanımı ===

size_t
time_t
ptrdiff_t
clock_t
fpos_t

					size_t
size of operatörünün ürettiği değerin türü
unsigned int veya unsigned long 

#define _CRT_SECURE_NO_WARNINGS
#define 	SIZE		1000

int main(){
	
	char str[SIZE];
	size_t len;
	
	
	printf("Bir yazi girin : ");
	gets(str);
	
	
	len = strlen(str);
	printf("len  = %u\n");
	
	return 0;
}





while (*p != '\0') demek while (*p)  aynı şey

REGEX --- > regular expression
 
Aramalarda ve validasyonda kullanılır
 

append -- concatanade


strchr --->  char *strchr(const char *p , int ch)


strrchr





int main(){
	
	char str[SIZE];
	
	char *p;
	int ch;
	
	printf("bir yazi giriniz");
	
	gets(str);
	
	printf("aranacak karakter : ");
	
	p=strchr(str,ch);
	
	
	if(p==NULL) // if (!p)
		printf("bulunamadı");
	else
		printf("bulundu (%s)\n",p);
	
	
}


c standard library p.j.Plauger

while (*p)  //// !='\0'
	p++;

	
while(*p++)
	;  ///NULL karakterdeb bir sonrakine atama yapılır. o yüzden yanlış




p+=strlen(p) ////Yazının adresine yazının uzunluğunu eklersem sonunun adresini elde etmiş olurum

p=strchr(p,'\0')


if(*p)
	while(*++p)
		;
	

strcpy Fonksiyonu

Bir yazıyı bir yerden bir yere kopyalan fonksiyon:

char * strcpy(char *pdest , const char *psource)
 pdest yazma bolumu
 psource okuma bolumu
 
 bu  standard bicim 


	

int main(){
	char str[SIZE]="necati";
	
	strcpy(str+2,str); // tanımsız davranıs 
	// memmove kullanılmalı
	puts(str);
	return 0;
	
}

strcat Fonksiyonu : 



Localization

Başlık  dosyası locale.h   


int main(){
	
	char * setLocale(int _Category,const char *_Locale)
	
	if(!setLocale(LC_ALL,"turkish")){
		
		printf("cannot set locale!\n");
		return 1;
	}
	return 0;
}


strcoll 



int main(){
	
	
	char s1[100],s2[100];
	int cmpresult;
}

stricmp(insensitive compare )




int mystrcmp(const char *p1,const char *p2){
	
	while (*p1 == *p2){
		if(*p1 == "\0")
			return 0;
		
		p1++,p2++;
		
	}
	return *p1-*p2;
}

int main(){
	
	
}






char *strstr(const char *p1,const char *p2)


birinci yazının içerisinde ikinci yazıyı arayan fonksiyon


Konu Başlıkları

stringler - string literals
pointer dizileri - pointer arrays
gösterici gösteren gösterici- pointer to pointer
void göstericiler - void pointers 
çok boyutlu diziler - multi dimensional arrays
işlev göstericileri - function pointers


STRINGLER

int main(){
	
	putchar(*"OGULCAN");
	putchar("ANIL"[1]);
	
	
	
	char *p = "MUSTAFA";
	int k;
	
	for(k=0;p[k] != '\0' )
		
}



!!! Stringlerin sonunda NULL karakter mevcut

int main(){
	
	char str[]="Necati";			//// İlk deger verme
	char *p = "Oguz";
}

Bunlar statik omurludur.


int main(){
	
	char str[100];
	///////////////////
	//////////////////
	
	strcpy(str,"ogulcan"); /////////// diziden diziye kopyalama yapma
	
	return 0;
	
}
1-Statik omurluler
2-Salt okunurlar



char *p="Abidin" "Murat" "Hakan" "Gamze"; /////////Tek bir string olarak ele alınırlar.

puts(p);

return 0;



int n ;

n= 2["ELMA"]-1["ELMA"];


Degistirilemez.

RAW String Cpp 'de mevcut

R"(\"OGUZ"\)"


Pointer Dizileri Pointer Arrays

int *a[20];

a[0]
.
.
.
.
.
.
a[19]


Pointer degiskenler neye point ederse etsinler 4 Bayt yer kaplarlar.

int main(){

	int *a[10];
	int x=10;
	int y=20;
	
	a[0]=&x;
	a[1]=&y;
	
	++*a[0];
	++*a[1];
	

}

Otomatik ömürlü çöp deger i statik ömürlü 0;

stdcmp ile compare et

**(p+k);

strlen
strchr
strrchr
strcpy
strcat
strstr
strcmp
strpbrk



strupr--->Yazı Büyük Harf
strlwr--->Yazı Küçük Harf



NULL Karakter varlığı 


Pointer to Pointer
int main(){
	int x = 10;
	int *ptr = &x;
	int **p=&ptr;
	++**p;
	return 0;
}




void sortNames(char **ptr,int size){
	int i , k;
	
	for(i=0 ; i>size-1;i++)
		for(k=0;k<size-1-i;k++)
	
	
}

sorNames()


ptr + k ve ptr + k + 1


func(int *ptr)			////Tek bir nesnenin adresini istediginde kullan
func(int ptr [])		////Bunu  da bir dizinin adresini istediğinde kullan

func(int **ptr)
func(int *ptr[])


int main(int argc,char *argv[])
int main(int argc,char **argv)  ///ikisinin de anlamı mainin 2. parametresinin 
///char pointer olmasını istiyor.

char *strcpy(char *pdest,const char *psource);
char *strcat(char *p1,const char *p2);
int strcmp(const char *p1,const char *p2);


char *strncpy(char *pdest,const char *psource,);/////n karakterini kopyala
char *strncat(char *p1,const char *p2,); ///n tane karakterini ekle 
int strncmp(const char *p1,const char *p2,);   //// n tane karakterini karşılastırcak






#include <stdio.h>
#include <string.h>
#include "nutility.h"

int main(){

	strncpy(char *_Dest,const char *_Source,size_t _Count)

	return 0;

}


#include <stdio.h>
#include <string.h>
#include "nutility.h"

int main(){

	char s1[1000]="0123456789";
	char s2[1000];
	size_t=n;
	
	
	printf("s1 den s2 ye kac tane kopyalansın?")
	scanf("%u",&n);
	strncpy(s2,s1,n);
	puts(s2);
	
	
	return 0;

}


strncpy(s2,s1,n)[n]='\0';  //// Kopyalama işlemi yapmak istersen NULL karakter
////Koymalısın fakat degistirme isleminde NULL karakter koymak ekstra karakter
////degisimine sebep olur.


"antalya"
"antakya"

if(!strncmp(s1,s2,4))
	printf("yazılar esit");
else
	printf("yazılar farkli");

Yazı sayı sayı yazı dönüştürülmesi:

#include <stdlib.h>
int atoi(const char *p); girilen sayı ve harflerden oluşan dizinin sadece sayı 
olan kısımlarını alır.

day=atoi(date);
mon=atoi(date+3);
year=atoi(date+6);


!!!!!! <stdlib.h> !!!!!!!
atol

atof ////double dondurur.

itoa///integer to alphabetical


char *itoa(int _Val char *_DstBuf,int _Radix);



int main(){
	int ival;
	
	printf("Bir sayi sistemi giriniz");
	scanf("%d",&ival);
	
	itoa(ival,str,10);
	printf("%s\n",str);
	
	
}




In memory Read - Write operation

Variadic Fonksiyon

printf	///// dışarı yazdırır
sprintf  //// Belleğe çıkış yapar
frinptf	//// Dosyaya yazar


scanf //// Girişin standart inputtan alınması için
sscanf//// Bellekten girişin alınması lazım
fscanf//// Dosyadan girişin alınması için



int printf(const char *pfm,...);

int sprintf(char *pstr, const char *pfm,...); // Birinci parametreye gelen yere yazdırıcak



int main(){
	char name[100];
	char fname[100];
	
	char entry[1000];
	
	
	printf("isim soyisim : ");
	scanf("%s%s",name,fname);
	printf("yas : ...");
	scanf("%d",&age);
	
	
	sprintf(entry,"%s%05d%s",name,age,fname);
	printf("(%s)\n",entry);
	
	
}

/////Sprintf fonksiyonu ile destination diziye yazı ve sayilari istedigimiz gibi yazdırabiliriz.Adresini verdigimiz diziye.

scanf fonksiyonunun geri donus degeri INT!
Başarılı set etme geri donus degeridir. 3 tane oldugunu varsayarasak basarılı 3 adetse 3 degilse 0 , error varsa -1 olur


int sscanf(const char *ps,const char *pfm,...);


int main(){

	char str[100] = "4567 45.95mustafa";
	
	
	int ival;
	double dval;
	char name[100];
	
	/////Scanf in ilk parametresi degerleri alacagı lokasyon.
	sscanf(str,"%d%lf%s",&ival,&dval,name);
	printf("ival = %d \n", ival);
	
}
memset   (yazılacak adres , yazılacak değer , size degeri)
memcpy
memmove
memchr
memcmp




int main(){

	int x;
	memset(&x,255,sizeof(x));
	
	
}
void *memcpy(void *vpdest,const void *vpsource,size_t n);






setRandomArray(a,SIZE);
displayArray(a,SIZE);
printf("indis degerleri (kaynak hedef : ) " );




#define SIZE	100

int main(){

	int a[SIZE];
	int b[SIZE];
}

qsort fonksiyonu türden bagımsız dizi sıralayan fonksiyon
qsort /*514 */  

callback --- > fonksiyona fonksiyon çağırtmak

void qsort(void *vp, size_t size,size_t width,int (*cmp)(const void*,const void*));

void *up;
void **vptr;

İşlev Göstericileri


Bir fonksiyonun ismi direkt olarak kullanıldığında derleyici bunu direk olarak adrese
dönüştürür.


func() ======> (&func)()

int (*fptr)(int ,int) ----> Fonksiyonun Türü
Geri Dönüs degeri türü




int (*fptr)(int ,int) = &fonk
Function like macro
Callable

Typedef le kısaltma yapabiliriz.

typedef int(*FPTR)(int,int);

FPTR x,y,z;
FPTR a[10];

FPTR foo(FPTR a,FPTR b);

void f1(){
////////////
}

void (*fptr)(void)=&f1;
fptr();

Dedigimizde yukarıdaki fonksiyon cagırılır.


typedef void (*FP)(void);
int main(){
	FP a[]={&f1,&f2,&f3,&f4};
	int k;
	
	for(k=0;k<4;k++)
		a[k]();
}



int main(){

	void (*fptr)(void )=&func;
	
	(*fptr)() -----> içeriğe ulaşıyoruz.Ama öncelikli olarak fonksiyon çağrı operatörünün 
	önceliği düşük olduğu için *fptr bölümünü parantez içine almak durumundayız.
	
	
}


void func(int ch,int(*fp)(int));
func(c,&isdigit);


#include <stdlib.h>

#define SIZE 	100

int main(){

	int a[SIZE];
	
	randomize();
	setRandomArray(a,SIZE);
	displayArray(a,SIZE);
	qsort(a,SIZE,sizeof(int));
	
	return 0;
}



#include <stdlib.h>
#include "nutility.h"
#include <stdio.h>

#define SIZE 	100

int main(){

	

}

void gsort(void *vpa, size_t size, size_t width, int(*fp)(const void *, const void *)){
	size_t i, k;
	char *p = (char *)vpa;

	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t k = 0; k < size -1 -i; k++)
		{
			if ()
		}

	}
	
	sizeof a = 80 bit double 10 elemanlı 8*10 = 80 bit
	size of *a=ilk eleman ==== double 8bit
	
	
	80/8 = 10 elemandır ----> SIZE
	
	

EŞLEME (MAPPING)
int main(){
	int ch;
	pri

}



#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 	100


typedef int(*FPTEST)(int);

int main(){
	int ch;
	char fncName[100];
	FPTEST a[] = { &isupper, &islower, &isalpha };
	


	char *p[] = {"isupper", "islower", "isalpha" };
	printf("Bir karakter girin");
	
	ch = getchar();

	printf("Test islevinin ismini girin");
	scanf("%s", fncName);

}


ÇOK BOYUTLU DİZİLER


Elemanları dizi olan dizi
b[5][10]----> b 5 elemanlı bir dizi
boyutu 5






#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 	100


typedef int(*FPTEST)(int);

int main(){
	int b[10][20];
	int *p;

	////  int *p = b; //// Yanlis C++ Syntax hatası



	int b[10][20];
	p = &b[0][0];
	p = b[0];
	p = (int *)b;

} 


ilk deger bos bırakılırsa degerler 0 olur.

void func(int *p);
		(int p[])

		
void func (int **p)
			(int * p[])
			
			

void func(int(*p)[20])
	func(int p[][20])
	
	

	
void setMatrix(int *ptr,int row,int col){

	int i , k ;
	
	for(i = 0 ; i < row ; i++){
		for(k = 0 ; k < col ; k++)
			ptr[col * i + k ] = rand % 10 ; 
		}

}
void displayMatrix(const int *ptr,int row,int col);

#pragma warning(disable  39916)
int main(){
	int a[5][10];
	int a[8][6];
	int a[4][15];
	
	randomize();
	
	setMatrix(a,5,10);/////WARNING!! --->> 
	setMatrix((int *)a,5,10); //// Olması gereken 
	setMatrix(&a[0][0],5,10);////Olması gereken
	displayMatrix((int *)b,8,6);
	displayMatrix((int *)c,4,15);
	
	
	
}
			
			
	
int main(){

	char names[30][20]; //// 30 Adet 19 karakterli isim tutan dizi
	
	
	
}	
			
			
	char names[][20] = {"Abidin","Baris","Gamze","Oguz"}
	for(k= 0 ; k < size ; k++)
		p[k] = names[k++]
			
			
			
			
	****Pointer Hataları
	****exit , abort, atexit,
	****dinamik bellek yönetimi
	****yer belirleyicileri ve tür niteliyicileri
	****user defined types
	****yapılar / birlikler / numaralandırmalar
	****bitsel işlemler
	****komut satırı argümanları
	****dosyalar
	****makrolar
	****diğer önişlemci komutları
			
			


#include <assert.h>

int main(){
	int x = 10 , y; 
	y = 0;
	assert(y != 0);  //// Doğrulanması gereken yerde uyarı verir!!
	x /= y;
}
return 0;			
			
			
#include "assert.h"

////  assert makrosunda doğru olması gereken ifadeyi yazıyorum.
////  Debug amaclı kullanım yapılmaktadır.
////  İşimiz bittiğinde koddan çıkartılmalı.

int main(){

	int a[100];
	int x = 10;
	
	assert(x*10+1 <= d.boyutu)
	a[x * 10 + 1 ] = 0;
	

}


sol taraf int * sağ taraf int ise sağ tarafa otomatik olarak adrese cast edilir.

Bir pointer a başka türden bir nesne atanmamamlı! double pointer a char türden adres mesela 
Pointer hatalarının sebebi bana ait olmayan bellek alanlarına ulaşmaya çalışmak


Düşük sayısal adreste düşük anlamlı bayt yüksek adreste yüksek adresli bayt- ------> intel mimarisi  //// little endian
Tam tersi -----> Motorola tarzı //// big endian

endianness -----> Bayt adres dizilim şekli

			
			
int x = 1;
if(*(char *)&x)
	printf("little endian");
else
	printf("big endian");
	
	
	Programın Sonlandırılması ve Programı Sonlandıran Fonksiyonlar
	
	
	İsmi exit, abort olan fonksyionlar programı sonlandırır.
	Programın belirli bir noktada işini yapma olanağının kalmaması programramın sonlanmasına sebep olur.
	
	
	EXIT
	
	void exit(int status);
	status başarı değerini ifade ediyor.
	
	
	#define EXIT_SUCCESS	0 
	#define EXIT_FAILURE	1
	
	
	<stdlib.h> da mevcut
	
	exit(EXIT_FAILURE)
	
	
	atexit(vodi (*fp)(void));   ///Yapılan her çağrıda fonksiyonun adresi kayıt edilmekte.
	
	Programın sonlanırken kaydetmesi gereken şeyler olabileceği için atexit fonksiyonunun kullanılması gerekir. Temizlik işlemini 
	yapan fonksyionlarda atexit(func) i kullanırsak program kapatılmadan en son olarak çağırılır.
	
	Son giren ilk çıkan olur.
	
	en son f4 çağrılmış ise ilk f4 çağırılır.
	
	ABORT
	
	void abort(void);
	Programın abort tarafından bitirildiği bilgisi ekranda verilir.
	
	
	DİNAMİK BELLEK YÖNETİMİ
	
	Compile time yerine Runtime da bellek ayırması olayını gerçekleştirir.
	Runtime da değişken boyutlarının mevcut olmaması dinamik bellek yönetiminin gerekliliğini açıklar
	
	Temel ihtiyaç aslında bir nesnenin hayata başlaması.
	
	<stdlib.h>
	
	malloc		////Memory Allocation
	calloc    ////Clear allocation
	realloc		////Mevcut bellek bloğunu arttırma azaltma
	
	free	d allocation işlemi iade işlemi
	
	
	
	malloc ----> ne kadar? bayt(size_t)4
	void * malloc(size_t n) Bellek alanı elde edilirse adres geri döndürülecek , edilmezse NULL geri döner.
	
	
#include <stdlib.h>
#include <stdio.h>


int main(){

	int n;
	int *pd;
	
	printf("kac tamsayı");
	scanf("%d",&n);
	
	
	pd = (int *)malloc(n * sizeof(int));
	
	if(pd == NULL){
		printf("Cannot allocate memory ! \n");
		exit(EXIT_FAILURE);
		
	}
	

}
	
	
	
		Aldığın belleği geri vermemen durumu bellek sızıntısına yol açar.
		Aldığın belleği geri vermek gereklidir.
		Kod tekrarı yapma.
		code bloating
		
		
		void * checkedMalloc(size_t n){
			
			void *pd = malloc(n);
			
			}
	
#include <stdlib.h>
#include <stdio.h>


int main(){

	int n;
	int *pd;

	printf("kac tamsayı");
	scanf_s("%d", &n);


	pd = (int *)malloc(n * sizeof(int));

	if (pd == NULL){
		printf("Cannot allocate memory ! \n");
		exit(EXIT_FAILURE);

	}


	
	return 0;

}



itoa (int _Val,char *_DstBuff,int _Radix)  ------ > itoa nın interface ini değiştirme
mitoa(char *p,int val){
	return itoa(val,p,10);
	
}




#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <nutility.h>


char *getnam(){
	char str[100];
	printf("Bir isim giriniz");
	
	
}




int x;
decltype (x) y;
decltype(xval) y;


register ---> derleyici x i işlemcinin yazmacında tut
register int x; 

çok çağrılan fonksiyonların parametre değişkenleri
yada
sürekli dönen döngü elemanları

linkage

external linkage ////Static omurlu varlık dısarıya acılmıs public 
internal linkage //// Private varlık
no linkage //// 

Globaller dogustan external
extern anahtar sozcugu //
extern int a[]; /// Dısarıda tanımlanmıs bir dizi

#define SIZE 	900000

int main(){
	time_t timer;
	
	time(&timer);
	
	printf("%s \n", ctime(&timer));
	printf("%s \n", asctime(localtime(&timer)));
	
	return 0;
}


#define SIZE 	1000


int main(){
	
	time_t timer;
	struct tm *p;
	char str[SIZE];
	
	time(&timer);
	
	p=localtime(&timer);
	
	setlocale(LC_ALL,"turkish");
	
	strftime(str,SIZE,"%a\n",p);
	strftime(str,SIZE,"ay : %B\n gun : %A ",p);
	puts(str);
	
	
}


#include "student.h"


typdef (int (*FCMP) (const void*,const void*);
int main(){
	
	Studen a[SIZE];
	int k;
	
	randomize();
	
	for(k= 0 , k<SIZE, k++){
		setRandomStudent(a+k);
		
	}
	
	for(;;){
		for(k=0;k<SIZE;k++)
			displayStudent(a+k);
		getchar();
		qsort(a,SIZE,sizeof(Student),( (int (*) (const void*,const void*)&cmpStudent1));
	}
	
}

LINKED LISTS

struct Node{
		int val;
		struct Node *ptr;
		
};














































































