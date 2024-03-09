#include <iostream>

#include "my_lib.h"
#include "config.hpp"


int main(void)
{
  std::cout << "Project name: " << project_name << std::endl;
  std::cout << "Project version: " << project_version << std::endl;

  print_hello_world();

  return 0;
}