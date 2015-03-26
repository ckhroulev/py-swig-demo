#!/bin/bash

set -x

python -c 'import cpp; foo = cpp.Foo("foo")'

python -c 'import cpp; frob = cpp.Frob(); foo = cpp.Foo("foo"); frob.set_foo(foo); print frob.get_foo().bar()'

