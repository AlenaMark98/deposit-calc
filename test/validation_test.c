#include "../thirdparty/ctest.h"
#include <stdio.h>

CTEST(suite1, test1)
{
    const int real = 90;
    printf("Корректность срока вклада:");
    ASSERT_INTERVAL(0, 365, real);
}

CTEST(suite1, test2)
{
	const int real = 9;
    printf("Корректность вклада, min 10 тыс.р:");
    ASSERT_INTERVAL(10,1000000, real);
}