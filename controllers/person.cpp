#include "./../models/person.hpp"

/* ------------------------------ *
 *            Methods
 * ------------------------------ */

// constructor methods
Person::Person()
{
  this->id = 0;
}

Person::Person(unsigned int id) : id(id) {}

Person::Person(unsigned int id, bool status) :
  id(id), status(status) {}

// Destructor
Person::~Person() {}

// id
void Person::setId(unsigned int id)
{
  this->id = id;
}

unsigned int Person::getId()
{
  return this->id;
}

// status
void Person::setStatus(bool status)
{
  this->status = status;
}

bool Person::getStatus()
{
  return this->status;
}
