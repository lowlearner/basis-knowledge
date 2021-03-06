/* Program Name :week.c                                                *
 *Purpose : Program to enter the ages and incomes of up to 100 people .*
 *         The program prints a re port based on the numbers entered . *
 *---------------------------------------------------------------------*
 *------------------------------------------*
 * include files *
 *------------------------------------------*/
 
 #include <stdio.h>
 
 #define MAX 100
 #define YES 1
 #define NO 0
 
 
 
 
 long income[MAX];
 int month[MAX],day[MAX],year[MAX];
 int x,y,ctr;
 int cont ;
 long month_total,grand_total;
 
 int main (void);
 int display_instructions(void);
 void get_data();
 void display_report(void);
 int continue_function();
 
 
 
 int main(void)
 {
 	cont = display_instructions();
 	
 	if (cont==YES)
 	{
	 	get_data();
	 	display_report();
    }
    else
    	printf("\nProgram Aborted buy user !\n\n");
    	
   	return 0;
 	
 }
 	
 	
 
 
 
 
 int display_instructions(void)
 {
 	printf("\n\n\nThis program enables you to enter up to 99 proplr\'s"
	 "incomes and birthdays .It then prints the incomes by month along with "
	 "the overall income and overall average .\n");
	 
	 cont = continue_function();
	 return (cont);
 }
 	
 
 
   
   
 void get_data(void)
 {
 	for (cont=YES,ctr=0;ctr<MAX&&cont==YES;ctr++)
 	{
	 	printf("Enter information for person %d. ",ctr+1);
	 	printf("\n\tEnter Birthday:");
	/*-----------------------------------*/ 	
	 	do
	 	{
	 		printf("\n\tMonth (0-12:");
	 		scanf("%d",&month[ctr]);	 		
	 	}while (month[ctr]<0||month[ctr]>12);
    /*-------------------------------------*/
		 do
	 	{
	 		printf("\n\tDay(0-31):");
	 		scanf("%d",&day[ctr]);
	 	}while(day[ctr]<0||day[ctr]>31);
	/*---------------------------------------*/
		do
		{
			printf("\n\tYear (0-2002):");
			scanf("%d",&year[ctr])	;
			
		} while (year[ctr]<0||year[ctr]>2002);
		
		printf("\nEnter Yearly Income (whole dollars):");
		scanf ("%d",&income[ctr])	;
		
		cont = continue_function();
	 }
 	
 }  
 
 
 
  void display_report()
  {
  	grand_total=0;
  	printf("\n\n\n");
  	printf("\n      SALARY SUMMARY");
  	printf("\n      ===============");
  	
  	
  	for (x=0;x<=12;x++)
  	{
	  	month_total=0;
	  	for (y=0;y<ctr;y++)
	  	{
	  	if (month[y]==x)
		  month_total+=income[y];	
	  	}
	  	printf("\nTotal for month %d is %ld",x,month_total);
	  	grand_total +=month_total;
  	}
	  	printf("\n\nReport totals:");
	    printf("\nTotal Income is %ld",grand_total);
	    printf("\nAverage Income is %ld",grand_total/ctr);
	    
	    printf("\n\n***End of report ***\n");
  	
  }
  
  
  int continue_function(void)
 {
 	printf("\n\nDo you wish to continue ? (0=NO/1=YES):");
 	scanf("%d",&x);
 	
 	while (x<0||x>1)
 	{
	 	
	 	printf("\n%d is invalid !",x);
	 	printf("Please enter 0 to quit or 1 to continue :");
	 	scanf ("%d",&x);
	 }
 	if (x==0)
 	 return (NO);
 	else
	 return (YES); 
 }