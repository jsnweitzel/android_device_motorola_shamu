on property:sys.boot_completed=1
    # Allows franco.Kernel updater to know this feature is supported
    setprop fku.profiles 1

# Power saving profile
on property:fku.perf.profile=0
    write /sys/devices/system/cpu/cpu1/online 1
    write /sys/devices/system/cpu/cpu2/online 1
    write /sys/devices/system/cpu/cpu3/online 1
    write /sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq 1036800
    write /sys/devices/system/cpu/cpu1/cpufreq/scaling_max_freq 1036800
    write /sys/devices/system/cpu/cpu2/cpufreq/scaling_max_freq 1036800
    write /sys/devices/system/cpu/cpu3/cpufreq/scaling_max_freq 1036800
    write /sys/class/devfreq/fdb00000.qcom,kgsl-3d0/max_freq 300000000

# Balance (FK defaults)
on property:fku.perf.profile=1
    write /sys/devices/system/cpu/cpu1/online 1
    write /sys/devices/system/cpu/cpu2/online 1
    write /sys/devices/system/cpu/cpu3/online 1
    write /sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq 2649600
    write /sys/devices/system/cpu/cpu1/cpufreq/scaling_max_freq 2649600
    write /sys/devices/system/cpu/cpu2/cpufreq/scaling_max_freq 2649600
    write /sys/devices/system/cpu/cpu3/cpufreq/scaling_max_freq 2649600
    write /sys/class/devfreq/fdb00000.qcom,kgsl-3d0/max_freq 600000000

# Performance
on property:fku.perf.profile=2
    write /sys/devices/system/cpu/cpu1/online 1
    write /sys/devices/system/cpu/cpu2/online 1
    write /sys/devices/system/cpu/cpu3/online 1
    write /sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq 2649600
    write /sys/devices/system/cpu/cpu1/cpufreq/scaling_max_freq 2649600
    write /sys/devices/system/cpu/cpu2/cpufreq/scaling_max_freq 2649600
    write /sys/devices/system/cpu/cpu3/cpufreq/scaling_max_freq 2649600
    write /sys/class/devfreq/fdb00000.qcom,kgsl-3d0/max_freq 600000000