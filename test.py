#!/usr/bin/env python

import cpp

def add_foo(frob):
    foo = cpp.Foo("foo added to a Frob")

    frob.set_foo(foo)

def scope_test():
    foo = cpp.Foo("foo destroyed at the end of scope")
    pass

print "Creating a Frob...",
frob = cpp.Frob()
print "done"

print "Adding a Foo to it...",
add_foo(frob)
print "done"

print "Calling a method of Foo..."
print frob.get_foo().bar()
print frob.get_const_foo()
print frob.get_const_foo().bar()

print "Testing destruction at the end of scope..."
scope_test()
print "Here, you see?"

print "Now Frob is destroyed, and so is the Foo stored in it..."
