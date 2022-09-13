/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

class CheckoutTests : public ::testing::Test {
public:

protected:
	Checkout checkOut;
};

TEST_F(CheckoutTests, CanCalculateTotal){
	checkOut.AddItemPrice("a", 1);
	checkOut.AddItem("a");
	int total = checkOut.CalculateTotal();
	ASSERT_EQ(1, total);
}

TEST_F(CheckoutTests, CanGetTotalForMultipleItems){
	checkOut.AddItemPrice("a", 1);
	checkOut.AddItemPrice("b", 2);
	checkOut.AddItem("a");
	checkOut.AddItem("b");
	int total = checkOut.CalculateTotal();
	ASSERT_EQ(3, total);
}

TEST_F(CheckoutTests, CanAddDiscount){
	checkOut.AddDiscount("a", 3, 2);
}

TEST_F(CheckoutTests, CanCalculateTotalWithDiscount){
	checkOut.AddItemPrice("a", 1);
	checkOut.AddDiscount("a", 3, 2);
	checkOut.AddItem("a");
	checkOut.AddItem("a");
	checkOut.AddItem("a");
	int total = checkOut.CalculateTotal();
	ASSERT_EQ(2, total);
}

// TEST_F(CheckoutTests, ItemWithNoPriceThrowsException){
// 	ASSERT_THROW( checkOut.AddItem("a"), std::invalid_argument );
// }