#include <stdio.h>
void a(){
	int a,b,c,r;
	printf("Enter Aman's basic salry-");
	scanf("%d",&a);
	b=a*50/100;
	printf(" dearness allowance is %d\n",b);	
	c=a*20/100;
	printf(" House rent allowance is %d\n",c);
	r=a+b+c;
	printf("Total salary is %d\n",r);
}
void b(){
	float l,b,a;
    printf("enter length is\n");
    scanf("%f",&l);
    printf("enter breadth is\n");
    scanf("%f",&b);
    a=l*b;
    printf("total area is a %f",a);
}
void c(){
    float l,b,r;
    printf("enter length is\n");
    scanf("%f",&l);
    printf("enter breadth is\n");
    scanf("%f",&b);
    r=2*(l+b);
    printf("total perimeter is a %f",r);
}
void d(){
    float s,r;
    printf("enter the side\n");
    scanf("%f",&s);
    r=s*s;
	printf("area is a %f",r);
}
void e(){
    float s,r;
    printf("enter the side\n");
    scanf("%f",&s);
    r=4*s;
    printf("perimeter is a %f",r);
}
void f(){
	float PI=3.14,R,r;
    printf("enter the radius\n");
    scanf("%f",&R);
    r=PI*R*R;
    printf("area is a %f",r);
}
void g(){
	float PI=3.14,R,r;
    printf("enter the radius\n");
    scanf("%f",&R);
    r=2*PI*R;
    printf("circumference is a %f",r);
}
void h(){
    float s1,s2,s3,r=s1+s2+s3;
    printf("first number is \n");
    scanf("%f",&s1);
    printf("second number is \n");   
    scanf("%f",&s2);
    printf("thred number is \n");
    scanf("%f",&s3);
    r=s1+s2+s3;
    printf("sum of three number %f",r);
}	
void i(){
	
   float H,E,S,M,SS,r;
    printf("Hindi marks is \n");
    scanf("%f",&H);
    printf("English marks is \n");
    scanf("%f",&E);
    printf("Scince marks is \n");
    scanf("%f",&S);
    printf("Maths marks is \n");
    scanf("%f",&M);
    printf("SS marks is \n");
    scanf("%f",&SS);
    r=H+E+S+M+SS; 
    printf("Result is %f",r);  
}
void j(){
	float H,E,S,M,SS,r,per;
    printf("Hindi marks is \n");
    scanf("%f",&H);
    printf("English marks is \n");
    scanf("%f",&E);
    printf("Scince marks is \n");
    scanf("%f",&S);
    printf("Maths marks is \n");
    scanf("%f",&M);
    printf("SS marks is \n");
    scanf("%f",&SS);
    r=H+E+S+M+SS; 
    per=(r/500)*100;
    printf("percentage is %f",per);  
}

int main ()
{int A;
printf("Enter Quction number.\n");
scanf("%d",&A);

	switch (A){
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
			printf("Aap keval 10 tak ke numbers ka aupiyog kar sakte h.");
			break;
		}
	} 
	return 0;
}
