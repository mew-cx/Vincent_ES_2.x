#---------------------------------------------------------------------
# Project configuration.
#---------------------------------------------------------------------

# Name of build target.
TARGET := tests

# Build configuration [release] or [debug] or [profile].
BUILD_CONFIG := debug

# Build type [lib] or [bin]
BUILD_TYPE := bin

# Platform [x86-darwin] or [arm-linux]
PLATFORM := x86-darwin

BUILD_DIR := $(PLATFORM)-$(BUILD_CONFIG)

# Source directories (delimited with spaces).
SOURCE_PATH := ../../src/tests

SDL_INCLUDE := -I/sw/include/SDL
SDL_LIB := -L/sw/lib

BUILD_INCLUDE := -I../../src/public -I../../src/utils $(SDL_INCLUDE)
BUILD_LIBPATH := $(SDL_LIB)

# Source files to build target from.
BUILD_FILES := \
	testmain.c			\
	frontend/frontend.c \
	orange/orange.c

PROJECT_LIBS := \
	../gl/$(BUILD_DIR)/libgl.a 		\
	../egl/$(BUILD_DIR)/libegl.a 	\
	../utils/$(BUILD_DIR)/libutils.a 
	
# Libraries to link
BUILD_LIBS := -lSDL -lSDLmain -lcunit

# Other linker flags
BUILD_LFLAGS := -framework cocoa


#---------------------------------------------------------------------
# Configure build enviroment.
#---------------------------------------------------------------------

include ../../makefiles/$(PLATFORM).inc
include ../../makefiles/Makefile.gcc

#---------------------------------------------------------------------
# The End.
#---------------------------------------------------------------------
