/*author : Ankit Dhanawat
  Date : 20/10/22
  Aim : try try & try
  Language : c programming*/
#include<stdio.h>
void add(){
	int a,b,add;
	printf("Enter your numbers.\n");
	scanf("%d%d",&a,&b);
    add=a+b;
	printf("Sum of two integer values.%d\n",add);
}  
void sub(){
    int a,b,sub;
    printf("Enter your numbers.\n");
	scanf("%d%d",&a,&b);
	sub=a-b;
	printf("Subtract of two integer values.%d\n",sub);
}
void mul(){
	int a,b,mul;
	printf("Enter your numbers.\n");
	scanf("%d%d",&a,&b);
	mul=a*b;
	printf("Multply of two integer values.%d\n",mul);
}
void div(){
	int a,b,div;
	printf("Enter your numbers.\n");
	scanf("%d%d",&a,&b);
	div=a/b;
	printf("Divide of two integer values.%d\n",div);
}
void e(){
	int a;
	float b,c;
	printf("Enter Ramesh's basic salry-");
	scanf("%d",&a);
	b=a*40/100;
	printf(" dearness allowance is %f\n",b);	
	c=a+b;
	printf("Total salary is %f\n",c);
}
void f(){
	int k,m;
	printf("Distance in a kms \n");
	scanf("%d",&k);
	m=k*1000;
	printf("Distance in a meter %d\n",m);
}
void g(){
	int k,c;
	printf("Distance in a kms \n");
	scanf("%d",k);
	c=k*1000*100;
	printf("Distance in a centimeter %d\n",c);
}
void h(){
	int k,mm;
	printf("Distance in a kms \n");
	scanf("%d",k);
	mm=k*1000*100*10;
	printf("Distance in a millimeter %d\n",mm);
}
void i(){
	float  f,i;
	printf("Hight of the student in a feet \n");
	scanf("%f",&f);
	i=f*12;
	printf("Hight of the student in a inches %f\n",i);
}
void j(){
	float c;
	int f;
	printf("Enter temperature of a city in fahrenheit degrees.\n");
	scanf("%d",&f);
	c=(f -32)*5/9; 
	printf("Temperature of a city in centigrade degrees.%f\n",c);
}
int main()
{
	int r;
	printf("Enter your case number.\n");
	scanf("%d",&r);
	switch(r){
		case 1:{
			add();
			break;
		}
		case 2:{
			sub();
			break;
		}
		case 3:{
		    mul();
			break;
		}
		case 4:{
		    div();
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
			printf ("wrong inpute.");
			break;
		}
	}
	return 0;
}
