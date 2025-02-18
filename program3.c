#include <stdio.h>
int main(){
	float b [5];
	int i;
	
	
	
	for (i=1; i<=5; i++){
		printf ("masukan angka a[%d] : ",i);
		scanf("%f", &b [i]);
	}
	for (i =1; i <=5; i++){
		printf ("angka a [%d] : %.2f\n",i,b[i]);
	}
}
