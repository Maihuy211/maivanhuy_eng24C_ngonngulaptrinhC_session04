# include <stdio.h>
int main (){
    int chi_so_cu,chi_so_moi,sodien,tien_dien_tieu_thu;
    printf("nhap chi so cu (chi so cong to dien o dau thang): ");
    scanf("%d",&chi_so_cu);
    printf("nhap chi so moi (chi so cong to dien o cuoi thang): ");
    scanf("%d",&chi_so_moi);
    
	sodien=chi_so_moi-chi_so_cu;
	
	
	if(sodien>0){
		if(sodien>=0&&sodien<50){
			tien_dien_tieu_thu=sodien*10000;
			printf("tien dien tieu thu trong thang cua ho gia dinh la: %d (Vnd/kWh)",tien_dien_tieu_thu);
		}
		else if(sodien>=50&&sodien<100){
			tien_dien_tieu_thu=sodien*15000;
			printf("tien dien tieu thu trong thang cua ho gia dinh la: %d (Vnd/kWh)",tien_dien_tieu_thu);
	    }
	    else if(sodien>=100&&sodien<150){
			tien_dien_tieu_thu=sodien*20000;
			printf("tien dien tieu thu trong thang cua ho gia dinh la: %d (Vnd/kWh)",tien_dien_tieu_thu);
	    }
	    else if(sodien>=150&&sodien<200){
			tien_dien_tieu_thu=sodien*25000;
			printf("tien dien tieu thu trong thang cua ho gia dinh la: %d (Vnd/kWh)",tien_dien_tieu_thu);
		}
		else if(sodien>=200){
			tien_dien_tieu_thu=sodien*30000;
			printf("tien dien tieu thu trong thang cua ho gia dinh la: %d (Vnd/kWh)",tien_dien_tieu_thu);
	    }
	    else{
	    	printf("loi ko hop le ");
		}
	}
	return 0;
    }
