#ifndef _java_security_Security$ProviderProperty_h_
#define _java_security_Security$ProviderProperty_h_
//$ class java.security.Security$ProviderProperty
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Provider;
	}
}

namespace java {
	namespace security {

class Security$ProviderProperty : public ::java::lang::Object {
	$class(Security$ProviderProperty, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Security$ProviderProperty();
	void init$();
	$String* className = nullptr;
	::java::security::Provider* provider = nullptr;
};

	} // security
} // java

#endif // _java_security_Security$ProviderProperty_h_