#ifndef player_hpp
#define player_hpp

#include <iostream>
#include <string>
#include <vector>
#include "person.hpp"
#include "collection.hpp"

class Player : public Person, public Collection
{
public:
  Player();
  Player(unsigned int);
  Player(unsigned int, bool);
  Player(
    unsigned int,
    bool,
    std::string,
    std::vector<std::pair<std::string, std::string>> &,
    std::string
  );
  ~Player();

  std::string getUsername();
  void setUsername(std::string);

private:
  std::string username;
};

#endif /* player_hpp */
