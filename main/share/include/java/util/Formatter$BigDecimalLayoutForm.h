#ifndef _java_util_Formatter$BigDecimalLayoutForm_h_
#define _java_util_Formatter$BigDecimalLayoutForm_h_
//$ class java.util.Formatter$BigDecimalLayoutForm
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DECIMAL_FLOAT")
#undef DECIMAL_FLOAT
#pragma push_macro("SCIENTIFIC")
#undef SCIENTIFIC

namespace java {
	namespace util {

class $import Formatter$BigDecimalLayoutForm : public ::java::lang::Enum {
	$class(Formatter$BigDecimalLayoutForm, 0, ::java::lang::Enum)
public:
	Formatter$BigDecimalLayoutForm();
	static $Array<::java::util::Formatter$BigDecimalLayoutForm>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::util::Formatter$BigDecimalLayoutForm* valueOf($String* name);
	static $Array<::java::util::Formatter$BigDecimalLayoutForm>* values();
	static ::java::util::Formatter$BigDecimalLayoutForm* SCIENTIFIC;
	static ::java::util::Formatter$BigDecimalLayoutForm* DECIMAL_FLOAT;
	static $Array<::java::util::Formatter$BigDecimalLayoutForm>* $VALUES;
};

	} // util
} // java

#pragma pop_macro("DECIMAL_FLOAT")
#pragma pop_macro("SCIENTIFIC")

#endif // _java_util_Formatter$BigDecimalLayoutForm_h_