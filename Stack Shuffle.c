#include <stdio.h>

int main()
{
    int j = 4;

    char a4[5] = {'-', '-', '-', '-', '-'};
    int top4 = 0;

    char a5[5] = {'-', '-', '-', '-', '-'};
    int top5 = -1;

    int i, ch1, ch2;

    int a1[] = {'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'D', 'E'};
    int top1 = 0;

    int a2[] = {'E', 'C', 'D', 'A', 'E', 'D', 'B', 'E', 'C', 'A'};
    int top2 = 10;

    int a3[] = {'D', 'B', 'E', 'C', 'A', 'E', 'C', 'D', 'A', 'E'};
    int top3 = -1;

    printf("TEST\t");
    printf("1\t2\t3\t4\t5\n\n\n");

    for (i = 0; i <= 9; i++)
    {

        printf("\t%c\t%c\t%c\t", a1[i], a2[i], a3[i]);

        if (j >= i)
        {
            printf("%c\t%c", a4[i], a5[i]);
        }
        printf("\n\n");
    }

    printf("ENTER A TEST NO. TO POP : ");
    scanf("%d", &ch1);
    printf("\n\n");

    switch (ch1)
    {
    case 1:

        printf("ENTER TEST NO. TO PUSH A CHARECTOR FROM TAST : ");
        scanf("%d", &ch2);

        switch (ch2)
        {

        case 1:

            if (top1 == 10 || ch1 == ch2)
            {

                printf("CANNOT PUSH INTO TEST 1\n\n");
            }
            break;

        case 2:

            if (top1 >= 0)
            {

                if (top2 == 10)
                {

                    printf("CANNOT PUSH INTO TEST 1\n\n");
                }
                else
                {

                    a2[top2 + 1] = a1[top1];
                    top2++;
                    top1--;
                }
            }
            else
            {
                printf("NOTHING TO POP\n");
            }

            break;

        case 3:

            if (top1 >= 0)
            {
                if (top3 == 10)
                {

                    printf("CANNOT PUSH INTO TEST 1\n\n");
                }
                else
                {

                    a3[top3 + 1] = a1[top1];
                    top3++;
                    top1--;
                }
            }
            else
            {
                printf("NOTHING TO POP\n");
            }
            break;

        case 4:

            if (top1 >= 0)
            {

                if (top4 == 4)
                {

                    printf("CANNOT PUSH INTO TEST 1\n\n");
                }
                else
                {

                    a4[top4] = a1[top1];
                    top4++;
                    top1--;
                }
            }
            else
            {

                printf("NOTHING TO POP\n");
            }
        }
    }

    for (i = 0; i <= 9; i++)
    {

        printf("\t%c\t%c\t%c\t", a1[i], a2[i], a3[i]);

        if (j >= i)
        {
            printf("%c\t%c", a4[i], a5[i]);
        }
        printf("\n\n");
    }

    return 0;
}