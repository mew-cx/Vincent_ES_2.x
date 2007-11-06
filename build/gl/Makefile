#---------------------------------------------------------------------
# Project configuration.
#---------------------------------------------------------------------

# Name of build target.
TARGET := libgl.a

# Source directories (delimited with spaces).
SOURCE_PATH := ../../src/gl

BUILD_INCLUDE := -I../../src/public

# Source files to build target from.
BUILD_FILES := \
	frontend/asm.c			\
	frontend/compiler.c     \
	frontend/memory.c       \
	gl/fragment.c           \
	gl/state.c				\
	frontend/constants.c    \
	frontend/parser.c       \
	gl/framebuf.c           \
	gl/texture.c			\
	frontend/declarations.c \
	frontend/statements.c   \
	gl/log.c                \
	gl/uniform.c			\
	frontend/expressions.c  \
	frontend/symbols.c      \
	gl/program.c            \
	platform/platform.c		\
	frontend/il.c           \
	frontend/tokenizer.c    \
	gl/query.c              \
	raster/lines.c			\
	frontend/ilread.c       \
	frontend/types.c        \
	gl/raster.c             \
	raster/points.c			\
	frontend/ilwrite.c      \
	gl/attrib.c             \
	gl/render.c             \
	raster/triangles.c		\
	frontend/linker.c       \
	gl/buffer.c             \
	gl/shader.c				\
	gl/variables.c

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
