#ifndef prompt_h_
#define prompt_h_

#include <string>

class prompt{
private:
  std::string default_;
  std::string question;
  std::string answer;
public: 

 prompt(std::string q, std::string d) : default_(d), question(q) {};
 ~prompt();

 void ask();

 std::string get_answer() { return answer; }
};

#endif