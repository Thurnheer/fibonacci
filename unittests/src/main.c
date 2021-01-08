
#include <zephyr.h>
#include <ztest.h>
#include <fib.hpp>


static void test_fibonaci_expect_one(void)
{
	zassert_equal(1, fibonacci(1), "testin fibonacci");
}

void test_main(void)
{
	ztest_test_suite(fibonacci,
			 ztest_unit_test(test_fibonaci_expect_one)
        );
	ztest_run_test_suite(fibonacci);

}
