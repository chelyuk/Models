/**
 * 
 */

#pragma once

#include "ADC.hpp"
#include "AngleSensor.hpp"

namespace Models
{

class System
{
    public:
        System();
        void Test();

    private:
        AngleSensor angle_sensor_;
        ADC sin_adc_;
        ADC cos_adc_;
};

}