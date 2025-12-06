/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include "Autobot.h"

TEST(Autobot, GettersTest) {
    Gun* gun=new Gun;
    Autobot Tr(gun);
    EXPECT_EQ(Tr.getAmmo(), 100);
    EXPECT_EQ(Tr.getLevel(), 10);
    EXPECT_EQ(Tr.getExp(), 300);
    EXPECT_EQ(Tr.getGun(), gun);
    EXPECT_EQ(Tr.getSize(), 15);
    EXPECT_EQ(Tr.getStrength(), 50);
    delete gun;
}

TEST(Autobot, MethodsTest) {
    Autobot Tr;
    ASSERT_TRUE(Tr.ultimate());
}
