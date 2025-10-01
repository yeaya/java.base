#ifndef _java_security_Signer$1_h_
#define _java_security_Signer$1_h_
//$ class java.security.Signer$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace security {
		class PublicKey;
		class Signer;
	}
}

namespace java {
	namespace security {

class Signer$1 : public ::java::security::PrivilegedExceptionAction {
	$class(Signer$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Signer$1();
	void init$(::java::security::Signer* this$0, ::java::security::PublicKey* val$pub);
	virtual $Object* run() override;
	::java::security::Signer* this$0 = nullptr;
	::java::security::PublicKey* val$pub = nullptr;
};

	} // security
} // java

#endif // _java_security_Signer$1_h_