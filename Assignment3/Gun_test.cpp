/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include "Gun.h"

TEST(Gun, GettersTest) {
    Gun gun;
    gun.setDamage(15);
    gun.setRange(50);
    EXPECT_EQ(gun.getDamage(), 15);
    EXPECT_EQ(gun.getRange(), 50);
}

TEST(Gun, MethodsTest) {
    Gun gun;
    ASSERT_TRUE(gun.upgrade());
}
