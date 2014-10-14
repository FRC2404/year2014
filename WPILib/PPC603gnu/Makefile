# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
SRC_DIR := .
BUILD_ROOT_DIR := 
PRJ_ROOT_DIR := C:/Users/Maiden/CppProjects/frc/WPILib
WS_ROOT_DIR := C:/Users/Maiden/CppProjects/frc

ALL_BUILD_SPECS := PPC32diab PPC32gnu PPC32sfdiab PPC32sfgnu \
	 PPC403diab PPC403gnu PPC405diab PPC405gnu \
	 PPC405sfdiab PPC405sfgnu PPC440diab PPC440gnu \
	 PPC440sfdiab PPC440sfgnu PPC603diab PPC603gnu \
	 PPC604diab PPC604gnu PPC85XXdiab PPC85XXgnu \
	 PPC85XXsfdiab PPC85XXsfgnu PPC860sfdiab PPC860sfgnu \
	 SIMLINUXdiab SIMLINUXgnu SIMNTdiab SIMNTgnu \
	 SIMSPARCSOLARISdiab SIMSPARCSOLARISgnu
ENABLED_BUILD_SPECS := PPC603gnu

ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32diab_DEBUG
else
OBJ_DIR := PPC32diab
endif
endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32gnu_DEBUG
else
OBJ_DIR := PPC32gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32sfdiab_DEBUG
else
OBJ_DIR := PPC32sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC32sfgnu_DEBUG
else
OBJ_DIR := PPC32sfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC403diab_DEBUG
else
OBJ_DIR := PPC403diab
endif
endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC403gnu_DEBUG
else
OBJ_DIR := PPC403gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405diab_DEBUG
else
OBJ_DIR := PPC405diab
endif
endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405gnu_DEBUG
else
OBJ_DIR := PPC405gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405sfdiab_DEBUG
else
OBJ_DIR := PPC405sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC405sfgnu_DEBUG
else
OBJ_DIR := PPC405sfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440diab_DEBUG
else
OBJ_DIR := PPC440diab
endif
endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440gnu_DEBUG
else
OBJ_DIR := PPC440gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440sfdiab_DEBUG
else
OBJ_DIR := PPC440sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC440sfgnu_DEBUG
else
OBJ_DIR := PPC440sfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC603diab_DEBUG
else
OBJ_DIR := PPC603diab
endif
endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC603gnu_DEBUG
else
OBJ_DIR := PPC603gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC604diab_DEBUG
else
OBJ_DIR := PPC604diab
endif
endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC604gnu_DEBUG
else
OBJ_DIR := PPC604gnu
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXdiab_DEBUG
else
OBJ_DIR := PPC85XXdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXgnu_DEBUG
else
OBJ_DIR := PPC85XXgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXsfdiab_DEBUG
else
OBJ_DIR := PPC85XXsfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC85XXsfgnu_DEBUG
else
OBJ_DIR := PPC85XXsfgnu
endif
endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC860sfdiab_DEBUG
else
OBJ_DIR := PPC860sfdiab
endif
endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := PPC860sfgnu_DEBUG
else
OBJ_DIR := PPC860sfgnu
endif
endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMLINUXdiab_DEBUG
else
OBJ_DIR := SIMLINUXdiab
endif
endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMLINUXgnu_DEBUG
else
OBJ_DIR := SIMLINUXgnu
endif
endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMNTdiab_DEBUG
else
OBJ_DIR := SIMNTdiab
endif
endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMNTgnu_DEBUG
else
OBJ_DIR := SIMNTgnu
endif
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMSPARCSOLARISdiab_DEBUG
else
OBJ_DIR := SIMSPARCSOLARISdiab
endif
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := SIMSPARCSOLARISgnu_DEBUG
else
OBJ_DIR := SIMSPARCSOLARISgnu
endif
endif

