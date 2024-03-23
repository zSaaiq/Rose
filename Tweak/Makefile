FINALPACKAGE = 1
PREFIX = $(THEOS)/toolchain/Xcode.xctoolchain/usr/bin/
THEOS_PACKAGE_SCHEME=rootless
export ADDITIONAL_CFLAGS = -DTHEOS_LEAN_AND_MEAN -fobjc-arc -O3
export TARGET = iphone:15.6
ARCHS = arm64 arm64e
TWEAK_NAME = Rose
$(TWEAK_NAME)_FILES = Rose.x
$(TWEAK_NAME)_CFLAGS = -fobjc-arc -DTHEOS_LEAN_AND_MEAN
$(TWEAK_NAME)_EXTRA_FRAMEWORKS = Cephei
$(TWEAK_NAME)_LIBRARIES = Rose

include $(THEOS)/makefiles/common.mk
include $(THEOS_MAKE_PATH)/tweak.mk
