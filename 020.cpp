#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"apple","i7","2016/9/7",15000,"Jenny","0912345678",
	                     "apple","i8","2017/9/12",18999,"Kiki","0923456789",
						 "apple","iX","2017/11/3",10210,"Jerry","0999999999",
						 "apple","iXS","2018/9/12",18999,"Joker","0920000329",
						 "apple","iXR","2018/10/26",18999,"Who","0966666666"};
	for(i=0;i<5;i++){
		printf("%s的資料----------\n",phone[i].use_name);
		printf("手機的品牌:");
		puts(phone[i].phone_brand);
		printf("手機的型號:");
		puts(phone[i].phone_model);
		printf("手機的出廠日期:");
		puts(phone[i].phone_yearofmanufacture);
		printf("手機的價格:");
		printf("%d\n",phone[i].phone_price);
		printf("使用者:");
		puts(phone[i].use_name);
		printf("手機號碼:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
