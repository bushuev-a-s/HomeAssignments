/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include "Pilot.h"

TEST(Pilot, GettersTest) {
    Pilot pilot();
    pilot.setName("Max");
    EXPECT_EQ(pilot.getName(), "Max");
}

TEST(Gun, MethodsTest) {
    Pilot pilot();
    ASSERT_TRUE(pilot.drive());
}
