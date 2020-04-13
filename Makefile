EMXX=em++
EMCC=emcc
EMRUN=emrun
EMFLAGS=-Oz # -fno-rtti -DEMSCRIPTEN_HAS_UNBOUND_TYPE_NAMES=0

all: poly.js

poly.js: poly.cc poly.h poly_bindings.cc
	$(EMXX) $(EMFLAGS) --bind -s ENVIRONMENT=web -s WASM=1 $(CFLAGS) -o poly.js poly.cc poly_bindings.cc

run: poly.js
	$(EMRUN) poly.html

clean:
	rm -f poly.js poly.wasm poly.wasm.map
