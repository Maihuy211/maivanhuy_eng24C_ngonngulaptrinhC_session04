# include <stdio.h>
int main(){
  int year;
  printf("moi ban nhap nam: ");
  // nam nhuan la nhung nam chia het cho 4 va ko chia het cho 100 hoac chia het cho 400
  scanf("%d",&year);
  if(year%4==0&&year%100!=0 || year%400==0){
  	printf("la nam nhuan");
  }else{
  	printf("khong phai nam nhuan");
  }
 
 return 0;
 }
