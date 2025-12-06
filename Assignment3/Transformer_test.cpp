/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include "Transformer.h"

TEST(Transformer, GettersTest) {
    Transformer Tr;
    EXPECT_EQ(Tr.getAmmo(), 100);
    EXPECT_EQ(Tr.getLevel(), 10);
    EXPECT_EQ(Tr.getExp(), 300);
    EXPECT_EQ(Tr.getGun(), nullptr);
}

TEST(Transformer, MethodsTest) {
    Transformer Tr;
    ASSERT_TRUE(Tr.move());
    ASSERT_TRUE(Tr.fire());
    ASSERT_TRUE(Tr.transform());
}
