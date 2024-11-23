# include <stdio.h>
int main (){
	int a,b,c;
	printf("nhap 3 canh cua tam giac\n");
	printf("canh mot: ");
	scanf("%d",&a);
	printf("canh hai: ");
	scanf("%d",&b);
	printf("canh ba: ");
	scanf("%d",&c);
	if(a>0 && b>0 && c>0){
		if(a+b>c || a+c>b || b+c>a){
			printf("la ba canh tam giac");
            }else{
				printf("khong phai 3 canh tam giac");
			}
			}else{
				printf("khong hop le");
			}
	
		
	return 0;
	}
	
