#ifndef _java_nio_charset_Charset$ExtendedProviderHolder$1_h_
#define _java_nio_charset_Charset$ExtendedProviderHolder$1_h_
//$ class java.nio.charset.Charset$ExtendedProviderHolder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace nio {
		namespace charset {

class Charset$ExtendedProviderHolder$1 : public ::java::security::PrivilegedAction {
	$class(Charset$ExtendedProviderHolder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Charset$ExtendedProviderHolder$1();
	void init$();
	virtual $Object* run() override;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_Charset$ExtendedProviderHolder$1_h_