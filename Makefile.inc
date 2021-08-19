APPL_COBJS += 
# COPTS += -DMAKE_BT_DISABLE
INCLUDES += -I$(ETROBO_HRP3_WORKSPACE)/etroboc_common

APPL_CXXOBJS +=

SRCLANG := c++

ifdef CONFIG_EV3RT_APPLICATION

# Include libraries
include $(EV3RT_SDK_LIB_DIR)/libcpp-ev3/Makefile
include $(EV3RT_SDK_LIB_DIR)/lib2/Makefile

endif