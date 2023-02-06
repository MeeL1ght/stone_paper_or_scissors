#ifndef person_hpp
#define person_hpp

#include <iostream>
#include <string>

class Person
{
private:
  unsigned int id;
  bool status;

public:
  Person();
  Person(unsigned int);
  Person(unsigned int, bool);
  ~Person();

  void setId(unsigned int);
  unsigned int getId();

  void setStatus(bool status);
  bool getStatus();
};

#endif /* person_hpp */
