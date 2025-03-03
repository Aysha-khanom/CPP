#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]s",s);

    int arr[10] = {0},count=0,sum=0;

    for(int i=0; i<strlen(s); i++)
    {
        arr[s[i]-'0']++;
    }

      for(int i=0; i<10; i++)
    {

            printf("%d\n",arr[i]);

    }

}