DEP_FILES := $(OBJ_DIR)/DriverStationLCD.d $(OBJ_DIR)/Gyro.d $(OBJ_DIR)/Timer.d \
	 $(OBJ_DIR)/AnalogPotentiometer.d $(OBJ_DIR)/DigitalInput.d $(OBJ_DIR)/Utility.d \
	 $(OBJ_DIR)/MotorSafetyHelper.d $(OBJ_DIR)/DriverStationEnhancedIO.d $(OBJ_DIR)/Jaguar.d \
	 $(OBJ_DIR)/Relay.d $(OBJ_DIR)/DoubleSolenoid.d $(OBJ_DIR)/KinectStick.d \
	 $(OBJ_DIR)/Compressor.d $(OBJ_DIR)/SolenoidBase.d $(OBJ_DIR)/CANJaguar.d \
	 $(OBJ_DIR)/Task.d $(OBJ_DIR)/AnalogChannel.d $(OBJ_DIR)/HiTechnicCompass.d \
	 $(OBJ_DIR)/AnalogModule.d $(OBJ_DIR)/SerialPort.d $(OBJ_DIR)/Error.d \
	 $(OBJ_DIR)/ErrorBase.d $(OBJ_DIR)/Ultrasonic.d $(OBJ_DIR)/Talon.d \
	 $(OBJ_DIR)/AnalogTriggerOutput.d $(OBJ_DIR)/AnalogTrigger.d $(OBJ_DIR)/Kinect.d \
	 $(OBJ_DIR)/Watchdog.d $(OBJ_DIR)/Solenoid.d $(OBJ_DIR)/PIDController.d \
	 $(OBJ_DIR)/Dashboard.d $(OBJ_DIR)/HiTechnicColorSensor.d $(OBJ_DIR)/Counter.d \
	 $(OBJ_DIR)/SimpleRobot.d $(OBJ_DIR)/DigitalOutput.d $(OBJ_DIR)/Accelerometer.d \
	 $(OBJ_DIR)/PWM.d $(OBJ_DIR)/Encoder.d $(OBJ_DIR)/DriverStation.d \
	 $(OBJ_DIR)/Module.d $(OBJ_DIR)/ADXL345_SPI.d $(OBJ_DIR)/RobotDrive.d \
	 $(OBJ_DIR)/I2C.d $(OBJ_DIR)/IterativeRobot.d $(OBJ_DIR)/SPI.d \
	 $(OBJ_DIR)/DigitalModule.d $(OBJ_DIR)/Notifier.d $(OBJ_DIR)/InterruptableSensorBase.d \
	 $(OBJ_DIR)/Preferences.d $(OBJ_DIR)/Resource.d $(OBJ_DIR)/Synchronized.d \
	 $(OBJ_DIR)/Victor.d $(OBJ_DIR)/Joystick.d $(OBJ_DIR)/ADXL345_I2C.d \
	 $(OBJ_DIR)/RobotBase.d $(OBJ_DIR)/GearTooth.d $(OBJ_DIR)/SafePWM.d \
	 $(OBJ_DIR)/DigitalSource.d $(OBJ_DIR)/Servo.d $(OBJ_DIR)/SensorBase.d
-include $(DEP_FILES)

