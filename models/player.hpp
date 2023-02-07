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

  std::vector<std::string> getMoves();
  void setMove(std::string);

  std::vector<unsigned int> getWins();
  void setWin(unsigned int);

  std::vector<unsigned int> getTied();
  void setTied(unsigned int);

  std::vector<unsigned int> getLosses();
  void setLoss(unsigned int);

private:
  std::string username;
  std::vector<std::string> moves;
  std::vector<unsigned int> wins;
  std::vector<unsigned int> tied;
  std::vector<unsigned int> losses;
};

#endif /* player_hpp */
