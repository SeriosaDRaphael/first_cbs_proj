#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include "color.h"
#include "prompt.hpp"

int main()
{
   std::cout << DIM << "hello, world!\n" << RESET;
   
   prompt fname("What\'s your name", "player");
   fname.ask();

   std::string a = fname.get_answer();

   a.erase(std::remove_if(a.begin(), a.end(), ::isspace), a.end());

   if(a == "") {
      a = "player";
   }

   std::cout << a << std::endl;
   return 0;
}
