#ifndef _java_math_SignedMutableBigInteger_h_
#define _java_math_SignedMutableBigInteger_h_
//$ class java.math.SignedMutableBigInteger
//$ extends java.math.MutableBigInteger

#include <java/math/MutableBigInteger.h>

namespace java {
	namespace math {

class SignedMutableBigInteger : public ::java::math::MutableBigInteger {
	$class(SignedMutableBigInteger, $NO_CLASS_INIT, ::java::math::MutableBigInteger)
public:
	SignedMutableBigInteger();
	void init$();
	void init$(int32_t val);
	void init$(::java::math::MutableBigInteger* val);
	virtual void signedAdd(::java::math::SignedMutableBigInteger* addend);
	virtual void signedAdd(::java::math::MutableBigInteger* addend);
	virtual void signedSubtract(::java::math::SignedMutableBigInteger* addend);
	virtual void signedSubtract(::java::math::MutableBigInteger* addend);
	virtual $String* toString() override;
	int32_t sign = 0;
};

	} // math
} // java

#endif // _java_math_SignedMutableBigInteger_h_