ifeq ($(BUILD_SPEC),PPC32diab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC32gnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC403diab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC403gnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405diab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405gnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440diab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440gnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC603diab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC603gnu)
SUBDIRS := "C:/Users/Maiden/CppProjects/frc/WPILib/.settings" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/Buttons" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/CAN" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/ChipObject" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/Commands" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/HAL" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/Interfaces" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/LiveWindow" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/NetworkCommunication" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/OSAL" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/Scripts" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/SmartDashboard" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/Vision" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/Vision2009" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/networktables" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/networktables2" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/tables" \
	 "C:/Users/Maiden/CppProjects/frc/WPILib/visa"
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS := C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/ButtonScheduler.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/HeldButtonScheduler.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/AnalogIOButton.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/PressedButtonScheduler.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/InternalButton.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/ToggleButtonScheduler.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/DigitalIOButton.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/ReleasedButtonScheduler.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/CancelButtonScheduler.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/JoystickButton.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/Button.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/Trigger.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Buttons/$(OBJ_DIR)/NetworkButton.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/PIDCommand.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/PIDSubsystem.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/Scheduler.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/WaitForChildren.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/PrintCommand.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/WaitUntilCommand.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/Subsystem.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/StartCommand.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/Command.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/CommandGroupEntry.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/WaitCommand.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Commands/$(OBJ_DIR)/CommandGroup.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindowStatusListener.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/LiveWindow/$(OBJ_DIR)/LiveWindow.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/OSAL/$(OBJ_DIR)/Task.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/OSAL/$(OBJ_DIR)/Synchronized.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/SmartDashboard/$(OBJ_DIR)/SmartDashboard.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/SmartDashboard/$(OBJ_DIR)/SendableChooser.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/EnumCameraParameter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/RGBImage.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/PCVideoServer.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/BinaryImage.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/AxisCameraParams.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/ImageBase.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/HSLImage.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/Threshold.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/ColorImage.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/MonoImage.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/IntCameraParameter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision/$(OBJ_DIR)/AxisCamera.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision2009/$(OBJ_DIR)/VisionAPI.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision2009/$(OBJ_DIR)/AxisCamera.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision2009/$(OBJ_DIR)/TrackAPI.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision2009/$(OBJ_DIR)/FrcError.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/Vision2009/$(OBJ_DIR)/BaeUtilities.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables/$(OBJ_DIR)/NetworkTableMode.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables/$(OBJ_DIR)/NetworkTable.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables/$(OBJ_DIR)/NetworkTableConnectionListenerAdapter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables/$(OBJ_DIR)/NetworkTableListenerAdapter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables/$(OBJ_DIR)/NetworkTableProvider.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables/$(OBJ_DIR)/NetworkTableKeyListenerAdapter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables/$(OBJ_DIR)/NetworkTableSubListenerAdapter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/$(OBJ_DIR)/OutgoingEntryReciever.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/$(OBJ_DIR)/TransactionDirtier.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/$(OBJ_DIR)/NetworkTableNode.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/$(OBJ_DIR)/NetworkTableEntry.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/$(OBJ_DIR)/WriteManager.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/$(OBJ_DIR)/AbstractNetworkTableEntryStore.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/$(OBJ_DIR)/TableKeyExistsWithDifferentTypeException.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionAdapter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/client/$(OBJ_DIR)/NetworkTableClient.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/client/$(OBJ_DIR)/ClientNetworkTableEntryStore.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/client/$(OBJ_DIR)/ClientConnectionState.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/connection/$(OBJ_DIR)/ConnectionMonitorThread.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/connection/$(OBJ_DIR)/NetworkTableConnection.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/connection/$(OBJ_DIR)/BadMessageException.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/connection/$(OBJ_DIR)/DataIOStream.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionAdapter.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionState.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/server/$(OBJ_DIR)/NetworkTableServer.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/server/$(OBJ_DIR)/ServerConnectionList.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/server/$(OBJ_DIR)/ServerNetworkTableEntryStore.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/server/$(OBJ_DIR)/ServerIncomingStreamMonitor.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreamFactory.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/stream/$(OBJ_DIR)/SocketServerStreamProvider.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/stream/$(OBJ_DIR)/SocketStreams.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/stream/$(OBJ_DIR)/FDIOStream.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/thread/$(OBJ_DIR)/DefaultThreadManger.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryTypeManager.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/ComplexEntryType.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/StringArray.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/ArrayData.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/DefaultEntryTypes.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/ArrayEntryType.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/ComplexData.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/NumberArray.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/BooleanArray.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/type/$(OBJ_DIR)/NetworkTableEntryType.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/util/$(OBJ_DIR)/EOFException.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/util/$(OBJ_DIR)/IllegalStateException.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/util/$(OBJ_DIR)/IOException.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/util/$(OBJ_DIR)/System.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/networktables2/util/$(OBJ_DIR)/StringCache.o \
	 C:/Users/Maiden/CppProjects/frc/WPILib/tables/$(OBJ_DIR)/TableKeyNotDefinedException.o
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC604diab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC604gnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
SUBDIRS :=
OBJECTS := $(OBJ_DIR)/DriverStationLCD.o $(OBJ_DIR)/Gyro.o $(OBJ_DIR)/Timer.o \
	 $(OBJ_DIR)/AnalogPotentiometer.o $(OBJ_DIR)/DigitalInput.o $(OBJ_DIR)/Utility.o \
	 $(OBJ_DIR)/MotorSafetyHelper.o $(OBJ_DIR)/DriverStationEnhancedIO.o $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o $(OBJ_DIR)/DoubleSolenoid.o $(OBJ_DIR)/KinectStick.o \
	 $(OBJ_DIR)/Compressor.o $(OBJ_DIR)/SolenoidBase.o $(OBJ_DIR)/CANJaguar.o \
	 $(OBJ_DIR)/Task.o $(OBJ_DIR)/AnalogChannel.o $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/AnalogModule.o $(OBJ_DIR)/SerialPort.o $(OBJ_DIR)/Error.o \
	 $(OBJ_DIR)/ErrorBase.o $(OBJ_DIR)/Ultrasonic.o $(OBJ_DIR)/Talon.o \
	 $(OBJ_DIR)/AnalogTriggerOutput.o $(OBJ_DIR)/AnalogTrigger.o $(OBJ_DIR)/Kinect.o \
	 $(OBJ_DIR)/Watchdog.o $(OBJ_DIR)/Solenoid.o $(OBJ_DIR)/PIDController.o \
	 $(OBJ_DIR)/Dashboard.o $(OBJ_DIR)/HiTechnicColorSensor.o $(OBJ_DIR)/Counter.o \
	 $(OBJ_DIR)/SimpleRobot.o $(OBJ_DIR)/DigitalOutput.o $(OBJ_DIR)/Accelerometer.o \
	 $(OBJ_DIR)/PWM.o $(OBJ_DIR)/Encoder.o $(OBJ_DIR)/DriverStation.o \
	 $(OBJ_DIR)/Module.o $(OBJ_DIR)/ADXL345_SPI.o $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/I2C.o $(OBJ_DIR)/IterativeRobot.o $(OBJ_DIR)/SPI.o \
	 $(OBJ_DIR)/DigitalModule.o $(OBJ_DIR)/Notifier.o $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Preferences.o $(OBJ_DIR)/Resource.o $(OBJ_DIR)/Synchronized.o \
	 $(OBJ_DIR)/Victor.o $(OBJ_DIR)/Joystick.o $(OBJ_DIR)/ADXL345_I2C.o \
	 $(OBJ_DIR)/RobotBase.o $(OBJ_DIR)/GearTooth.o $(OBJ_DIR)/SafePWM.o \
	 $(OBJ_DIR)/DigitalSource.o $(OBJ_DIR)/Servo.o $(OBJ_DIR)/SensorBase.o

