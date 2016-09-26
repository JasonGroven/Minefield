/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
    protected:
        FieldTest(){}
        virtual ~FieldTest(){}
        virtual void SetUp(){}
        virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
    Field minefield(10);
    
    minefield.placeMine(4,5);
    ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
TEST(FieldTest, PlacedMineIsNotSafe)
{
    Field mf;
    mf.placeMine(2, 3);
    ASSERT_FALSE(mf.isSafe(2,3));
}
TEST(FieldTest, EmptySquareSafe)
{
    Field mf(5);
    ASSERT_TRUE(mf.isSafe(2,3));
}
TEST(FieldTest, placeMineOOB)
{
    Field mf(1);
    mf.placeMine(25, 25);
    ASSERT_NE( mf.get(25,25), MINE_HIDDEN);
}
