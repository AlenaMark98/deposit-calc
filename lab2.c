#include <stdio.h>

int correctness_date(int date){
    if ((date >= 0) && (date <= 365)){
        return 1;
    }
}

int correctness_vklad(int vklad){
    if (vklad >= 10){ 
        return 1;
    }
}

//int vklad_time_of_expiry(int date1, int sum_vklad){
//    int a, sum_vklad_percent;
     
//}

int main()
{
    int date, vklad;
    
    printf("Введите срок вклада в тыс.руб:");
    scanf("%d", &date);
    printf("Введите сумму вклада:");
    scanf("%d", &vklad);
    
    if ((correctness_date(date) == 1) && (correctness_vklad(vklad) == 1)){
        printf("корректно");
    }
    
    return 0;
}