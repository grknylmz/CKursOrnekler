/*************************************************************************************
										date.h(interface of date module)
										author : gurkan
										
										
						










***************************************************************************************/
////////#pragma once kullanıcı üşenip alttaki bölümü yazmamış alttaki bölüm dosyanın tekrar oluşturulmasını engelliyor.
#ifndef  _DATE_H_
#define  _DATE_H_



typedef struct _Date{
	int md,mm,my;

}Date;


///////Yapı nesnesine deger veren fonksiyonlar


/////Türü ilk parametre veya son parametre yapalım!


/////SET Functions
Date *setToday(Date *p);
Date *setDateStr(Date *p ,int d , int m , int y);
Date *setDate(Date * , int d , int m , int y);
Date *setDate(const char *pstr);
Date *setRandomDate(Date *p);
Date *setMonth(Date * p, int mon);
Date *setYear(Date *p,int year);
Date *setMonthDay(Date *p,int mday);

//////GET Functions
int getYear(const Date *p);
int getMonth(const Date *p);
int getMonthDay(const Date *p);
///////////////////////////////
int cmpDate (const Date *p1,const Date *p2);
Date *nDays(Date *pd , const Date *ps , int n);
int dateDiff(const Date *p1, const Date *p2);
////////////////////////////////
int isWeekend(const Date *p);
//////////////////////////////
void displayDate(const Date *p);
Date *scanDate(Date *p);



#endif