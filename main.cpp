//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  public:
    double x, y, z, a;
    Quaternion (double x, y, z, a)
    {
      x = p;
      y = q;
      z = r;
      a = s;
    }
    bool operator == (const Quaternion p)
    {
      if ((p->x==this->x) && p->y==this->y) && p->z==this->z) && p->a==this->a))
        return true;
      else
        return false;
    }
    Quaternion operator+(const Quaternion p)
    {
      Quaternion r;
      r.x = p.x + this-> x;
      r.y = p.y + this-> y;
      r.z = p.z + this-> z;
      r.a = p.a + this-> a;
      return r;
    }
    Quaternion operator - (const Quaternion p)
    {
      Quaternion r;
      r.x = p.x - this-> x;
      r.y = p.y - this-> y;
      r.z = p.c - this-> z;
      r.a = p.a - this-> a;
      return r;
    }
    Quaternion operator * (double s)
    {
      Quaternion p;
      p.x = s* this-> x;
      p.y = s* this-> y;
      p.z = s* this-> z;
      p.a = s* this-> a;
      return p;
    }
    
};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
