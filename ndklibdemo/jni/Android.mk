LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_SRC_FILES := printlib.c
LOCAL_MODULE := PrintLib
include $(BUILD_SHARED_LIBRARY)
