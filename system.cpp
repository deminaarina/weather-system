#include <iostream>
#include <string>

int main() {
  std::string weather[5] = {"sunny", "cloudy", "rainy", "windy", "stormy"};

  std::cout << "Today's weather is: " << weather[rand() % 5] << std::endl;

  return 0;
}
