/****************************************************************************
 * dph_config.cpp
 *
 * Airogistic Drone Performance Harness (DPH)
 * Minimal module stub — exists to satisfy the CMake build target.
 * All parameter definitions are in dph_params.yaml
 *
 ****************************************************************************/

#include <px4_platform_common/px4_config.h>
#include <px4_platform_common/module.h>
#include <px4_platform_common/module_params.h>
#include <px4_platform_common/log.h>

extern "C" __EXPORT int dph_config_main(int argc, char *argv[]);

int dph_config_main(int argc, char *argv[])
{
    PX4_INFO("DPH Config module loaded — params registered.");
    return 0;
}
