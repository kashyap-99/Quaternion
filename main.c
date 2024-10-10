
/*
Name: Kashyap S
Description: Multiplication and dot product between 2 quaternion
Date:10/10/2024
*/

//Preprocessor header files
#include <stdio.h>
#include "main.h"

/*main function defined here*/
int main()
{
	/*providing input for quaternion factors as (0,1,1,1)*/
	quaternion q = quant(0,1,1,1);

	/*Finding conjugate for the quaternion*/
	quaternion q_bar = quant_com(q);

	/*Multiplying 2 quaternions and string result in variable a*/
	quaternion a = multi_quant(q,q_bar);

	/*Finding dot product between 2 quaternion*/
	float b = dot_quant(q,q_bar);

	//Printing the desired output from the problem
	printf("Quaternion multiplication result: ( %.2f, %.2f, %.2f, %.2f )\n", a.s, a.v.i, a.v.j, a.v.k);
	printf("Dot product result : %.2f\n",b);

	return 0;
}

/*This function assigns quaternion scalar and vector values into its respective structure members*/
quaternion quant(float s, float i, float j, float k)
{
	quaternion qu;
	qu.s = s;
	qu.v.i = i;
	qu.v.j = j;
	qu.v.k = k;

	return qu;
}

/*Complimenting or Conjugating quaternion q1 values and storing it as 2nd quaternion equation*/
quaternion quant_com(quaternion q)
{
	quaternion qu_c;
	qu_c.s = q.s;
	qu_c.v.i = -q.v.i;
	qu_c.v.j =  -q.v.j;
	qu_c.v.k = -q.v.k;

	return qu_c;
}

/*Using the formula, we are finding result for multiplying 2 quaternions*/
quaternion multi_quant( quaternion q1, quaternion q2 )
{
	quaternion res;

	res.s = (q1.s*q2.s) - (q1.v.i*q2.v.i) - (q1.v.j*q2.v.j) - (q1.v.k*q2.v.k)  ;
	res.v.i =  (q1.s*q2.v.i) + (q1.v.i*q2.s) + (q1.v.j*q2.v.k) - (q1.v.k*q2.v.j);
	res.v.j =  (q1.s*q2.v.j) + (q1.v.j*q2.s) + (q1.v.k*q2.v.i) - (q1.v.i*q2.v.k);
	res.v.k =  (q1.s*q2.v.k) + (q1.v.k*q2.s) + (q1.v.i*q2.v.j) - (q1.v.j*q2.v.i);

	return res;
}

/*We are returning result for dot product between 2 quaternion*/
float dot_quant( quaternion q1, quaternion q2 )
{
	return (q1.s * q2.s) + (q1.v.i * q2.v.i) + (q1.v.j * q2.v.j) + (q1.v.k * q2.v.k) ;
}

