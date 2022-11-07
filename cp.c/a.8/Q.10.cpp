#include<stdio.h>
int main()
{
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
	default :{printf("Bhai week me 7 days hote h.");
	break;
	}
}
return 0;

}
