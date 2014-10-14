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

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
PRJ_ROOT_DIR := C:/Users/Maiden/CppProjects/frc/Sparky_2404
WS_ROOT_DIR := C:/Users/Maiden/CppProjects/frc



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -IC:/Users/Maiden/CppProjects/frc/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = C:/Users/Maiden/CppProjects/frc/WPILib/PPC603gnu/WPILib.a 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = Sparky_2404/$(MODE_DIR)/Sparky_2404.out \
	 Sparky_2404_partialImage/$(MODE_DIR)/Sparky_2404_partialImage.o


#Rules

# Sparky_2404
ifeq ($(DEBUG_MODE),1)
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Sparky_2404/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Sparky_2404/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -IC:/Users/Maiden/CppProjects/frc/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Sparky_2404/$(MODE_DIR)/% : IDE_LIBRARIES = C:/Users/Maiden/CppProjects/frc/WPILib/PPC603gnu/WPILib.a 
Sparky_2404/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Sparky_2404/$(MODE_DIR)/% : DEFINES = 
Sparky_2404/$(MODE_DIR)/% : EXPAND_DBG = 0
Sparky_2404/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Sparky_2404/$(MODE_DIR)/% : CPU = PPC603
Sparky_2404/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Sparky_2404/$(MODE_DIR)/% : TOOL = gnu
Sparky_2404/$(MODE_DIR)/% : TOOL_PATH = 
Sparky_2404/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
Sparky_2404/$(MODE_DIR)/% : LIBPATH = 
Sparky_2404/$(MODE_DIR)/% : LIBS = 
Sparky_2404/$(MODE_DIR)/% : OBJ_DIR := Sparky_2404/$(MODE_DIR)

OBJECTS_Sparky_2404 = Sparky_2404_partialImage/$(MODE_DIR)/Sparky_2404_partialImage.o

Sparky_2404/$(MODE_DIR)/Sparky_2404.out : $(OBJECTS_Sparky_2404)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Sparky_2404) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Sparky_2404) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Sparky_2404/$(MODE_DIR)/Sparky_2404_compile_file : $(FILE) ;

_clean :: Sparky_2404/$(MODE_DIR)/Sparky_2404_clean

Sparky_2404/$(MODE_DIR)/Sparky_2404_clean : 
	$(TRACE_FLAG)if [ -d "Sparky_2404" ]; then cd "Sparky_2404"; rm -rf $(MODE_DIR); fi


# Sparky_2404_partialImage
ifeq ($(DEBUG_MODE),1)
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Sparky_2404_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Sparky_2404_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -IC:/Users/Maiden/CppProjects/frc/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Sparky_2404_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = C:/Users/Maiden/CppProjects/frc/WPILib/PPC603gnu/WPILib.a 
Sparky_2404_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Sparky_2404_partialImage/$(MODE_DIR)/% : DEFINES = 
Sparky_2404_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
Sparky_2404_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Sparky_2404_partialImage/$(MODE_DIR)/% : CPU = PPC603
Sparky_2404_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Sparky_2404_partialImage/$(MODE_DIR)/% : TOOL = gnu
Sparky_2404_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
Sparky_2404_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
Sparky_2404_partialImage/$(MODE_DIR)/% : LIBPATH = 
Sparky_2404_partialImage/$(MODE_DIR)/% : LIBS = 
Sparky_2404_partialImage/$(MODE_DIR)/% : OBJ_DIR := Sparky_2404_partialImage/$(MODE_DIR)

Sparky_2404_partialImage/$(MODE_DIR)/Objects/Sparky_2404/myRobot.o : C:/Users/Maiden/CppProjects/frc/Sparky_2404/myRobot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Sparky_2404_partialImage = Sparky_2404_partialImage/$(MODE_DIR)/Objects/Sparky_2404/myRobot.o

Sparky_2404_partialImage/$(MODE_DIR)/Sparky_2404_partialImage.o : $(OBJECTS_Sparky_2404_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_Sparky_2404_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Sparky_2404_partialImage/$(MODE_DIR)/Sparky_2404_partialImage_compile_file : $(FILE) ;

_clean :: Sparky_2404_partialImage/$(MODE_DIR)/Sparky_2404_partialImage_clean

Sparky_2404_partialImage/$(MODE_DIR)/Sparky_2404_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "Sparky_2404_partialImage" ]; then cd "Sparky_2404_partialImage"; rm -rf $(MODE_DIR); fi

DEP_FILES := Sparky_2404_partialImage/$(MODE_DIR)/Objects/Sparky_2404/myRobot.d
-include $(DEP_FILES)



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
