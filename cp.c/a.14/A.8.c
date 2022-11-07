#include<stdio.h>
void a(){
	float a,b,c;
	printf("Enter your three number.\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&c){
    	printf("The greatest number a");
	}
	else if(b>c&&a){
		printf("The greatest number b");
	}
	else if(c>a&&b){
		printf("The greatest number c");
	}
	else{
	    printf("No greatest number.");
	}
}
void b(){
	float H,E,M,S,SS,T,P,A;
    printf("enter your number in Hindi\n");
    scanf("%f",&H);
    printf("enter your number in English\n");
    scanf("%f",&E); 
    printf("enter your number in Maths\n");
    scanf("%f",&M);
    printf("enter your number in Scince\n");
    scanf("%f",&S);
    printf("enter your number in Social Scince\n");
    scanf("%f",&SS);
    T=H+E+M+S+SS;
    printf("Total marks in exam%f\n",T);
    P=100*T/500;
    printf("Percentage in exam%f\n",P);
    if(P>75){
    printf("Student pass in a first division.\n");
    }
    else if(P>50){
    printf("Student pass in a second division.\n");
    }
    else if(P>33){
    printf("Student pass in a third division.\n");
    }
    else{
    printf("Student is fail.");
    }
} 
void c(){
	int n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n%3==0||n%2==0){
    printf("it is also divisible by 3&2.\n");
    }
    else if(n%3==0){
    printf("it is divisible by 3.\n"); 
    }   
    else if (n%2==0){
    printf("it is divisible by 2.\n");
    }
    else {
     printf("it is not divisible by 3&2.");
    }
}
void d(){
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n%7==0||n%3==0){
    printf("it is also divisible by 7&3.\n");
    }
    else if(n%7==0){
    printf("it is divisible by 7.\n"); 
    }   
    else if (n%3==0){
    printf("it is divisible by 3.\n");
    }
    else {
    printf("it is not divisible by 7&3.");
    }
}
void e(){
	float n;
    printf("type any number\n");
    scanf("%f",&n); 
    if(n>0) {
    printf("Number is positive.\n"); 
    }
    else if(n<0){
    printf("number is nagative."); 
    }
    else{
    printf("number is zero.");
    }
}
void f(){
	int n,a,b,c,y;
	printf("Enter year number.\n");
	scanf("%d",&y);
    printf("Enter month number.\n");
	scanf("%d",&n);
	if(n=8){
	printf("31 days in a month.");
	}
	else if(n=2){
		if(y%4==0){
			printf("it is leep year. And 29 days in a month.");
	}
		else if(y%4==1){
			printf("it is not leep year. And 28 days in a month.");
		}
	}
	else if(n%2==1){
		printf("31 days in a month.");
	}
	else if(n%2==0){
	printf("30 days in a month.");
	}
	else if(n=8){
		printf("31 days in a month.");
	}
	else{
		printf("only 12 month in a year.");
	}
}
void g(){
	float a,b;
	printf("Enter rupes-\n");
	scanf("%d",&a);
	b=a/80;
	printf("USD amount-\n");
}
void h(){
	float a,b;
	printf("enter number\n");
	scanf ("%f%f",&a,&b);
	printf("after swap%f%f\n",b,a);
}
void i(){
	int n,o;
	printf("enter number");
	scanf("%f",&n);
	o=n%10;
	printf("Digit at one's plase:%f",o);
}
void j(){
	int m;
	printf("Enter day number");
	scanf("%d",&m);
	switch(m){
	case 1:{printf("monday");
	break;
	}
	case 2:{printf("tuesday");
	break;
	}
	case 3:{printf("wednesday");
	break;
	}
	case 4:{printf("thursday");
	break;
	}
	case 5:{printf("friday");
	break;
	}
	case 6:{printf("saturday");
	break;
	}
	case 7:{printf("sunday");
	break;
	}
	default :{printf("week me 7 days hote h.");
	break;
	}
}
}
int main()
{   
    int q;
	printf("Enter Quction number.\n");
	scanf("%d",&q);
	switch(q){
		case 1:{
			a();
			break;
		}
		case 2:{
			b();
			break;
		}
		case 3:{
			c();
			break;
		}
		case 4:{
			d();
			break;
		}
		case 5:{
			e();
			break;
		}
		case 6:{
			f();
			break;
		}
		case 7:{
			g();
			break;
		}
		case 8:{
			h();
			break;
		}
		case 9:{
			i();
			break;
		}
		case 10:{
			j();
			break;
		}
		default :{
			printf("Only 10 Quction in a assigment.\n");
			break;
		}
	}
	return 0;
}
