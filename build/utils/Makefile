#---------------------------------------------------------------------
# Project configuration.
#---------------------------------------------------------------------

# Name of build target.
TARGET := libutils.a

# Source directories (delimited with spaces).
SOURCE_PATH := ../../src/utils

SDL_INCLUDE := -I/sw/include/SDL
BUILD_INCLUDE := -I../../src/public $(SDL_INCLUDE)
	
# Source files to build target from.
BUILD_FILES := \
	file.c 			\
	shader.c		\
	state.c			\
	getopts.c

# Build configuration [release] or [debug] or [profile].
BUILD_CONFIG := debug

# Build type [lib] or [bin]
BUILD_TYPE := lib

# Platform [x86-darwin] or [arm-linux]
PLATFORM := x86-darwin

#---------------------------------------------------------------------
# Configure build enviroment.
#---------------------------------------------------------------------

include ../../makefiles/$(PLATFORM).inc
include ../../makefiles/Makefile.gcc

#---------------------------------------------------------------------
# The End.
#---------------------------------------------------------------------
