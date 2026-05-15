#include<stdio.h>

int main(){
	char c;
	printf("      SIMPLE CALCULATOR\n\n");
	printf("Enter symbol for calculation : + , - , * , / \n");
	scanf("%c",&c);
	int a ,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	switch (c){
		case '+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case '-':
			printf("%d-%d=%d",a,b,a-b);
			break;
		case '*':
			printf("%d*%d=%d",a,b,a*b);
			break;
		case '/':
			if(b==0){
				printf("Not possible\n");
			}
			else{
			
			printf("%d/%d=%d",a,b,a/b);
			}
			break;
		default:
			printf("INVALID");
	}
}