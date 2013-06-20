ccflags-y := -Ofast -ffast-math -fgcse-lm -fgcse-sm -fsched-spec-load -fforce-addr -fsingle-precision-constant -mcpu=cortex-a8 -mtune=cortex-a8 -marm -mfpu=neon -ftree-vectorize -mvectorize-with-neon-quad
obj-$(CONFIG_ION) +=	ion.o ion_heap.o ion_system_heap.o ion_carveout_heap.o ion_iommu_heap.o ion_cp_heap.o
obj-$(CONFIG_ION_TEGRA) += tegra/
obj-$(CONFIG_ION_MSM) += msm/
