#include "lib.hh"

using namespace mylib;

std::string Foo::bar() {
  return std::string("hello from Foo::bar()");
}

Foo::Ptr Frob::get_foo() {
  return Foo::Ptr(new Foo());
}

