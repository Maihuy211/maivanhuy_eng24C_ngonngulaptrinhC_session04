# include <stdio.h>
int main(){
	int number;
	printf("Moi ban nhap mot so nguyen ");
	scanf("%d",&number);
	if(number>0){
		printf("la so nguyen duong");
		}
	else if(number<0){
		printf("la so nguyen am");
	}
	 else{
	    printf("ko phai la so nguyen duong va nguyen am ");
	}
	return 0;
	}
