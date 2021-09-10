#include<stdio.h>
using namespace std;

int main(){
	int num1,num2,gcd,lcm;
	
	printf("Enter frist number : ");
	scanf("%d",&num1);
	
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	for(int i = 1; i<=num1 && i<=num2;i++){
		if(num1 % i == 0 && num2 % i == 0)
		gcd = i;
	}
	lcm=(num1*num2)/gcd;
	printf("G.C.D = %d\n",gcd);
	printf("L.C.M = %d\n",lcm);
	
	return 0;
}
