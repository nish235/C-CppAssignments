#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
#define N 50
int main()
{
    int i;
    char str;
    FILE *fp;
    fp=fopen("rand.txt", "w");
    if(fp==NULL)
    {
        cout<<"\n Error in Creating File";
        return 0;
    }
    srand(time(NULL));
    fprintf(fp,"n",50);
    for(i=1;i<=50;i++)
    {
    fprintf(fp,"\n",(rand()%2001-1000)/2.e3);
    }
    fclose(fp);
    fp=fopen("rand.txt","r");
    str=fgetc(fp);
	while(str!=EOF)
    {
        cout<<str;
		str=fgetc(fp);
    }
  fclose(fp);
  return 0;
}
