#include<stdio.h>
#include<string.h>
int vovel(char ch)
{   
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    return 1;
    else
    return 0;
    
}
void main()
{
    printf("Enter the word to be checked \n");
    char word[100];
    fgets(word,100,stdin);
    int count=0;

    for(int i=0;i<strlen(word);i++)
    {
        count+=vovel(word[i]);
    }

    printf("number of vovels in the word: %d",count);
}
