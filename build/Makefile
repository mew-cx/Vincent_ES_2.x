# Build configuration [release] or [debug] or [profile].
BUILD_CONFIG := debug

export BUILD_CONFIG

# Platform [x86-darwin] or [arm-linux]
PLATFORM := x86-darwin

export PLATFORM
export SHADER_PATH=../src/tests

SUBDIRS := gl egl utils tests

all:
	$(MAKE) -C gl all
	$(MAKE) -C egl all
	$(MAKE) -C utils all
	$(MAKE) -C tests all

clean:
	$(MAKE) -C gl clean
	$(MAKE) -C egl clean
	$(MAKE) -C utils clean
	$(MAKE) -C tests clean

debug:	all
	gdb -d ../src/gl -d ../src/egl -d ../src/utils -d ../src/tests tests/$(PLATFORM)-$(BUILD_CONFIG)/tests