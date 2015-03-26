#include <iostream>

#include "lib.hh"

using namespace mylib;

Foo::Foo(std::string name) {
  m_name = name;
}

Foo::~Foo() {
  std::cout << "Foo '" << m_name << "' destructor is called!" << std::endl;
}

std::string Foo::bar() {
  return std::string("hello from '" + m_name + "' (Foo::bar())!");
}

Foo::Ptr Frob::get_foo() {
  return m_foo;
}

void Frob::set_foo(Foo::Ptr foo) {
  m_foo = foo;
}
