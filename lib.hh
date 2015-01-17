#include <memory>
#include <string>


namespace mylib {

class Foo {
public:
  std::string bar();

  typedef std::shared_ptr<Foo> Ptr;
};

class Frob {
public:
  Foo::Ptr get_foo();
};
}
