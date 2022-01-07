#include<stdio.h>

main(){
	
	// pointer
	
	// to store location of other variable  // pointer is define by *
	
	// scanf("%d",&n);
	
	
	int x =25;
	
	int *p;       // pointer
	
	p = &x;
	
	printf("%p\n",p);
	
	printf("%p\n",&x);
	printf("%d\n",x);
	
	printf("%p\n",&p);
	
	// find the value from pointer  // 
	
	printf("%d\n",*p);
	
	//////////////////////////////////////////
	
	printf("%d\n",*(&x));
	
	printf("%p\n",&(*(&x)));
	
	printf("%d\n",*(&(*(&(*p)))));
	
	//	printf("",*x);

	printf("%d",(*(&(*p))));
	
	
	
}
