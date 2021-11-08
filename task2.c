#include <math.h>

double f(double x)
{
	return x > 3.6 ? 45 * pow(x, 2) + 5 : (5 * x) / (10 * pow(x, 2) + 1);
}
