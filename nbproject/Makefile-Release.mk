#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Arreglo\ de\ 100\ elementos.o \
	${OBJECTDIR}/Arreglos\ simples.o \
	${OBJECTDIR}/Ejemplo\ de\ funcion\ while.o \
	${OBJECTDIR}/Estructura\ del\ For.o \
	${OBJECTDIR}/La\ serie\ Fibonacci.o \
	${OBJECTDIR}/Mayor\ de\ 3\ numeros.o \
	${OBJECTDIR}/Mayor\ de\ 4\ numeros.o \
	${OBJECTDIR}/Operaciones.o \
	${OBJECTDIR}/Tabla\ de\ multiplicar\ con\ For.o \
	${OBJECTDIR}/Tablas\ de\ multiplicar.o \
	${OBJECTDIR}/Tarea\ scanf.o \
	${OBJECTDIR}/ejemplo\ de\ If\ Else.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion ${OBJECTFILES} ${LDLIBSOPTIONS}

.NO_PARALLEL:${OBJECTDIR}/Arreglo\ de\ 100\ elementos.o
${OBJECTDIR}/Arreglo\ de\ 100\ elementos.o: Arreglo\ de\ 100\ elementos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglo\ de\ 100\ elementos.o Arreglo\ de\ 100\ elementos.c

.NO_PARALLEL:${OBJECTDIR}/Arreglos\ simples.o
${OBJECTDIR}/Arreglos\ simples.o: Arreglos\ simples.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglos\ simples.o Arreglos\ simples.c

.NO_PARALLEL:${OBJECTDIR}/Ejemplo\ de\ funcion\ while.o
${OBJECTDIR}/Ejemplo\ de\ funcion\ while.o: Ejemplo\ de\ funcion\ while.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ejemplo\ de\ funcion\ while.o Ejemplo\ de\ funcion\ while.c

.NO_PARALLEL:${OBJECTDIR}/Estructura\ del\ For.o
${OBJECTDIR}/Estructura\ del\ For.o: Estructura\ del\ For.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructura\ del\ For.o Estructura\ del\ For.c

.NO_PARALLEL:${OBJECTDIR}/La\ serie\ Fibonacci.o
${OBJECTDIR}/La\ serie\ Fibonacci.o: La\ serie\ Fibonacci.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/La\ serie\ Fibonacci.o La\ serie\ Fibonacci.c

.NO_PARALLEL:${OBJECTDIR}/Mayor\ de\ 3\ numeros.o
${OBJECTDIR}/Mayor\ de\ 3\ numeros.o: Mayor\ de\ 3\ numeros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor\ de\ 3\ numeros.o Mayor\ de\ 3\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/Mayor\ de\ 4\ numeros.o
${OBJECTDIR}/Mayor\ de\ 4\ numeros.o: Mayor\ de\ 4\ numeros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mayor\ de\ 4\ numeros.o Mayor\ de\ 4\ numeros.c

${OBJECTDIR}/Operaciones.o: Operaciones.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Operaciones.o Operaciones.c

.NO_PARALLEL:${OBJECTDIR}/Tabla\ de\ multiplicar\ con\ For.o
${OBJECTDIR}/Tabla\ de\ multiplicar\ con\ For.o: Tabla\ de\ multiplicar\ con\ For.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tabla\ de\ multiplicar\ con\ For.o Tabla\ de\ multiplicar\ con\ For.c

.NO_PARALLEL:${OBJECTDIR}/Tablas\ de\ multiplicar.o
${OBJECTDIR}/Tablas\ de\ multiplicar.o: Tablas\ de\ multiplicar.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tablas\ de\ multiplicar.o Tablas\ de\ multiplicar.c

.NO_PARALLEL:${OBJECTDIR}/Tarea\ scanf.o
${OBJECTDIR}/Tarea\ scanf.o: Tarea\ scanf.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tarea\ scanf.o Tarea\ scanf.c

.NO_PARALLEL:${OBJECTDIR}/ejemplo\ de\ If\ Else.o
${OBJECTDIR}/ejemplo\ de\ If\ Else.o: ejemplo\ de\ If\ Else.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ejemplo\ de\ If\ Else.o ejemplo\ de\ If\ Else.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programacion.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
