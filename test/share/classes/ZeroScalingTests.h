#ifndef _ZeroScalingTests_h_
#define _ZeroScalingTests_h_
//$ class ZeroScalingTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace math {
		class BigDecimal;
		class MathContext;
	}
}

class $export ZeroScalingTests : public ::java::lang::Object {
	$class(ZeroScalingTests, 0, ::java::lang::Object)
public:
	ZeroScalingTests();
	void init$();
	static int32_t addTests();
	static int32_t divideTests();
	static void main($StringArray* argv);
	static int32_t multiplyTests();
	static int32_t setScaleDoesNotMutateTest();
	static int32_t setScaleTests();
	static int32_t subtractTests();
	static int32_t toEngineeringStringTests();
	static int32_t ulpTests();
	static ::java::math::MathContext* longEnough;
	static $Array<::java::math::BigDecimal>* zeros;
	static ::java::math::BigDecimal* element;
	static $Array<::java::math::MathContext>* contexts;
};

#endif // _ZeroScalingTests_h_