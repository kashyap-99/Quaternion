#ifndef MAIN_H
#define MAIN_H

/*This is the header file having structures and function declaration*/

/*This Structure represents vector and member stores vector magniture*/
typedef struct
{
	float i,j,k;
}vect;

/*This structure represents quaternion itself, having s as scalar and v as vector*/
typedef struct
{
	float s;
	vect v;
}quaternion;

/*Function used to store quaternion scalar and vector value to its members*/
quaternion quant( float, float, float, float );

/*Function compliments/conjugates quaternion*/
quaternion quant_com( quaternion );

/*Function used to multiply 2 quaternions*/
quaternion multi_quant( quaternion, quaternion );

/*Function dot products 2 quaternion*/
float dot_quant( quaternion, quaternion );

#endif
