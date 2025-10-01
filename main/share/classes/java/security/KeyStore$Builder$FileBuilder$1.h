#ifndef _java_security_KeyStore$Builder$FileBuilder$1_h_
#define _java_security_KeyStore$Builder$FileBuilder$1_h_
//$ class java.security.KeyStore$Builder$FileBuilder$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace security {
		class KeyStore;
		class KeyStore$Builder$FileBuilder;
	}
}

namespace java {
	namespace security {

class KeyStore$Builder$FileBuilder$1 : public ::java::security::PrivilegedExceptionAction {
	$class(KeyStore$Builder$FileBuilder$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	KeyStore$Builder$FileBuilder$1();
	void init$(::java::security::KeyStore$Builder$FileBuilder* this$0);
	virtual $Object* run() override;
	virtual ::java::security::KeyStore* run0();
	::java::security::KeyStore$Builder$FileBuilder* this$0 = nullptr;
};

	} // security
} // java

#endif // _java_security_KeyStore$Builder$FileBuilder$1_h_