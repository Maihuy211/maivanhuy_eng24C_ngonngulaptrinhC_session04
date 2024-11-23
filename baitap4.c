# include <stdio.h>
int main(){
	int month;
	printf("moi ban nhap thang (1-12): ");
	scanf("%d",&month);
	switch(month)
	{
	     case 1:
	           printf("thang nay co 31 ngay");
	      break;
	     case 2:
	           printf("thang nay co 29 ngày");
	      break;
	     case 3:
	           printf("thang nay co 31 ngày");
	      break;
	   
	     case 4:
	           printf("thang nay co 30 ngày");
	      break;
	     
		 case 5:
	           printf("thang nay co 31 ngày");
	      break;
	     
		 case 6:
	           printf("thang nay co 30 ngày");
	      break;
	     
		 case 7:
	           printf("thang nay co 31 ngày");
	      break;
	     
		 case 8:
	           printf("thang nay co 31 ngày");
	      break;
	     
		 case 9:
	           printf("thang nay co 30 ngày");
	      break;
	     
		 case 10:
	           printf("thang nay co 31 ngày");
	      break;
	     
		 case 11:
	           printf("thang nay co 30 ngày");
	      break;
	     
		 case 12:
	           printf("thang nay co 31 ngày");
	      break;
	     
		 default:
	   printf("thang nhap vao ko hop le");
	   }
	return 0;
	}
