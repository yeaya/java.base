#ifndef _java_security_Signer_h_
#define _java_security_Signer_h_
//$ class java.security.Signer
//$ extends java.security.Identity

#include <java/security/Identity.h>

namespace java {
	namespace security {
		class IdentityScope;
		class KeyPair;
		class PrivateKey;
	}
}

namespace java {
	namespace security {

class $export Signer : public ::java::security::Identity {
	$class(Signer, $NO_CLASS_INIT, ::java::security::Identity)
public:
	Signer();
	void init$();
	void init$($String* name);
	void init$($String* name, ::java::security::IdentityScope* scope);
	static void check($String* directive);
	virtual ::java::security::PrivateKey* getPrivateKey();
	virtual $String* printKeys() override;
	void setKeyPair(::java::security::KeyPair* pair);
	using ::java::security::Identity::toString;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xE786EABE028EF4B8;
	::java::security::PrivateKey* privateKey = nullptr;
};

	} // security
} // java

#endif // _java_security_Signer_h_