PROJECT_TARGETS :=

SUB_OBJECTS :=
SUB_TARGETS :=
endif

PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0

ifeq ($(BUILD_SPEC),PPC32diab)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC32gnu)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mhard-float -mstrict-align -mno-implicit-fp -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC32sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC32sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -msoft-float -mstrict-align
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC403diab)
VX_CPU_FAMILY = ppc
CPU = PPC403
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC403FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC403gnu)
VX_CPU_FAMILY = ppc
CPU = PPC403
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=403 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC405diab)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC405FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC405gnu)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=405 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC405sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC405FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC405sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC405
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=405 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC440diab)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC440FH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC440gnu)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=440 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC440sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC440FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC440sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC440
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=440 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC603diab)
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC603FH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC603gnu)
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I.. -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC604diab)
VX_CPU_FAMILY = ppc
CPU = PPC604
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC604FH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC604gnu)
VX_CPU_FAMILY = ppc
CPU = PPC604
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=604 -mstrict-align -mno-implicit-fp
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXdiab)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCE500FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXgnu)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=8540 -mstrict-align -msoft-float -mabi=no-spe
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCE500FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC85XX
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=8540 -mstrict-align -msoft-float -mabi=no-spe
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC860sfdiab)
VX_CPU_FAMILY = ppc
CPU = PPC860
TOOL_FAMILY = diab
TOOL = sfdiab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPC860FS:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),PPC860sfgnu)
VX_CPU_FAMILY = ppc
CPU = PPC860
TOOL_FAMILY = gnu
TOOL = sfgnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=860 -mstrict-align -msoft-float
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),SIMLINUXdiab)
VX_CPU_FAMILY = simlinux
CPU = SIMLINUX
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tX86LH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),SIMLINUXgnu)
VX_CPU_FAMILY = simlinux
CPU = SIMLINUX
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mtune=i486 -march=i486
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),SIMNTdiab)
VX_CPU_FAMILY = simpc
CPU = SIMNT
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tX86LH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),SIMNTgnu)
VX_CPU_FAMILY = simpc
CPU = SIMNT
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mtune=i486 -march=i486
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
VX_CPU_FAMILY = simso
CPU = SIMSPARCSOLARIS
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tSPARCFH:vxworks63
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif

ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
VX_CPU_FAMILY = simso
CPU = SIMSPARCSOLARIS
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = 
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = 
endif


ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C-Compiler) $(CC_ARCH_SPEC) -ansi  -Wall  -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG) $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL -D'SVN_REV="$(shell svnversion -n ..)"' $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xstsw-slow -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC32sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC403gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC405sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC440sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC603gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604diab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC604gnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC85XXsfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),PPC860sfgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space -Wa,-Xmnem-mit -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMLINUXgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space -Wa,-Xmnem-mit -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMNTgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -nostdlib -fno-builtin -fno-defer-pop
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccpentium $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISdiab)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xpreprocess-assembly -Xcpp-no-space  -Xmake-dependency=0xd $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif
ifeq ($(BUILD_SPEC),SIMSPARCSOLARISgnu)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.s
	$(TRACE_FLAG)echo "building $@"; $(TOOL_PATH)ccsparc $(DEBUGFLAGS_Assembler) $(CC_ARCH_SPEC) -ansi   -xassembler-with-cpp -MD -MP $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"

endif





-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
