/*Some text file is given: create another text file replacing the following words
"Ram" to "Hari", "Sita" to "Gita", and "Govinda" to "Shiva"*/

#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp,*fpp;
	char c[15];
	fp=fopen("file.txt","r");
	if(fp==NULL)
	{
		printf("Cannot open file with name file.txt");
		exit(1);
	}
	fpp=fopen("new-file.txt","w");
	if(fpp==NULL)
	{
		printf("Cannot create file with name new-file.txt");
		exit(1);
	}

	while(fscanf(fp,"%s",c)!=EOF)
	{

		if(strcmp(c, "Ram")==0)
			fprintf(fpp, "Hari ",c);
		else if(strcmp(c, "Sita")==0)
			fprintf(fpp,"Gita",c);
		else if(strcmp(c, "Govinda")==0)
			fprintf(fpp, "Shiva",c);
		else fprintf(fpp,"%s ",c);
	}
	printf("Completed!");
	fclose(fp);
	fclose(fpp);
	return 0;
}
