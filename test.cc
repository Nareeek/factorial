#include "factorial.h"
#include "gtest/gtest.h"

namespace {
	
// Tests factorial of non numbers(string).
TEST(FactorialTest, Non_number) {
  // This test is named "Non_number", and belongs to the "FactorialTest"
  // test case.
  bool is_error = false;

  if(factorial("some string") == -1){
    is_error = true;
   }
  EXPECT_TRUE(is_error);
}



// Tests factorial of negative numbers.
TEST(FactorialTest, Negative) {
  // This test is named "Negative", and belongs to the "FactorialTest"
  // test case.
  bool is_error = false;
      if(factorial(-5) == -1){
        is_error = true;
      }
  EXPECT_TRUE(is_error);
}


// Tests factorial of 0.
TEST(FactorialTest, Zero) {
  EXPECT_EQ(1, factorial(0));
}

// Tests factorial of positive numbers.
TEST(FactorialTest, Positive) {
  EXPECT_EQ(1, factorial(1));
  EXPECT_EQ(2, factorial(2));
  EXPECT_EQ(6, factorial(3));
  EXPECT_EQ(40320, factorial(8));
}

} // namespace



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

