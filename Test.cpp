/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Eden Roas>
 *
 * Date: 2023-04
 */

#include "doctest.h"
#include "Fraction.hpp"
#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;
using namespace ariel;

 TEST_CASE("Invalid Inputs")
{
    Fraction ze1;
    Fraction ze2;
    Fraction ze3;
    SUBCASE("The denominator or numerator is 0")
    {
        CHECK_THROWS(ze1 = Fraction(8,0));  // The denominator is 0
        CHECK_THROWS(ze2 = Fraction(0,2));  // The numerator is 0
        CHECK_THROWS(ze3 = Fraction(1,0)); // The denominator is 0
    }
    
}

TEST_CASE("Correct input - correct answers")
{
     SUBCASE("Calculation between fractions and float")
    {      
        Fraction a(2,3),g(2,3);
        Fraction b(1,3),h(4,3);
        Fraction c(1,2),i(2,4);
        Fraction d(1,4);
        Fraction e(8,1),f(1,0);
        float num = 0.5;

        CHECK_NOTHROW(a + b);
        CHECK_NOTHROW(a - g);
        CHECK_NOTHROW(a * b);
        CHECK_NOTHROW(c / d);
        CHECK_NOTHROW(a + num);
        CHECK_NOTHROW(a - num);
        CHECK_NOTHROW(a * num);
        CHECK_NOTHROW(a / num);
        CHECK_NOTHROW(num + b);
        CHECK_NOTHROW(num - b);
        CHECK_NOTHROW(num * b);
        CHECK_NOTHROW(num / b);
        CHECK(a + b == f);
        CHECK(c - num == 0);
        CHECK(num - c == 0);
        CHECK(a == g);
        CHECK(++b == h);
        CHECK(a-- == g);
        CHECK(a++ == g);
        CHECK(a / g == 1);
        
    }
    SUBCASE("Boolean operators")
    {
        Fraction a(2,3),g(2,3);
        Fraction b(1,3),h(4,3);
        Fraction c(1,2),i(2,4);
        Fraction d(1,4);
        Fraction e(8,1),f(1,0);
        float num = 0.5;

        CHECK(num == c);
        CHECK(c == num);
        CHECK(c > d);
        CHECK(c >= d);
        CHECK(c >= num);
        CHECK(num >= c);
        CHECK(c <= num);
        CHECK(num <= c);
        CHECK(b < h);
        CHECK(b <= h);
        CHECK(i == c);





    }



}