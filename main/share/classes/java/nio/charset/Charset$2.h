#ifndef _java_nio_charset_Charset$2_h_
#define _java_nio_charset_Charset$2_h_
//$ class java.nio.charset.Charset$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace nio {
		namespace charset {

class Charset$2 : public ::java::security::PrivilegedAction {
	$class(Charset$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Charset$2();
	void init$($String* val$charsetName);
	virtual $Object* run() override;
	$String* val$charsetName = nullptr;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_Charset$2_h_