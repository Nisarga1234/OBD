#include "Types.h"
#include "obd_PIDs.h"
#include "PID_values.h"

// Global array of PID values (all PIDs that are part of Mode 01)
uint32 PIDValues[PID_COUNT] = {
    PID_VAL_SUPPORTED_00,            // PID_SUPPORTED_00 (supports 0x04 and 0x05)
    PID_VAL_ENGINE_LOAD_04,          // PID_ENGINE_LOAD_04
    PID_VAL_COOLANT_TEMP_05,         // PID_COOLANT_TEMP_05

    PID_VAL_SUPPORTED_20,            // PID_SUPPORTED_20 (supports 0x2D and 0x2F)
    PID_VAL_FUEL_RAIL_PRESSURE_2D,   // PID_FUEL_RAIL_PRESSURE_2D
    PID_VAL_FUEL_LEVEL_2F,           // PID_FUEL_LEVEL_2F

    PID_VAL_SUPPORTED_40,            // PID_SUPPORTED_40 (supports 0x45 and 0x46)
    PID_VAL_AMBIENT_TEMP_45,         // PID_AMBIENT_TEMP_45
    PID_VAL_ABS_BARO_PRESSURE_46,    // PID_ABS_BARO_PRESSURE_46

    PID_VAL_SUPPORTED_60,            // PID_SUPPORTED_60 (supports 0x62 and 0x63)
    PID_VAL_COMMANDED_EQUIV_RATIO_62,// PID_COMMANDED_EQUIV_RATIO_62
    PID_VAL_ENGINE_REFERENCE_TORQUE_63, // PID_ENGINE_REFERENCE_TORQUE_63

    PID_VAL_SUPPORTED_80,            // PID_SUPPORTED_80 (supports 0x80, 0x85, and 0x8E)
    PID_VAL_THROTTLE_POS_85,         // PID_THROTTLE_POS_85
    PID_VAL_ENGINE_FRICTION_PERCENT_8E, // PID_ENGINE_FRICTION_PERCENT_8E

    PID_VAL_SUPPORTED_A0,            // PID_SUPPORTED_A0 (supports 0xA0 and 0xA2)
    PID_VAL_ENGINE_PERCENT_TORQUE_A2, // PID_ENGINE_PERCENT_TORQUE_A2

    PID_VAL_SUPPORTED_C0             // PID_SUPPORTED_C0 (no specific PIDs supported)
};

//#define PID_COUNT (sizeof(PIDValues) / sizeof(PIDValues[0])) // Number of PIDs
