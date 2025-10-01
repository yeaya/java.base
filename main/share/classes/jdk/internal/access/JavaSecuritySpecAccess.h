#ifndef _jdk_internal_access_JavaSecuritySpecAccess_h_
#define _jdk_internal_access_JavaSecuritySpecAccess_h_
//$ interface jdk.internal.access.JavaSecuritySpecAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class EncodedKeySpec;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaSecuritySpecAccess : public ::java::lang::Object {
	$interface(JavaSecuritySpecAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void clearEncodedKeySpec(::java::security::spec::EncodedKeySpec* keySpec) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaSecuritySpecAccess_h_