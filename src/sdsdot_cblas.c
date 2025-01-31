/**
* @license Apache-2.0
*
* Copyright (c) 2023 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/blas/base/sdsdot.h"
#include "stdlib/blas/base/sdsdot_cblas.h"

/**
* Computes the dot product of two single-precision floating-point vectors with extended accumulation.
*
* @param N        number of indexed elements
* @param scalar   scalar constant added to the dot product
* @param X        first array
* @param strideX  X stride length
* @param Y        second array
* @param strideY  Y stride length
* @returns        dot product
*/
float c_sdsdot( const int N, const float scalar, const float *X, const int strideX, const float *Y, const int strideY ) {
	return cblas_sdsdot( N, scalar, X, strideX, Y, strideY );
}
