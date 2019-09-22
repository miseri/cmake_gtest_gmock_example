#pragma once

class Foo 
{
public:
  virtual ~Foo() = default;
  virtual void method0() = 0;
  virtual void method1(int var) = 0;
  virtual void method2(int var1, int var2) = 0;
  virtual int get() const = 0;
};

