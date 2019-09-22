#pragma once
#include "foo.h"

class Bar 
{
  Foo* _foo;
public:
  Bar( Foo* foo )
          : _foo(foo){}

  bool method3(int, int, int)
  {
     _foo->method0();
     return true;
  }
};

