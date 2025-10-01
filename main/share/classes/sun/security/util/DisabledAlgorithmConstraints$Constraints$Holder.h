#ifndef _sun_security_util_DisabledAlgorithmConstraints$Constraints$Holder_h_
#define _sun_security_util_DisabledAlgorithmConstraints$Constraints$Holder_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$Constraints$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DENY_AFTER_PATTERN")
#undef DENY_AFTER_PATTERN

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DisabledAlgorithmConstraints$Constraints$Holder : public ::java::lang::Object {
	$class(DisabledAlgorithmConstraints$Constraints$Holder, 0, ::java::lang::Object)
public:
	DisabledAlgorithmConstraints$Constraints$Holder();
	void init$();
	static ::java::util::regex::Pattern* DENY_AFTER_PATTERN;
};

		} // util
	} // security
} // sun

#pragma pop_macro("DENY_AFTER_PATTERN")

#endif // _sun_security_util_DisabledAlgorithmConstraints$Constraints$Holder_h_