
#include <zephyr.h>
#include <ztest.h>
#include <fib.h>


static void test_turn_on(void)
{
	zassert_equal(1, fibonacci(1), "testin fibonacci");
}

void test_main(void)
{
	ztest_test_suite(test_fibonacci,
			 ztest_unit_test(test_turn_on)
            );
	ztest_run_test_suite(test_fibonacci);
}
