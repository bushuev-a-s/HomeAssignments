/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include "Transformer.h"
#include "Gun.h"

TEST(Transformer, GettersTest) {
    Gun* gun=new Gun;
    Transformer Tr(100, 10, 300, gun);
    EXPECT_EQ(Tr.getAmmo(), 100);
    EXPECT_EQ(Tr.getLevel(), 10);
    EXPECT_EQ(Tr.getExp(), 300);
    EXPECT_EQ(Tr.getGun(), gun)
}

TEST(Transformer, MethodsTest) {
    Gun* gun=new Gun;
    Transformer Tr(100, 10, 300, gun);
    ASSERT_TRUE(Tr.move());
    ASSERT_TRUE(Tr.fire());
    ASSERT_TRUE(Tr.transform());
}
