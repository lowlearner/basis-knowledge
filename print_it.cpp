/*print_it */
#include<stdio.h>
#include<stdlib.h>

void do_heading (char *filename);
int line =0,page=0;
int main ( int argv ,char *argc[])
{
	char buffer[256];
    FILE *fp;
    
    if (argv<2)
    {
    	fprintf(stderr,"\nProper Usage is :");
      	fprintf(stderr,"\n\nprintf_it filename.ext\n");
	    return (1);
	}
   if ((fp=fopen(argc[1],"r"))==NULL)
	{
	   fprintf (stderr,"Error opening File,%s!argc[1]");
		return(1);
	}
    
    page=0;
    line=1;
    do_heading(argc[1]);
    
    while(fgets(buffer,256,fp)!=NULL)
    {
    	if (line%55==0)
		 do_heading(argc[1]);
	    
	    
	   fprintf(stdout,"%4d:\t%s",line++,buffer);
    }
	 
	 
	 fprintf(stdout,"\f");
	 fclose(fp);
	 return 0;   	
}
	
	
	void do_heading(char *filename)
	{
	page++;
	
	if (page>1)
		fprintf(stdout,"\f");
		
	fprintf (stdout,"Page:%d",page,filename);
	}




