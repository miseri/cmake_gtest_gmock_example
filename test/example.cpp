#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "mock_foo.h"
#include "bar.h"

 using ::testing::AtLeast;

TEST(BarTest, method3) {
  MockFoo foo;
  EXPECT_CALL(foo, method0())
      .Times(AtLeast(1));

  Bar bar(&foo);
  EXPECT_TRUE(bar.method3(0, 0, 10));
}


TEST(MyTest, TestFailure) {
  EXPECT_FALSE(false);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}

