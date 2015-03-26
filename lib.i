%module(directors="1") cpp

%{
  #include "lib.hh"
%}

%include <std_string.i>
%include <std_shared_ptr.i>

%include "memory.hh"
%shared_ptr(mylib::Foo)

%include "lib.hh"
