/**
 * 
 */

#include "AngleSensor.hpp"

#include <math.h>

namespace Models
{
    
void AngleSensor::SetAngle(float angle_value)
{
    angle_value_ = angle_value;
}

float AngleSensor::GetSensorSinData()
{
    return sin_voltage_;
}

float AngleSensor::GetSensorCosData()
{
    return cos_voltage_;
}

void AngleSensor::Process()
{
    sin_voltage_ = sin(angle_value_);
    cos_voltage_ = cos(angle_value_);
}

} // namespace Models