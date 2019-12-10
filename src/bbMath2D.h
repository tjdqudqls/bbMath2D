//
// Created by ByeongBin Seong on 08/12/2019.
//

#ifndef BBMATH2D_BBMATH2D_H
#define BBMATH2D_BBMATH2D_H
#include <math.h>


struct bbVec2 {

    bbVec2(){}

    bbVec2(float _x, float _y){
        x = _x;
        y = _y;
    }

    float DotProduct(bbVec2& v){

        return x * v.x + y * v.y;
    }

    float CrossProduct(bbVec2& v){
        return x * v.y - y * v.x;
    }

    void Normalize(){
        float length = GetLength();
        if(length < FLT_EPSILON) return;
        x /= length;
        y /= length;
    }

    float GetLength() const{
        return sqrt(x*x + y*y);
    }
    float GetLengthSquared() const{
        return x*x + y*y;
    }

    float operator () (int i) const
    {
        return (&x)[i];
    }

    float& operator () (int i)
    {
        return (&x)[i];
    }

    bbVec2 operator + (const bbVec2& v)
    {
        float retX = x + v.x;
        float retY = y + v.y;
        return bbVec2(retX, retY);
    }

    bbVec2 operator - (const bbVec2& v)
    {
        float retX = x - v.x;
        float retY = y - v.y;
        return bbVec2(retX, retY);
    }

    bbVec2 operator * (float a)
    {
        float retX = x * a;
        float retY = y * a;
        return bbVec2(retX, retY);
    }

    bbVec2 operator / (float a)
    {
        float retX = x / a;
        float retY = y / a;
        return bbVec2(retX, retY);
    }

    void operator += (const bbVec2& v)
    {
        x += v.x;
        y += v.y;
    }

    void operator -= (const bbVec2& v)
    {
        x -= v.x;
        y -= v.y;
    }

    void operator *= (float a)
    {
        x *= a;
        y *= a;
    }

    void operator /= (float a)
    {
        x /= a;
        y /= a;
    }

    bool operator == (const bbVec2& v){
        return x == v.x && y == v.y;
    }

    float x, y;

};





#endif //BBMATH2D_BBMATH2D_H
