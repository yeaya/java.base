#ifndef _java_security_spec_EncodedKeySpec$1_h_
#define _java_security_spec_EncodedKeySpec$1_h_
//$ class java.security.spec.EncodedKeySpec$1
//$ extends jdk.internal.access.JavaSecuritySpecAccess

#include <jdk/internal/access/JavaSecuritySpecAccess.h>

namespace java {
	namespace security {
		namespace spec {
			class EncodedKeySpec;
		}
	}
}

namespace java {
	namespace security {
		namespace spec {

class EncodedKeySpec$1 : public ::jdk::internal::access::JavaSecuritySpecAccess {
	$class(EncodedKeySpec$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaSecuritySpecAccess)
public:
	EncodedKeySpec$1();
	void init$();
	virtual void clearEncodedKeySpec(::java::security::spec::EncodedKeySpec* keySpec) override;
};

		} // spec
	} // security
} // java

#endif // _java_security_spec_EncodedKeySpec$1_h_