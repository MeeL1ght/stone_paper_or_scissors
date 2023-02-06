#ifndef collection_hpp
#define collection_hpp

#include <iostream>
#include <string>
#include <vector>
#include "person.hpp"
#include "collection.hpp"

// Utilities
// #include "./../utilities/stringUtils.cpp"

class Collection
{
public:
  Collection();
  Collection(
    std::string,
    std::vector<std::pair<std::string, std::string>> &
  );
  ~Collection();

  // Set and Getters
  std::string getName();
  void setName(std::string);

  std::vector<std::pair<std::string, std::string>> getProps();
  void setProps(
    std::vector<std::pair<std::string, std::string>> &
  );

  // Methods
  void getColInfo();

protected:
  std::string name;
  std::vector<std::pair<std::string, std::string>> props;
};

#endif /* collection_hpp */
