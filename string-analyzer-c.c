#include <stdio.h>
#include <ctype.h>

int main()
{
    int vc=0, cc=0, lc=0, dc=0, sc=0, spc=0, wc=0;
    char s[200];

    printf("Enter your string (press Enter to finish):\n");
    fgets(s, sizeof(s), stdin);

    for(int i=0; s[i] != '\0'; i++)
    {
        if(i==0 && s[i] != ' ' && s[i] != '\n')
            wc++;

        if(s[i]==' ' && s[i+1] != ' ' && s[i+1] != '\n' && s[i+1] != '\0')
            wc++;

        if(s[i]=='\n')
            lc++;

        if(isdigit(s[i]))
            dc++;
        else if(isalpha(s[i]))
        {
            char ch = tolower(s[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vc++;
            else
                cc++;
        }
        else if(s[i]==' ')
            spc++;
        else if(s[i] != '\n')
            sc++;
    }

    printf("\nCounts:\n");
    printf("Vowels: %d\n", vc);
    printf("Consonants: %d\n", cc);
    printf("Digits: %d\n", dc);
    printf("Spaces: %d\n", spc);
    printf("Lines: %d\n", lc);
    printf("Words: %d\n", wc);
    printf("Special Characters: %d\n", sc);

    return 0;
}