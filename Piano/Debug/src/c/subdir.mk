################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/c/ebentoak.c \
../src/c/grabar.c \
../src/c/hasierakomenua.c \
../src/c/main.c \
../src/c/partekatu.c \
../src/c/reproducir.c \
../src/c/sdlHasieratu.c \
../src/c/teclas.c \
../src/c/tocar.c 

OBJS += \
./src/c/ebentoak.o \
./src/c/grabar.o \
./src/c/hasierakomenua.o \
./src/c/main.o \
./src/c/partekatu.o \
./src/c/reproducir.o \
./src/c/sdlHasieratu.o \
./src/c/teclas.o \
./src/c/tocar.o 

C_DEPS += \
./src/c/ebentoak.d \
./src/c/grabar.d \
./src/c/hasierakomenua.d \
./src/c/main.d \
./src/c/partekatu.d \
./src/c/reproducir.d \
./src/c/sdlHasieratu.d \
./src/c/teclas.d \
./src/c/tocar.d 


# Each subdirectory must supply rules for building sources it contributes
src/c/%.o: ../src/c/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


