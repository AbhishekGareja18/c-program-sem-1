 #include<stdio.h>
 void main()
 {
 	int i,j,n=5;
 	for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=n;j++){
 			if(i==n ||i==1 ||j==1 ||j==n){
 				printf("*");
			 }
			 else{
			 	printf(" ");
			 }
		 }printf("\n");
	 }
 }
