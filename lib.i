%module(directors="1") cpp

%{
  #include "lib.hh"

  using std::shared_ptr;
%}

%include <std_string.i>
%include <std_shared_ptr.i>

%shared_ptr(mylib::Foo)

%include "lib.hh"
