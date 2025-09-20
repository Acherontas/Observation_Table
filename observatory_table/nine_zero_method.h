#ifndef NINE_ZERO_METHOD_H
#define NINE_ZERO_METHOD_H
#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

class nine_zero_method
{
    public:
        nine_zero_method();
        virtual ~nine_zero_method();
        nine_zero_method(const nine_zero_method& other);
        nine_zero_method& operator=(const nine_zero_method& other);
        int ni_ze(long long int nmb);

    protected:

    private:
};

#endif // NINE_ZERO_METHOD_H
