#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int menu, buyurtma, milliy, tolov = 0, kabob, somsa, turk, ichimlik, p_c, choy, dessert;
    int menu1, menu2, menu3, menu4, menu5;
    int m = 0, t = 0, ch = 0, d = 0, y = 0, x = 0, z = 0;

    puts("Assalomu alaykum. Xush kelibsiz. Buyurtma berasizmi: 1.Ha   2.Yo'q");
    scanf("%d", &menu);
    if (menu == 1)
    {
        puts("Menu\n  1.Milliy taomlar\n  2.Turkiya taomlari\n  3.Ichimliklar\n  4.Dessert");
        puts("\nNima buyurtma berasiz");
        scanf("%d", &buyurtma);

        /* Milliy taomlar */
        if (buyurtma == 1)
        {
        o1:
            printf("\nMilliy taomlar!\n  1.Osh\n  2.Kabob\n  3.Somsa\n  4.Norin\n  5.Qovurdoq\n");
            scanf("%d", &milliy);
            switch (milliy)
            {
            case 1:
                tolov += 25000;
                break;
            case 2:
                printf("\nKabob:\n 1. 1ta\n 2. 2ta\n 3. 4ta\n");
                scanf("%d", &kabob);
                int k;
                if (kabob == 1)
                    tolov += 15000;
                else if (kabob == 2)
                    tolov += 30000;
                else if (kabob == 3)
                    tolov += 60000;
                break;
            case 3:
                printf("\nSomsa: \n1. 2ta\n 2. 3ta\n 3.4 ta\n");
                scanf("%d", &somsa);
                int s;
                if (somsa == 1)
                    tolov += 16000;
                else if (somsa == 2)
                    tolov += 24000;
                else if (somsa == 3)
                    tolov += 32000;
                break;
            case 4:
                tolov += 20000;
                break;
            case 5:
                tolov += 23000;
                break;
            default:
                break;
            }
            m = 1;
            if (t != 1)
            {
                puts("\nTurk taomlaridan ham buyurtma qilasizmi? 1.Ha   2.Yo'q");
                scanf("%d", &menu1);
                if (menu1 == 1)
                    goto o;
            }
            if (ch != 1 && x != 1)
            {
                puts("\nIchimliklardan buyurtma qilasizmi? 1.Ha   2.Yo'q");
                scanf("%d", &menu4);
                if (menu4 == 1)
                    goto o3;
                else
                    x = 1;
            }
            if (d != 1 && z != 1)
            {
                puts("\nDesertga buyurtma berasizmi? 1.Ha   2.Yo'q");
                scanf("%d", &menu5);
                if (menu5 == 1)
                    goto o4;
                else
                    z = 1;
            }
        }

        /* Turk taomlari */
        else if (buyurtma == 2)
        {
        o:
            printf("\nTurk Oshxonasi:\n  1.Turkcha ratatuy\n  2.Turkcha somsa\n  3.Turkcha yasmiqli sho'rva\n  4.Sigara borek\n  5.Turk kabobi\n");
            scanf("%d", &turk);
            switch (turk)
            {
            case 1:
                tolov += 28000;
                break;
            case 2:
                tolov += 20000;
                break;
            case 3:
                tolov += 25000;
                break;
            case 4:
                tolov += 20000;
                break;
            case 5:
                tolov += 18000;
                break;
            default:
                break;
            }
            t = 1;
            if (m != 1)
            {
                puts("\nMilliy taomlaridan ham buyurtma qilasizmi? 1.Ha   2.Yo'q");
                menu1 = 0;
                scanf("%d", &menu1);
                if (menu1 == 1)
                    goto o1;
            }
            if (ch != 1 && x != 1)
            {
                puts("\nIchimliklardan buyurtma qilasizmi? 1.Ha   2.Yo'q");
                scanf("%d", &menu4);
                if (menu4 == 1)
                    goto o3;
                else
                    x = 1;
            }
            if (d != 1 && z != 1)
            {
                puts("\nDesertga buyurtma berasizmi? 1.Ha   2.Yo'q");
                scanf("%d", &menu5);
                if (menu5 == 1)
                    goto o4;
                else
                    z = 1;
            }
        }

        /* Ichimliklar */
        else if (buyurtma == 3)
        {
            if (ch != 1)
            {
            o3:
                puts("\nIchimliklardan nima buyurtma qilasiz?");
                printf("\nIchimliklar:\n  1.Pepsi va Cola\n  2.Choy\n  3.Qahva\n  4.Sharbat\n");
                scanf("%d", &ichimlik);
                switch (ichimlik)
                {
                case 1:
                    printf("\n  1.Pepsi\n  2.Cola\n");
                    scanf("%d", &p_c);
                    if (p_c)
                        tolov += 12000;
                    else
                        tolov += 10000;
                    break;
                case 2:
                    printf("\nChoy:\n  1.Ko'k choy\n  2.Qora choy\n  3.Yasmiqli choy\n");
                    scanf("%d", &choy);
                    if (choy == 1)
                        tolov += 5000;
                    else if (choy == 2)
                        tolov += 5000;
                    else if (choy == 3)
                        tolov += 7000;
                    break;
                case 3:
                    tolov += 8000;
                    break;
                case 4:
                    tolov += 10000;
                    break;

                default:
                    break;
                }
                ch = 1;
                if (t == 0 && m == 0 && y != 1)
                {
                    puts("\nTaomlardan ham buyurtma qilasizmi? 1.Ha   2.Yo'q");
                    scanf("%d", &menu2);
                    if (menu2 == 1)
                    {
                        puts("\n  1.Milliy Taomlar\n  2.Turk taomlari");
                        int taom;
                        scanf("%d", &taom);
                        if (taom == 1)
                            goto o1;
                        else if (taom == 2)
                            goto o;
                    }
                    else
                        y = 1;
                }
                if (d != 1 && z != 1)
                {
                    puts("\nDesertga ham buyurtma berasizmi? 1.Ha   2.Yo'q");
                    scanf("%d", &menu5);
                    if (menu5 == 1)
                        goto o4;
                    else
                        z = 1;
                }
            }
        }

        /* Dessert */
        else if (buyurtma == 4)
        {
            if (d == 0)
            {
            o4:
                puts("\nDessertga nima buyurtma qilasiz?");
                printf("\nDessert:\n  1.Muzqaymoq\n  2.Choklod\n  3.Cakes\n  4.Milkshakes\n");
                scanf("%d", &dessert);

                switch (dessert)
                {
                case 1:
                    tolov += 10000;
                    break;
                case 2:
                    tolov += 15000;
                    break;
                case 3:
                    tolov += 12000;
                    break;
                case 4:
                    tolov += 20000;
                    break;
                default:
                    break;
                }
                d = 1;
                if (t == 0 && m == 0 && y != 1)
                {
                    puts("\nTaomlardan ham nimadir buyurasizmi? 1.Ha   2.Yo'q");
                    scanf("%d", &menu3);
                    if (menu3 == 1)
                    {
                        puts("\n  1.Milliy Taomlar\n  2.Turk taomlari");
                        int d;
                        scanf("%d", &d);
                        if (d == 1)
                            goto o1;
                        else if (d == 2)
                            goto o;
                    }
                    else
                        y = 1;
                }
                if (ch != 1 && x != 1)
                {
                    puts("\nIchimliklardan buyurtma qilasizmi? 1.Ha   2.Yo'q");
                    scanf("%d", &menu4);
                    if (menu4 == 1)
                        goto o3;
                    else

                        x = 1;
                }
            }
        }
    }
    else
        goto ch;

    /* Buyurtmalar va narxi */

    system("cls");
    printf("\nBuyurtmalar\n\n");
    switch (milliy)
    {
    case 1:
        printf("  Osh:                         25000 so'm\n");
        break;
    case 2:
        if (kabob == 1)
            printf("  Kabob:                       15000 so'm\n");
        else if (kabob == 2)
            printf("  Kabob 2ta:                   30000 so'm\n");
        else if (kabob == 3)
            printf("  Kabob 4ta:                   60000 so'm\n");
        break;
    case 3:
        if (somsa == 1)
            printf("  Somsa 2ta:                   16000 so'm\n");
        else if (somsa == 2)
            printf("  Somsa 3ta:                   24000 so'm\n");
        else if (somsa == 3)
            printf("  Somsa 4ta:                   32000 so'm\n");
        break;
    case 4:
        printf("  Norin:                       20000 so'm\n");
        break;
    case 5:
        printf("  Qovurdoq:                    23000 so'm\n");
        break;
    default:
        break;
    }
    switch (turk)
    {
    case 1:
        printf("  Turkcha ratatuy:             28000 so'm\n");
        break;
    case 2:
        printf("  Turkcha somsa:               20000 so'm\n");
        break;
    case 3:
        printf("  Turkcha yasmiqli sho'rva:    25000 so'm\n");
        break;
    case 4:
        printf("  Sigara borek:                20000 so'm\n");
        break;
    case 5:
        printf("  Turk kabobi:                 18000 so'm\n");
        break;
    default:
        break;
    }
    switch (ichimlik)
    {
    case 1:
        if (p_c == 1)
            printf("  Pepsi:                       12000 so'm\n");
        else if (p_c == 2)
            printf("  Cola:                        10000 so'm\n");
        break;
    case 2:
        if (choy == 1)
            printf("  Ko'k choy:                    5000 so'm\n");
        else if (choy == 2)
            printf("  Qora choy:                    5000 so'm\n");
        else if (choy == 3)
            printf("  Yasmiqli choy:                7000 so'm\n");
        break;
    case 3:
        printf("  Qahva:                        8000 so'm\n");
        break;
    case 4:
        printf("  Sharbat:                     10000 so'm\n");
    default:
        break;
    }

    switch (dessert)
    {
    case 1:

        printf("  Muzqaymoq:                   10000 so'm\n");
        break;
        printf("  Choklod:                     15000 so'm\n");
    case 2:
        break;
    case 3:
        printf("  Cakes:                       12000 so'm\n");
        break;
    case 4:
        printf("  Milkshakes:                  20000 so'm\n");
        break;
    default:
        break;
    }
    tolov = tolov + tolov*0.1;
    printf("\n                       To'lov: %d so'm\n\n", tolov);

ch:

    system("pause");
    return 0;
}
