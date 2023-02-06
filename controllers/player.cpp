#include "./../models/player.hpp"

/* ------------------------------ *
 *            Methods
 * ------------------------------ */

// Only Player
Player::Player() :
  Person(),
  Collection()
{
  this->username = "";
}

Player::Player(unsigned int id) :
  Person(id),
  Collection()
{
  this->username = "";
}

// With Person
Player::Player(unsigned int id, bool status) :
  Person(id, status),
  Collection() {}

// With Person and Collection
Player::Player(
  unsigned int id,
  bool status,
  std::string collectionName,
  std::vector<std::pair<std::string, std::string>> & props,
  std::string username
) :
  Person(id, status),
  Collection(collectionName, props)
{
  this->username = username;
}

// Destructor
Player::~Player() {}

// Getters and setters
std::string Player::getUsername()
{
  return this->username;
}

void Player::setUsername(std::string username)
{
  this->username = username;
}

// Methods

