# include <stdio.h>
int main(){
	int num1,num2,num3;
	printf("nhap so thu nhat: ");
	scanf("%d",&num1);
	printf("nhap so thu hai: ");
	scanf("%d",&num2);
	printf("nhap so thu ba: ");
	scanf("%d",&num3);
	
	if(num3>num1&&num3<num2){
		printf("so thu ba nam trong khoang giua so thu nhat va so thu hai");
		}
	else{
		printf("so thu ba khong nam trong khoang giua so thu nhat va so thu hai");
	}
	
	return 0;
	}
