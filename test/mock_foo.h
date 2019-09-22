#pragma once
#include "gmock/gmock.h"  
#include "foo.h"

class MockFoo : public Foo 
{
public:
  MOCK_METHOD0(method0, void());
  MOCK_METHOD1(method1, void(int));
  MOCK_METHOD2(method2, void(int, int));
  MOCK_CONST_METHOD0(get, int());
};

