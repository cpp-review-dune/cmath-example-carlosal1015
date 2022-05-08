#pragma once // prevents multiple definitions

#include <cmath>

// Test for exercise 1
double result_1a = std::pow(5 - 19. / 7 + std::pow(2.5, 3), 2);
double result_1b = 7 * 3.1 + std::sqrt(120) / 5 - std::pow(15, 5. / 3);
double result_1c = std::pow(1 / std::sqrt(75) + 73 / std::pow(3.1, 3), 1. / 4) + 55 * 0.41;

// Test for exercise 2
double const PI = std::acos(-1);
double result_2a = std::sin(0.2 * PI) / std::cos(PI / 6) + std::tan(72 * PI / 180);
double result_2b = std::pow(std::tan(64 * PI / 180) * std::cos(15 * PI / 180), 2) + std::pow(std::sin(37 * PI / 180) / std::cos(20 * PI / 180), 2);

// Test for exercise 3
float x = 6.5, y = 3.8;

auto expr1 = [](float x, float y)
{
  return std::pow(std::pow(x, 2) + std::pow(y, 2), 2. / 3) + x * y / (y - x);
};

auto expr2 = [](float x, float y)
{
  return std::sqrt(x + y) / std::pow(x - y, 2) + 2 * std::pow(x, 2) - x * std::pow(y, 2);
};