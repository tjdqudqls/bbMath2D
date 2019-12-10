//
// Created by ByeongBin Seong on 10/12/2019.
//

#include "gtest/gtest.h"
#include "bbMath2D.h"
#include <iostream>
using namespace std;
TEST(bbVec2D, constructorTest) {
    bbVec2 vec2D =  bbVec2(10.f, 20.f);

    EXPECT_EQ(vec2D.x, 10.f);
    EXPECT_EQ(vec2D.y, 20.f);
}

TEST(bbVec2D, equalOperator) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    EXPECT_TRUE(v0 == bbVec2(1.f,2.f));
}

TEST(bbVec2D, addOperator) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    bbVec2 v1= bbVec2(3.f, 4.f);
    bbVec2 v = v0 + v1;
    EXPECT_TRUE(v == bbVec2(4.f,6.f));
}

TEST(bbVec2D, addOperator2) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    v0 += bbVec2(3.f,4.f);
    EXPECT_TRUE(v0 == bbVec2(4.f,6.f));
}

TEST(bbVec2D, subtractOperator) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    bbVec2 v1= bbVec2(3.f, 4.f);
    bbVec2 v = v0 - v1;
    EXPECT_TRUE(v == bbVec2(-2.f,-2.f));
}

TEST(bbVec2D, subtractOperator2) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    v0 -= bbVec2(3.f,4.f);
    EXPECT_TRUE(v0 == bbVec2(-2.f,-2.f));
}

TEST(bbVec2D, multOperator) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    bbVec2 v = v0 * 3;
    EXPECT_TRUE(v == bbVec2(3.f,6.f));
}

TEST(bbVec2D, multOperator2) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    v0 *= 3;
    EXPECT_TRUE(v0 == bbVec2(3.f,6.f));
}

TEST(bbVec2D, divideOperator) {
    bbVec2 v0= bbVec2(1.f, 2.f);

    bbVec2 v = v0 / 2;
    EXPECT_TRUE(v == bbVec2(.5f,1.f));
}

TEST(bbVec2D, divideOperator2) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    v0 /= 2;
    EXPECT_TRUE(v0 == bbVec2(.5f,1.f));
}

TEST(bbVec2D, divideOperator_byZero) {
    bbVec2 v0= bbVec2(1.f, 2.f);
    v0 /= 0;
    EXPECT_TRUE(v0 == bbVec2(INFINITY,INFINITY));
}


TEST(bbVec2D, Normalize) {
    bbVec2 v0= bbVec2(10.f, 10.f);
    v0.Normalize();
    EXPECT_TRUE(v0 == bbVec2(0.7071067812f,0.7071067812f));
}

TEST(bbVec2D, Normalize_ZeroVector) {
    bbVec2 v0= bbVec2(0.f, 0.f);
    v0.Normalize();
    EXPECT_TRUE(v0 == bbVec2(0.f,0.f));
}