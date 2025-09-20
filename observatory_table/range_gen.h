#ifndef RANGE_GEN_H
#define RANGE_GEN_H
#include <iostream>
using namespace std;


class range_gen
{
    public:
        range_gen();
        virtual ~range_gen();
        range_gen(const range_gen& other);
        range_gen& operator=(const range_gen& other);
        long long int range_one[2];
        long long int range_two[2];
        long long int range_three[4];
        long long int range_four[4];
        long long int range_five[9];
        int gen_them(long long int xx,int start_custom,int end_custom);
        int show_one();
        int show_two();
        int show_three();
        int show_four();
        int show_five();


    protected:

    private:
};

#endif // RANGE_GEN_H
