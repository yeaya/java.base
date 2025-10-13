#ifndef _jdk_internal_math_FormattedFloatingDecimal$Form_h_
#define _jdk_internal_math_FormattedFloatingDecimal$Form_h_
//$ class jdk.internal.math.FormattedFloatingDecimal$Form
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("COMPATIBLE")
#undef COMPATIBLE
#pragma push_macro("DECIMAL_FLOAT")
#undef DECIMAL_FLOAT
#pragma push_macro("GENERAL")
#undef GENERAL
#pragma push_macro("SCIENTIFIC")
#undef SCIENTIFIC

namespace jdk {
	namespace internal {
		namespace math {

class $export FormattedFloatingDecimal$Form : public ::java::lang::Enum {
	$class(FormattedFloatingDecimal$Form, 0, ::java::lang::Enum)
public:
	FormattedFloatingDecimal$Form();
	static $Array<::jdk::internal::math::FormattedFloatingDecimal$Form>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::jdk::internal::math::FormattedFloatingDecimal$Form* valueOf($String* name);
	static $Array<::jdk::internal::math::FormattedFloatingDecimal$Form>* values();
	static ::jdk::internal::math::FormattedFloatingDecimal$Form* SCIENTIFIC;
	static ::jdk::internal::math::FormattedFloatingDecimal$Form* COMPATIBLE;
	static ::jdk::internal::math::FormattedFloatingDecimal$Form* DECIMAL_FLOAT;
	static ::jdk::internal::math::FormattedFloatingDecimal$Form* GENERAL;
	static $Array<::jdk::internal::math::FormattedFloatingDecimal$Form>* $VALUES;
};

		} // math
	} // internal
} // jdk

#pragma pop_macro("COMPATIBLE")
#pragma pop_macro("DECIMAL_FLOAT")
#pragma pop_macro("GENERAL")
#pragma pop_macro("SCIENTIFIC")

#endif // _jdk_internal_math_FormattedFloatingDecimal$Form_h_