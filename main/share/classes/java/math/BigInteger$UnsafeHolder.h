#ifndef _java_math_BigInteger$UnsafeHolder_h_
#define _java_math_BigInteger$UnsafeHolder_h_
//$ class java.math.BigInteger$UnsafeHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace math {

class BigInteger$UnsafeHolder : public ::java::lang::Object {
	$class(BigInteger$UnsafeHolder, 0, ::java::lang::Object)
public:
	BigInteger$UnsafeHolder();
	void init$();
	static void putMag(::java::math::BigInteger* bi, $ints* magnitude);
	static void putSign(::java::math::BigInteger* bi, int32_t sign);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int64_t signumOffset;
	static int64_t magOffset;
};

	} // math
} // java

#endif // _java_math_BigInteger$UnsafeHolder_h_