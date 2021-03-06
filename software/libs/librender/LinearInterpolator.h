// 
// Copyright 2011-2015 Jeff Bush
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 


#pragma once

#include "SIMDMath.h"

namespace librender
{

//
// 2D linear interpolator. Given the value of a parameter at 3 points in a 2D space, 
// determine the value at any other arbitrary point.
//
class LinearInterpolator 
{
public:
	void init(float x0, float y0, float c0, float x1, 
		float y1, float c1, float x2, float y2, float c2)
	{
		float a = x1 - x0;
		float b = y1 - y0;
		float c = x2 - x0;
		float d = y2 - y0;
		float e = c1 - c0;
		float f = c2 - c0;

		// Use Cramer's rule to solve for X and Y gradients.
		float oneOverDeterminant = 1.0 / (a * d - b * c);
		fXGradient = (e * d - b * f) * oneOverDeterminant;
		fYGradient = (a * f - e * c) * oneOverDeterminant;

		// Compute c at 0, 0
		fC00 = c0 + -x0 * fXGradient + -y0 * fYGradient;	
	}
	
	// Return values of this parameter at 16 locations given by the vectors
	// x and y.
	inline vecf16_t getValuesAt(vecf16_t x, vecf16_t y) const
	{
		return x * splatf(fXGradient) + y * splatf(fYGradient) + splatf(fC00);
	}

private:
	float fXGradient;
	float fYGradient;
	float fC00;	// Value of C at 0, 0
};

}
