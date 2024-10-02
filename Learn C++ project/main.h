#pragma guard
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iomanip>
#include <cstdint>
#include <cstddef>
#include <limits>
#include <string>
const std::string enterValue_generic{"Please enter a value: "};
int getIntUserInput(std::string);
void writeAnswer(int);
