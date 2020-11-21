/**
 * 
 */

#include "System.hpp"

#include <cmath>

#define ADC_MAX_QUANTITY 1024
#define ADC_MAX_VALUE 5

namespace Models
{

System::System()
{

}

void System::Test()
{
    float angle = 0;
    float sin_voltage = 0;
    float cos_voltage = 0;
    int sin_q = 0;
    int cos_q = 0;
    float sin_value = 0;
    float cos_value = 0;

    angle = M_PI;

    angle_sensor_.SetAngle(angle);
    angle_sensor_.Process();
    sin_voltage = angle_sensor_.GetSensorSinData();
    cos_voltage = angle_sensor_.GetSensorCosData();

    sin_adc_.SetInputValue(sin_voltage);
    cos_adc_.SetInputValue(cos_voltage);
    sin_adc_.Process();
    cos_adc_.Process();
    sin_q = sin_adc_.GetADCValue();
    cos_q = cos_adc_.GetADCValue();

    sin_value = (float)sin_q / ADC_MAX_QUANTITY * ADC_MAX_VALUE;
    cos_value = (float)cos_q / ADC_MAX_QUANTITY * ADC_MAX_VALUE;
}

} // namespace Models