#include "./../models/player.hpp"

/* ------------------------------ *
 *            Methods
 * ------------------------------ */

// only Player
Player::Player() :
  Person(),
  Collection() {
  this->username = "";
}

Player::Player(unsigned int id) :
  Person(id),
  Collection() {
  this->username = "";
}

// with Person
Player::Player(unsigned int id, bool status) :
  Person(id, status),
  Collection() {}

// with Person and Collection
Player::Player(
  unsigned int id,
  bool status,
  std::string collectionName,
  std::vector<std::pair<std::string, std::string>> & props,
  std::string username
) :
  Person(id, status),
  Collection(collectionName, props) {
  this->username = username;
}

// destructor
Player::~Player() {}

// getters and setters

// username
std::string Player::getUsername() {
  return this->username;
}

void Player::setUsername(std::string username) {
  this->username = username;
}

// moves
std::vector<std::string> Player::getMoves() {
  return this->moves;
}

void Player::setMove(std::string move) {
  move = StringUtils::toLowerCase(move);

  this->moves.push_back(move);
}

// wins
std::vector<unsigned int> Player::getWins() {
  return this->wins;
}
void Player::setWin(unsigned int win) {
  this->wins.push_back(win);
}

// tied
std::vector<unsigned int> Player::getTied() {
  return this->tied;
}
void Player::setTied(unsigned int tied) {
  this->tied.push_back(tied);
}

// losses
std::vector<unsigned int> Player::getLosses() {
  return this->losses;
}
void Player::setLoss(unsigned int loss) {
  this->losses.push_back(loss);
}

// Methods

