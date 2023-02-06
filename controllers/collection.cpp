#include "./../models/collection.hpp"
#include "./../utilities/stringUtils.cpp"

/* ------------------------------ *
 *            Methods
 * ------------------------------ */

Collection::Collection()
{
  std::vector<std::pair<std::string, std::string>> emptyVector;

  this->name  = "";
  this->props = emptyVector;
}

Collection::Collection(
  std::string name,
  std::vector<std::pair<std::string, std::string>> & props
)
{
  this->name  = StringUtils::toLowerCase(name);
  this->props = props;
}

Collection::~Collection() {}

std::string Collection::getName()
{
  return this->name;
}

void Collection::setName(std::string name)
{
  this->name = StringUtils::toLowerCase(name);
}

std::vector<std::pair<std::string, std::string>> Collection::getProps()
{
  return this->props;
}

void Collection::setProps(
  std::vector<std::pair<std::string, std::string>> & props
)
{
  this->props = props;
}

void Collection::getColInfo()
{
  const unsigned int TOTAL_PROPS = this->props.size();

  std::cout << "Collection: {\n";
  std::cout << "  \"name\": \""     << this->name  << "\",\n";
  std::cout << "  \"totalProps\": " << TOTAL_PROPS << ",\n";

  if (TOTAL_PROPS == 1)
  {
    const std::string key   = this->props[0].first;
    const std::string value = this->props[0].second;

    std::cout << "  \"props\": {\n";
    std::cout << "    \"key\": \"" << key;
    std::cout << "\",\n    \"type\": \"";
    std::cout << value << "\"\n  }\n}\n";
  }
  else if (TOTAL_PROPS > 1)
  {
    std::cout << "  \"props\": [";

    unsigned short index = 0;

    for (std::pair<std::string, std::string> prop : this->props)
    {
      const bool IS_LAST = index == TOTAL_PROPS - 1;
      const std::string COMMA = IS_LAST ? "" : ",";

      std::cout << "    \n    {\n      \"key\": \"";
      std::cout << prop.first     << "\",\n      ";
      std::cout << "\"type\": \"" << prop.second;
      std::cout << "\"\n    }"    << COMMA;

      index++;
    }

    std::cout << "\n  ]\n}\n";
  }
  else
  {
    std::cout << "  \"props\": null\n}\n";
  }
}
