#include "memory.hh"
#include <string>


namespace mylib {

class Foo {
public:
  Foo(std::string name);
  ~Foo();

  std::string bar() const;

  typedef MYLIB_SHARED_PTR_NSPACE::shared_ptr<Foo> Ptr;
  typedef MYLIB_SHARED_PTR_NSPACE::shared_ptr<const Foo> ConstPtr;
private:
  std::string m_name;
};

class Frob {
public:
  Foo::Ptr get_foo();
  void set_foo(Foo::Ptr foo);
private:
  Foo::Ptr m_foo;
};
}
