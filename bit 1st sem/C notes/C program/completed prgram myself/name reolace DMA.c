/* C or C++ prgram to replace the words from a text file and copy to other text file . */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

main()
{
      FILE *ptr,*ptr1;
      int i=0,j,n[10],k=0,l;
      char line[150],word1[30],word[30];
      printf("* This Is A Program To Replace The Words 'Ram' to 'Hari', 'Sita' to 'Gita', & 'Govinda' to 'Shiva' . *\n\n");
      printf("Enter Your String : ");
      gets(line);
      l=strlen(line);
      for(i=0;i<l;i++)
      {
                      if(line[i]==' ')
                      k++;
                      }

      //printf("\nEnter a Word To Delete : ");
      //gets(word1);
      ptr=fopen("original.txt","w");
      //fprintf(ptr,"%s","This Is The Original Strings With Out Replacement :\n\t");
      for(i=0;i<l;i++)
      {
                      fprintf(ptr,"%c",line[i]);
                      }
      fclose(ptr);
      printf("\n\nThe New String After Deletion : \n\n\t");
      ptr=fopen("original.txt","r");
      ptr1=fopen("replace.txt","w");

      while(!feof(ptr))
      {
                fscanf(ptr,"%s",&word);
                if(strcmp(word,"Ram")==NULL)
                {
                                               printf("%s ","Hari");
                                               fprintf(ptr1,"%s ","Hari");
                                               }
                else if(strcmp(word,"Sita")==NULL)
                {
                                               printf("%s ","Gita");
                                               fprintf(ptr1,"%s ","Gita");
                                               }

                else if(strcmp(word,"Govinda")==NULL)
                {
                                               printf("%s ","Shiva");
                                               fprintf(ptr1,"%s ","Shiva");
                                               }
                else
                {
                    fprintf(ptr1,"%s ",word);
                    printf("%s ",word);
                    }
                }
       fclose(ptr);

      getch();
      }
