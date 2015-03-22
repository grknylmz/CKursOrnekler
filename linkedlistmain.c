#pragma pack(1)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "nutility.h"



int main(){

	int k;
	Student s;
	
	for(k = 0 ; k<10 ; k++ ){
		setRandomStudent(&s);
		pushFront(&s)	;
	}
	
	
	printf("listede %d kadar ogrenci var" , getSize());
	
	
	
	while(!isempty()){
		displayList();
		
	}

}