#ifndef _java_math_BigDecimal$UnsafeHolder_h_
#define _java_math_BigDecimal$UnsafeHolder_h_
//$ class java.math.BigDecimal$UnsafeHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace math {
		class BigDecimal;
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

class BigDecimal$UnsafeHolder : public ::java::lang::Object {
	$class(BigDecimal$UnsafeHolder, 0, ::java::lang::Object)
public:
	BigDecimal$UnsafeHolder();
	void init$();
	static void setIntCompact(::java::math::BigDecimal* bd, int64_t val);
	static void setIntValVolatile(::java::math::BigDecimal* bd, ::java::math::BigInteger* val);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int64_t intCompactOffset;
	static int64_t intValOffset;
};

	} // math
} // java

#endif // _java_math_BigDecimal$UnsafeHolder_h_