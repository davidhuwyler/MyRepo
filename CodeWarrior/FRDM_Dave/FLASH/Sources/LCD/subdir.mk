################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/LCD/LCD.c" \
"../Sources/LCD/s401.c" \

C_SRCS += \
../Sources/LCD/LCD.c \
../Sources/LCD/s401.c \

OBJS += \
./Sources/LCD/LCD.o \
./Sources/LCD/s401.o \

C_DEPS += \
./Sources/LCD/LCD.d \
./Sources/LCD/s401.d \

OBJS_QUOTED += \
"./Sources/LCD/LCD.o" \
"./Sources/LCD/s401.o" \

C_DEPS_QUOTED += \
"./Sources/LCD/LCD.d" \
"./Sources/LCD/s401.d" \

OBJS_OS_FORMAT += \
./Sources/LCD/LCD.o \
./Sources/LCD/s401.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/LCD/LCD.o: ../Sources/LCD/LCD.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/LCD/LCD.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/LCD/LCD.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/LCD/s401.o: ../Sources/LCD/s401.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/LCD/s401.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/LCD/s401.o"
	@echo 'Finished building: $<'
	@echo ' '


