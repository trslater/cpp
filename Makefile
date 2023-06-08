CC=g++
CFLAGS=-Wall -pedantic
LDFLAGS=

bin/%: %.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -fr bin
