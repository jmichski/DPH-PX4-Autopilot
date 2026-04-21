############################################################################
# CMakeLists.txt
# DPH Config Module — Airogistic Drone Performance Harness
#
# Place this file at:
#   src/modules/dph_config/CMakeLists.txt
#
# Register module in your board config (e.g. boards/px4/sitl/default.cmake
# or boards/px4/fmu-v6x/default.cmake) by adding:
#   dph_config
# to the MODULES block.
############################################################################

px4_add_module(
    MODULE modules__dph_config
    MAIN dph_config
    SRCS
        dph_config.cpp
    PARAM_YAML
        dph_params.yaml
    DEPENDS
        px4_platform_common
)
