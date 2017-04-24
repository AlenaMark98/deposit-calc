#include "../thirdparty/ctest.h"
#include <stdio.h>
#include "../src/deposit.h"

CTEST(suite1, test1)
{
    const int real = 81;
    printf("Штраф -10:");
    int data = 10;
    int vklad = 90; 
  	int result = vklad_time_of_expiry(data, vklad);
  	ASSERT_EQUAL(real, result);
    
}

CTEST(suite1, test2)
{
    const int real = 360;
    printf("Штраф -10:");
    int data = 20;
    int vklad = 400;
    int result = vklad_time_of_expiry(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite2, test1)
{
    const int real = 81;
    printf("+2 процента:");
    int data = 40;
    int vklad = 80;
    int result = vklad_time_of_expiry(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite2, test2)
{
    const int real = 927;
    printf("+3 процента:");
    int data = 50;
    int vklad = 900;
    int result = vklad_time_of_expiry(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite3, test1)
{
    const int real = 74;
    printf("+6 процента:");
    int data = 122;
    int vklad = 70;
    int result = vklad_time_of_expiry(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite3, test2)
{
    const int real = 756;
    printf("+8 процента:");
    int data = 135;
    int vklad = 700;
    int result = vklad_time_of_expiry(data, vklad);
    ASSERT_EQUAL(real, result);
}
CTEST(suite4, test1)
{
    const int real = 98;
    printf("+12 процента:");
    int data = 340;
    int vklad = 88;
    int result = vklad_time_of_expiry(data, vklad);
    ASSERT_EQUAL(real, result);
}
CTEST(suite4, test2)
{
    const int real = 690;
    printf("+15 процента:");
    int data = 300;
    int vklad = 600;
    int result = vklad_time_of_expiry(data, vklad);
    ASSERT_EQUAL(real, result);
}
