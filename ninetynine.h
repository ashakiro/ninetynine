
#ifndef c_ninetynine
#define c_ninetynine

#include "../util/util.h"

class ninetynine
{
public:
    static const int MAX_COUNT = 99 ;
    static void print_a_poem();

private:
    static string num_to_words(int num);
};

#endif
