#ifndef 		_STUDENT_H_
#define 		_STUDENT_H_

#include "date.h"


typedef struct{
	int no;
	char name[16];
	char fname[24];
	Date bdate;
}Student;