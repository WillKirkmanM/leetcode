#include <iostream>
#include <unordered_map>

int romanToInt(std::string s) {
  std::unordered_map<std::string, int> values;
  values["I"] = 1;
  values["V"] = 5;
  values["X"] = 10;
  values["L"] = 50;
  values["C"] = 100;
  values["D"] = 500;
  values["M"] = 1000;
  values["XL"] = 40;
  values["XC"] = 90;
  values["CD"] = 400;
  values["CM"] = 900;
  values["IV"] = 4;
  values["IX"] = 9;

  int result = 0;
  for (int i = 0; i < s.length(); i += 1) {
    if (values.find(s.substr(i, 2)) == values.end()) {
      // Not found in hashmap
      std::cout << "ON CHAR " << s[i] << std::endl;
      result += values[std::string(1, s[i])];
    } else {
      // Found in Hashmap
      std::cout << "ON CHARS " << s.substr(i, 2) << std::endl;
      result += values[s.substr(i, 2)];
      i++;
    }
  }
  return result;
}

int main() {
  std::cout << romanToInt("III") << std::endl;
  std::cout << romanToInt("MIV") << std::endl;
  std::cout << romanToInt("MCMXL") << std::endl;
  std::cout << romanToInt("DCCLX") << std::endl;
  std::cout << romanToInt("CDLXII") << std::endl;
  return 0;
}
