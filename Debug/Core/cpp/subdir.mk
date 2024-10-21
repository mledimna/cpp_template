################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/cpp/GPIO.cpp \
../Core/cpp/Peripheral.cpp \
../Core/cpp/main.cpp 

OBJS += \
./Core/cpp/GPIO.o \
./Core/cpp/Peripheral.o \
./Core/cpp/main.o 

CPP_DEPS += \
./Core/cpp/GPIO.d \
./Core/cpp/Peripheral.d \
./Core/cpp/main.d 


# Each subdirectory must supply rules for building sources it contributes
Core/cpp/%.o Core/cpp/%.su Core/cpp/%.cyclo: ../Core/cpp/%.cpp Core/cpp/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -D__cplusplus -DSTM32L152xE -c -I../Core/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc -I../Drivers/STM32L1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L1xx/Include -I../Drivers/CMSIS/Include -I"C:/git/cpp_template/Core/cpp" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-cpp

clean-Core-2f-cpp:
	-$(RM) ./Core/cpp/GPIO.cyclo ./Core/cpp/GPIO.d ./Core/cpp/GPIO.o ./Core/cpp/GPIO.su ./Core/cpp/Peripheral.cyclo ./Core/cpp/Peripheral.d ./Core/cpp/Peripheral.o ./Core/cpp/Peripheral.su ./Core/cpp/main.cyclo ./Core/cpp/main.d ./Core/cpp/main.o ./Core/cpp/main.su

.PHONY: clean-Core-2f-cpp

