PREFIX ?= /usr/local
BINDIR ?= $(PREFIX)/bin

all: comsum

install: comsum
	install -m 755 comsum $(DESTDIR)$(BINDIR)/

clean:
	-if [ -f comsum ]; then rm comsum; fi

comsum: comsum.c
	$(CC) $(CFLAGS) comsum.c -o comsum
