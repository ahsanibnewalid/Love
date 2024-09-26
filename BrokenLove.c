#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("   @@@@      @@@@\n");
    printf(" @@@@@@@@  @@@@@@@@\n");
    printf("@@@@@@Detect Love@@@\n");
    printf(" @@@@@@@@@@@@@@@@@@\n");
    printf(" @@@@@@@@@@@@@@@@@@@\n");
    printf("  @@@@@@@@BY@@@@@@@\n");
    printf("   @@@@@@@@@@@@@@@\n");
    printf("    @@@@@@@@@@@@@\n");
    printf("     ahsan shuvo\n");
    printf("      @@@@@@@@@\n");
    printf("       @@@@@@@\n");
    printf("        @@@@@\n");
    
    kodu();

    return 0;
    }


    int kodu()
    {
        int response1;
        int response2;
        int response3;
        int response4;
        int response5;

    //getting users response
    printf("\n Do you wants to detect love?");
    printf("\n Answer the questions given bellow using y/Y(yes) or n/N(no)");
    printf("\n Do you love her/him?");
    scanf(" %c",&response1);
    printf("\n Do he/she loves you?");
    scanf(" %c",&response2);


      /*  printf("\n Do he/she loves you?");
    scanf("%c",&response3);
        printf("\n Do he/she loves you?");
    scanf("%c",&response4);
        printf("\n Do he/she loves you?");
    scanf("%c",&response5);*/


    //logic applying

    if (/* condition */ (response1 == 'y' || response1 == 'Y') && (response2 == 'y' || response2 == 'Y'))
    {printf("Congratulations! It looks like tere is mutual love between you and your most-liked person. Lets went deep in your relationship.\n");
        /* code */
    } else if (/* condition */ (response1 == 'y' || response1 == 'Y' ) && (response2 == 'n' || response2 == 'N'))
    { printf("Ohh,I'm feeling so sorry.It's looking like this is one sided love.But dont be sad.Because once upon a time the duffer boy who wrote this proggrame,also loved someone and he knows the true feeling of one sided love.Contact him and share this incident.\n");
        /* code */
    }
    
    
    return 0;
    }