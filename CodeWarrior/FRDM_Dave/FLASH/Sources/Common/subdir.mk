################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"$(COMMON)/LED.c" \
"$(COMMON)/application.c" \
"$(COMMON)/platform.c" \

C_SRCS += \
$(COMMON_ESCAPED)/LED.c \
$(COMMON_ESCAPED)/application.c \
$(COMMON_ESCAPED)/platform.c \

OBJS += \
./Sources/Common/LED.o \
./Sources/Common/application.o \
./Sources/Common/platform.o \

C_DEPS += \
./Sources/Common/LED.d \
./Sources/Common/application.d \
./Sources/Common/platform.d \

OBJS_QUOTED += \
"./Sources/Common/LED.o" \
"./Sources/Common/application.o" \
"./Sources/Common/platform.o" \

C_DEPS_QUOTED += \
"./Sources/Common/LED.d" \
"./Sources/Common/application.d" \
"./Sources/Common/platform.d" \

OBJS_OS_FORMAT += \
./Sources/Common/LED.o \
./Sources/Common/application.o \
./Sources/Common/platform.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Common/LED.o: $(COMMON_ESCAPED)/LED.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/LED.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/LED.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/application.o: $(COMMON_ESCAPED)/application.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/application.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/application.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Common/platform.o: $(COMMON_ESCAPED)/platform.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Common/platform.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Common/platform.o"
	@echo 'Finished building: $<'
	@echo ' '


