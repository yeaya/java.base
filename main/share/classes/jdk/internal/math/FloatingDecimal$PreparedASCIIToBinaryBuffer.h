#ifndef _jdk_internal_math_FloatingDecimal$PreparedASCIIToBinaryBuffer_h_
#define _jdk_internal_math_FloatingDecimal$PreparedASCIIToBinaryBuffer_h_
//$ class jdk.internal.math.FloatingDecimal$PreparedASCIIToBinaryBuffer
//$ extends jdk.internal.math.FloatingDecimal$ASCIIToBinaryConverter

#include <jdk/internal/math/FloatingDecimal$ASCIIToBinaryConverter.h>

namespace jdk {
	namespace internal {
		namespace math {

class $export FloatingDecimal$PreparedASCIIToBinaryBuffer : public ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter {
	$class(FloatingDecimal$PreparedASCIIToBinaryBuffer, $NO_CLASS_INIT, ::jdk::internal::math::FloatingDecimal$ASCIIToBinaryConverter)
public:
	FloatingDecimal$PreparedASCIIToBinaryBuffer();
	void init$(double doubleVal, float floatVal);
	virtual double doubleValue() override;
	virtual float floatValue() override;
	double doubleVal = 0.0;
	float floatVal = 0.0;
};

		} // math
	} // internal
} // jdk

#endif // _jdk_internal_math_FloatingDecimal$PreparedASCIIToBinaryBuffer_h_