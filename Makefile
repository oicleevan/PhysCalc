CC := g++
CCFLAGS := -std=c++11

SRCDIR := src
BUILDDIR := build
BINDIR := bin

TARGET := ${BINDIR}/physcalc

make: compile link

install: make
	cp ${TARGET} /usr/bin
	@echo Insatlled.

compile:
	@mkdir -p ${BUILDDIR}
	${CC} -c ${SRCDIR}/main.cpp -o ${BUILDDIR}/main.o ${CCFLAGS}
	${CC} -c ${SRCDIR}/calculators.cpp -o ${BUILDDIR}/calculators.o ${CCFLAGS}
	${CC} -c ${SRCDIR}/speed_calc.cpp -o ${BUILDDIR}/speed_calc.o ${CCFLAGS}
	${CC} -c ${SRCDIR}/energy_calc.cpp -o ${BUILDDIR}/energy_calc.o ${CCFLAGS}

link:
	@mkdir -p ${BINDIR}
	${CC} ${BUILDDIR}/main.o ${BUILDDIR}/calculators.o ${BUILDDIR}/speed_calc.o ${BUILDDIR}/energy_calc.o -o ${TARGET}

clean:
	rm -rf ${BUILDDIR} ${BINDIR}