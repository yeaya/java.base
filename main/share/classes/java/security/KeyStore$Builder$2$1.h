#ifndef _java_security_KeyStore$Builder$2$1_h_
#define _java_security_KeyStore$Builder$2$1_h_
//$ class java.security.KeyStore$Builder$2$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace security {
		class KeyStore$Builder$2;
	}
}

namespace java {
	namespace security {

class KeyStore$Builder$2$1 : public ::java::security::PrivilegedExceptionAction {
	$class(KeyStore$Builder$2$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	KeyStore$Builder$2$1();
	void init$(::java::security::KeyStore$Builder$2* this$0);
	virtual $Object* run() override;
	::java::security::KeyStore$Builder$2* this$0 = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$Builder$2$1_h_