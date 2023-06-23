#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two numbers
 * @a: the first nimber
 * @b: the second number
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the second number
 * Return: the result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: the first number
 * @b: the second number
 * Return: thr result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder of two nimbers
 * @a: first number
 * @b: second number
 * Return: the remander
 */
int op_mod(int a, int b)
{
	return (a % b);
}
