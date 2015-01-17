#!/bin/bash

set -x

python -c 'import cpp; print cpp.Frob().get_foo()'

python -c 'import cpp; print cpp.Frob().get_foo().bar()'

