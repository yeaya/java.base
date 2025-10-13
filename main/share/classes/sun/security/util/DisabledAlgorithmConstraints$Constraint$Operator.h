#ifndef _sun_security_util_DisabledAlgorithmConstraints$Constraint$Operator_h_
#define _sun_security_util_DisabledAlgorithmConstraints$Constraint$Operator_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$Constraint$Operator
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("GE")
#undef GE
#pragma push_macro("GT")
#undef GT
#pragma push_macro("LE")
#undef LE
#pragma push_macro("LT")
#undef LT
#pragma push_macro("NE")
#undef NE

namespace sun {
	namespace security {
		namespace util {

class DisabledAlgorithmConstraints$Constraint$Operator : public ::java::lang::Enum {
	$class(DisabledAlgorithmConstraints$Constraint$Operator, 0, ::java::lang::Enum)
public:
	DisabledAlgorithmConstraints$Constraint$Operator();
	static $Array<::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* of($String* s);
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* valueOf($String* name);
	static $Array<::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator>* values();
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* EQ;
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* NE;
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* LT;
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* LE;
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* GT;
	static ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator* GE;
	static $Array<::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator>* $VALUES;
};

		} // util
	} // security
} // sun

#pragma pop_macro("EQ")
#pragma pop_macro("GE")
#pragma pop_macro("GT")
#pragma pop_macro("LE")
#pragma pop_macro("LT")
#pragma pop_macro("NE")

#endif // _sun_security_util_DisabledAlgorithmConstraints$Constraint$Operator_h_