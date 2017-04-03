#include <stdio.h>
#include "deposit.h"

int main()
{
    int date, vklad;

    printf("Введите срок вклада:");
    scanf("%d", &date);
    printf("Введите сумму вклада в тыс. руб:");
    scanf("%d", &vklad);

    if ((correctness_date(date) == 1) && (correctness_vklad(vklad) == 1)){
        printf("Корректно\n");
        vklad = vklad_time_of_expiry(date, vklad);
        printf("Cумму вклада:%d",vklad );
    }

    return 0;
}
