/**
 * 
 */

#include "ADC.hpp"

namespace Models
{

void ADC::SetInputValue(float input_value)
{
    input_value_ = input_value;
}

int ADC::GetADCValue()
{
    return output_value_;
}

void ADC::Process()
{
    output_value_ = input_value_;
}

} // namespace Models
