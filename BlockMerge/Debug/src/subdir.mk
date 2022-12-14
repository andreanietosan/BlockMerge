################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BlockMergeBase.cpp \
../src/TadCasilla.cpp \
../src/TadJuego.cpp \
../src/TadTablero.cpp \
../src/entorno.cpp \
../src/pruebaCasilla.cpp \
../src/pruebaTablero.cpp 

OBJS += \
./src/BlockMergeBase.o \
./src/TadCasilla.o \
./src/TadJuego.o \
./src/TadTablero.o \
./src/entorno.o \
./src/pruebaCasilla.o \
./src/pruebaTablero.o 

CPP_DEPS += \
./src/BlockMergeBase.d \
./src/TadCasilla.d \
./src/TadJuego.d \
./src/TadTablero.d \
./src/entorno.d \
./src/pruebaCasilla.d \
./src/pruebaTablero.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


