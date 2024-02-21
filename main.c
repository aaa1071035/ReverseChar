#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void reverseString(char* pszStr)
{
    char* pszStrEnd;
    char cTemp;
    pszStrEnd=pszStr;
    while(NULL!=(*pszStrEnd))
    {
        pszStrEnd++;
    }
    while(pszStr<pszStrEnd)
    {
        cTemp=(*pszStr);
        *pszStr=(*pszStrEnd);
        *pszStrEnd=cTemp;
        pszStrEnd--;
        pszStr++;
    }
//    uint16_t strLength;
//    char bTemp;
//    for(int i=0;pszStr[i]!=NULL;i++)
//    {
//        strLength=i;
//    }
//    for(int i=0;i<=strLength/2;i++)
//    {
//        bTemp=pszStr[i];
//        pszStr[i]=pszStr[strLength-i];
//        pszStr[strLength-i]=bTemp;
//    }
}


void reverse(char* pszStr)
{
    uint16_t strLength;
    char bTemp;
    for(int i=0;pszStr[i]!=NULL;i++)
    {
        strLength=i;
    }
    for(int i=0;i<=strLength/2;i++)
    {
        bTemp=pszStr[i];
        pszStr[i]=pszStr[strLength-i];
        pszStr[strLength-i]=bTemp;
    }
}

int main()
{
    char TextBuffer[]="FEDCBA987654321";
    for(int i=0;i<strlen(TextBuffer);i++)
    {
        printf("%c", TextBuffer[i]);
    }
    printf("\nreverse to\n");
    reverse(TextBuffer);
    for(int i=0;i<strlen(TextBuffer);i++)
    {
        printf("%c", TextBuffer[i]);
    }
    return 0;
}
