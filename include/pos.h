#pragma once
struct Pos
{
    float x,y;
    Pos()
    {}
    Pos(float x, float y)
    {
        this->x =x;
        this->y = y;
    }
};

struct IntPos
{
	int x, y;
};

struct BoxPos
{
	int x, y;
};

struct Bound
{
	float left;
	float right;
	float top;
	float bottom;
};