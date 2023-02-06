#include <iostream>
#include <string>
#include "./../controllers/person.cpp"
#include "./../controllers/player.cpp"
#include "./../controllers/collection.cpp"
#include "./../utilities/stringUtils.cpp"

namespace Base {
  /* ------------------------------ *
   *        Player Collection       *
   * ------------------------------ */
  const std::string PLAYER_COLLECTION_NAME = "players";

  std::pair<std::string, std::string> propId(
    "id",
    "int"
  );

  std::pair<std::string, std::string> propUsername(
    "username",
    "string"
  );

  /* std::pair<std::string, std::string> propPoints(
    "points",
    "vector<int>"
  ); */

  std::pair<std::string, std::string> propWins(
    "wins",
    "vector<int>"
  );

  std::pair<std::string, std::string> propTied(
    "tied",
    "vector<int>"
  );

  std::pair<std::string, std::string> propLosses(
    "losses",
    "vector<int>"
  );

  // Define Player model
  std::vector<std::pair<std::string, std::string>> props{
    propId,
    propUsername,
    propWins,
    propTied,
    propLosses
  };

  /* ------------------------------ *
   *        Game Collection         *
   * ------------------------------ */

  // Collections
  Collection playerCol(PLAYER_COLLECTION_NAME, props);
}
