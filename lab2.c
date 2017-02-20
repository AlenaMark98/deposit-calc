#include <stdio.h>

int correctness_date(int date){
    if ((date >= 0) && (date <= 365)){
        return 1;
    }
    return 0;
}

int correctness_vklad(int vklad){
    if (vklad >= 10){ 
        return 1;
    }
    return 0;
}

int vklad_time_of_expiry(int date1, int sum_vklad){
    int a;
    
    if (sum_vklad <= 100){
        if   ((date1 >= 0) && (date1 <= 30)){
            a = (sum_vklad * 10)/100;
            sum_vklad = sum_vklad - a;
            return sum_vklad;
        }
        if ((date1 >= 31) && (date1 <= 120)){
            a = (sum_vklad * 2)/100;
            sum_vklad = sum_vklad + a;
            return sum_vklad;
        }
        if ((date1 >= 121) && (date1 <= 240)){
            a = (sum_vklad * 6)/100;
            sum_vklad = sum_vklad + a;
            return sum_vklad;
        }
        if ((date1 >= 241) && (date1 <= 365)){
            a = (sum_vklad * 12)/100;
            sum_vklad = sum_vklad + a;
            return sum_vklad;
        }
    }
    else {
        if ((date1 >= 0) && (date1 <= 30)){
            a = (sum_vklad * 10)/100;
            sum_vklad = sum_vklad - a;
            return sum_vklad;
        }
        if ((date1 >= 31) && (date1 <= 120)){
            a = (sum_vklad * 3)/100;
            sum_vklad = sum_vklad + a;
            return sum_vklad;
        }
        if ((date1 >= 121) && (date1 <= 240)){
            a = (sum_vklad * 8)/100;
            sum_vklad = sum_vklad + a;
            return sum_vklad;
        }
        if ((date1 >= 241) && (date1 <= 365)){
            a = (sum_vklad * 15)/100;
            sum_vklad = sum_vklad + a;
            return sum_vklad;
        }

    }
    return 0; 
}

int main()
{
    int date, vklad;
    
    printf("Введите срок вклада:");
    scanf("%d", &date);
    printf("Введите сумму вклада в тыс. руб:");
    scanf("%d", &vklad);
    
    if ((correctness_date(date) == 1) && (correctness_vklad(vklad) == 1)){
        printf("корректно\n");
        vklad = vklad_time_of_expiry(date, vklad);
        printf("сумму вклада:%d",vklad );    
    }
    
    return 0;
}