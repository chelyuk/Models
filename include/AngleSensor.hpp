/**
 * 
 */

#pragma once

namespace Models
{

class AngleSensor
{
    public:
        void SetAngle(float angle_value);
        float GetSensorSinData();
        float GetSensorCosData();
        void Process();

    private:
        float angle_value_;
        float sin_voltage_;
        float cos_voltage_;
    
};

}