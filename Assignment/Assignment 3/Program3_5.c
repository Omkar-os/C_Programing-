#include<stdio.h>
typedef int BOOL;

#define True 1
#define False 0

BOOL CheckVowels(char ch)
{
    if(ch== 'a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch== 'A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            return True;
        }
        else
        {
            return False;
        }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowels(cValue);

    if(bRet == True)
    {
        printf("It is voWel");
    }
    else
    {
       printf("It is not vowel");
    }

    return 0;
}