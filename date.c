///////date.c/////////
#include "date.h"


#define 	PRIVATE		static 
#define 	PUBLIC			
#define		YTAB		1700
#define 	isleap(p)	((y)%4==0 && (y)%100 || y%400 == 0)


PRIVATE Date *set(Date *p, int d , int m, int y);
PRIVATE int isValidDate(int d,int m,int y);
PRIVATE const int dtab[2][13]={
	{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}	
}



PUBLIC Date *setDate(Date * , int d , int m , int y){
	return set(p,d,m,y);
}

PUBLIC Date *setDateStr(Date *p,const char *pstr){
	int d = atoi(pstr);
	int m = atoi(pstr + 3 );
	int y = atoi(pstr + 6);
}

PUBLIC Date *setToday(Date *p){
	time_t timer;
	struct tm *p;
	int d,m,y;
	
	time(&timer);
	p = localtime(&timer);
	d = ptr ->tm_mday;
	m = ptr ->tm_mon+1;
	y = ptr ->tm_year+1900;
	
	return set(p,d,m,y);
}

PUBLIC Date *setMonthDay(Date *p,int mday){
	setDate(p,mday,m,p->my);
}
PRIVATE Date *set(Date*p,int d, int m , int y){
	if(isValidDate(d,m,y)){
		printf("gecersiz tarih");
		exit(EXIT_FAILURE);
	}
	
	p->md=d;
	p->mm=m;
	p->my=y;
	
}


PRIVATE int isValidDate(int d,int m,int y){
	return y >= YTAB && m > 0 && m<=12 && d>0 && d<=mtab[isleap[y][m]];
}