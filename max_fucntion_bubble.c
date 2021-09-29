#include<stdio.h>
void maximum(int number[]){
	int i,j,a;
	for(i=0;i<5;++i){
		for(j=i+1;j<5;++j){
			if(number[i]>number[j]){
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	printf("%d",number[4]);
}
int main(){
	void maximum(int number[5]);
	int num[5];
	int i;
	printf("Enter number 5 number : ");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	maximum(num);
}

