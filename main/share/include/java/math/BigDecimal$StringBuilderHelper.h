#ifndef _java_math_BigDecimal$StringBuilderHelper_h_
#define _java_math_BigDecimal$StringBuilderHelper_h_
//$ class java.math.BigDecimal$StringBuilderHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DIGIT_ONES")
#undef DIGIT_ONES
#pragma push_macro("DIGIT_TENS")
#undef DIGIT_TENS

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace java {
	namespace math {

class $import BigDecimal$StringBuilderHelper : public ::java::lang::Object {
	$class(BigDecimal$StringBuilderHelper, 0, ::java::lang::Object)
public:
	BigDecimal$StringBuilderHelper();
	void init$();
	virtual $chars* getCompactCharArray();
	virtual ::java::lang::StringBuilder* getStringBuilder();
	virtual int32_t putIntCompact(int64_t intCompact);
	static bool $assertionsDisabled;
	::java::lang::StringBuilder* sb = nullptr;
	$chars* cmpCharArray = nullptr;
	static $chars* DIGIT_TENS;
	static $chars* DIGIT_ONES;
};

	} // math
} // java

#pragma pop_macro("DIGIT_ONES")
#pragma pop_macro("DIGIT_TENS")

#endif // _java_math_BigDecimal$StringBuilderHelper_h_