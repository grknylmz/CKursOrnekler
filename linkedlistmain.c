#pragma pack(1)



int main(){

	int k;
	Student s;
	
	for(k = 0 ; k<10 ; k++ ){
		setRandomStudent(&s);
		pushFront(&s)	;
	}
	
	
	printf("listede %d kadar ogrenci var" , getSize());

}