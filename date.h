/*************************************************************************************
										date.h(interface of date module)
										author : gurkan
										
										
						










***************************************************************************************/
////////#pragma once kullanıcı üşenip alttaki bölümü yazmamış alttaki bölüm dosyanın tekrar oluşturulmasını engelliyor.
#ifndef  _DATE_H_
#define  _DATE_H_



typedef struct _Date{
	void *vp;
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

#endif