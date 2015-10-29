OUTPUT=comsum
INSTALLDIR=/usr/local/bin
CFLAGS=-std=c99

all:
	${CC} ${CFLAGS} comsum.c -o ${OUTPUT}
install:
	cp ${OUTPUT} ${INSTALLDIR}
uninstall:
	rm ${INSTALLDIR}/${OUTPUT}
clean:
	rm ${OUTPUT}
