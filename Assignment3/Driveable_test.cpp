/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include "Driveable.h"

TEST(Driveable, GettersTest) {
    Gun* gun=new Gun();
    Driveable Tr(gun);
    EXPECT_EQ(Tr.getAmmo(), 100);
    EXPECT_EQ(Tr.getLevel(), 10);
    EXPECT_EQ(Tr.getExp(), 300);
    EXPECT_EQ(Tr.getGun(), gun);
    EXPECT_EQ(Tr.getSeats(), 4);
    EXPECT_NE(Tr.getPilot(), nullptr);
    delete gun;
}

TEST(Driveable, MethodsTest) {
    Driveable Tr();
    ASSERT_TRUE(Tr.obey());
}
