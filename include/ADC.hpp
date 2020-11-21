/**
 * 
 */

#pragma once

namespace Models
{

class ADC
{
    public:
        void SetInputValue(float input_value);
        int GetADCValue();
        void Process();

    private:
       float input_value_;
       int output_value_; 
};

}