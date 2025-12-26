/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 */

#include <gtest/gtest.h>
#include <vector>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Driveable.h"

TEST(Transformer, ParentTypization)
{
    std::vector<Transformer*> test;
    for(int i=0; i<3; i++)
    {
        test.push_back(new Autobot);
    }
    for(int i=0; i<3; i++)
    {
        test.push_back(new Decepticon);
    }
    for(int i=0; i<3; i++)
    {
        test.push_back(new Driveable);
    }
    for(int i=0; i<3; i++)
    {
        EXPECT_EQ(test[i]->printClass(), "Autobot");
    }
    for(int i=3; i<6; i++)
    {
        EXPECT_EQ(test[i]->printClass(), "Decepticon");
    }
    for(int i=6; i<9; i++)
    {
        EXPECT_EQ(test[i]->printClass(), "Driveable autobot");
    }
    for(size_t i=0; i<test.size(); i++)
    {
        delete test[i];
    }
}
