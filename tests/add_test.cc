#include <gtest/gtest.h>

#include <boilerplate/add.hh>

TEST(BoilerplateTest, AddTest) {
  EXPECT_EQ(boilerplate::add(1, 1), 2);
}
