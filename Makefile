CC=g++
CFLAGS=-Wall -pedantic -std=c++20
LDFLAGS=-lfmt

bin/%: %.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -fr bin
