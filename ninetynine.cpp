
#include "ninetynine.h"

string ninetynine::num_to_words(int num)
{
  std::string return_str = "" ;
  const char* num_10[] =
  {
    "zero", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"
  };
  const char* num_1[] =
  {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
    "eighteen", "nineteen"
  };
  cout << endl ;
  if (num > 19)
  {
    int rest = num % 10;
    int quotient = (num -  rest )/10 ;
    return_str = num_10[quotient];
    return_str += ' ' ;
    if (rest != 0 )
    return_str += num_1[rest] ;
    return_str += ' ' ;
    return_str += "bottles" ;
  }
    else
  {
    return_str += num_1[num] ;
    return_str += ' ' ;
    if (num == 1)
    return_str += "bottle" ;
    else
    return_str += "bottles" ;
  }
  return return_str ;
}

void ninetynine::print_a_poem()
{
  ofstream cout("ninetynine.txt");
  const char* line[] =
  {
    " of beer on the wall,",
    " of beer,",
    "Take one down, pass it around,",
    " of beer on the wall"
  };
  const char * punctuation[] = { ",", "." };
  for (int i = 99; i > 0 ; i-- )
  {
    string word = ninetynine::num_to_words(i);
    string punct = i>1?punctuation[0]:punctuation[1];
    cout << word << line[0] << endl << word << line[1] << endl << line[2]  << endl << ninetynine::num_to_words(i-1) << line[3] << punct << endl  << endl ;
  }
}
