/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include "Decepticon.h"

TEST(Decepticon, GettersTest) {
    Gun* gun=new Gun;
    Decepticon Tr(gun);
    EXPECT_EQ(Tr.getAmmo(), 100);
    EXPECT_EQ(Tr.getLevel(), 10);
    EXPECT_EQ(Tr.getExp(), 300);
    EXPECT_EQ(Tr.getGun(), gun);
    EXPECT_EQ(Tr.getToughness(), 15);
    EXPECT_EQ(Tr.getEvilness(), 50);
    delete gun;
}

TEST(Decepticon, MethodsTest) {
    Decepticon Tr;
    ASSERT_TRUE(Tr.destroy());
}
