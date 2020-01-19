obj-$(CONFIG_OPCHAIN) += uxcore/
CORE_PATH = $(KBUILD_SRC)/coretech/uxcore/core
ifeq ($(CORE_PATH),$(wildcard $(CORE_PATH)))
obj-$(CONFIG_OPCHAIN) += uxcore/core/
endif

obj-$(CONFIG_HOUSTON) += houston/
obj-$(CONFIG_AIGOV) += aigov/
obj-$(CONFIG_CONTROL_CENTER) += control_center/