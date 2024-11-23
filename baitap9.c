#include <stdio.h>
int main(){
	int day,month,year;
     printf("ngay:");
    scanf("%d",&day);
	 printf("thang:");
    scanf("%d",&month);
	 printf("nam:");
    scanf("%d",&year);
    switch(month)
	{
	     case 1:
	           if(day>0&&day<=31){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     case 2:
	           
	     if(year%4==0&&year%100!=0 || year%400==0){
			   if(day>0&&day<=29){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
			}else{
				if(day>0&&day<=28){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
			}
			
	      break;
	     case 3:
	           if(day>0&&day<=31){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	   
	     case 4:
	           if(day>0&&day<=30){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 case 5:
	           if(day>0&&day<=31){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 case 6:
	          if(day>0&&day<=30){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
				   
	      break;
	     
		 case 7:
	          if(day>0&&day<=31){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 case 8:
	           if(day>0&&day<=31){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 case 9:
	           if(day>0&&day<=30){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 case 10:
	           if(day>0&&day<=31){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 case 11:
	         if(day>0&&day<=30){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 case 12:
	           if(day>0&&day<=31){
	           	printf("%d/%d/%d hop le",day,month,year);
	           	}else{
	           		printf("ko hop le");
				   }
	      break;
	     
		 default:
	   printf("thang nhap vao ko hop le");
}
	   return 0;
	}
