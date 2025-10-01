#ifndef _sun_security_util_DisabledAlgorithmConstraints$JarHolder_h_
#define _sun_security_util_DisabledAlgorithmConstraints$JarHolder_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$JarHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONSTRAINTS")
#undef CONSTRAINTS

namespace sun {
	namespace security {
		namespace util {
			class DisabledAlgorithmConstraints;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DisabledAlgorithmConstraints$JarHolder : public ::java::lang::Object {
	$class(DisabledAlgorithmConstraints$JarHolder, 0, ::java::lang::Object)
public:
	DisabledAlgorithmConstraints$JarHolder();
	void init$();
	static ::sun::security::util::DisabledAlgorithmConstraints* CONSTRAINTS;
};

		} // util
	} // security
} // sun

#pragma pop_macro("CONSTRAINTS")

#endif // _sun_security_util_DisabledAlgorithmConstraints$JarHolder_h_