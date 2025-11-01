#ifndef _java_security_Identity_h_
#define _java_security_Identity_h_
//$ class java.security.Identity
//$ extends java.security.Principal
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/security/Principal.h>

namespace java {
	namespace security {
		class Certificate;
		class IdentityScope;
		class PublicKey;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace security {

class $export Identity : public ::java::security::Principal, public ::java::io::Serializable {
	$class(Identity, $NO_CLASS_INIT, ::java::security::Principal, ::java::io::Serializable)
public:
	Identity();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	void init$($String* name, ::java::security::IdentityScope* scope);
	void init$($String* name);
	virtual void addCertificate(::java::security::Certificate* certificate);
	virtual $Array<::java::security::Certificate>* certificates();
	static void check($String* directive);
	virtual bool equals(Object$* identity) override;
	virtual $String* fullName();
	virtual $String* getInfo();
	virtual $String* getName() override;
	virtual ::java::security::PublicKey* getPublicKey();
	::java::security::IdentityScope* getScope();
	virtual int32_t hashCode() override;
	virtual bool identityEquals(::java::security::Identity* identity);
	bool keyEquals(::java::security::PublicKey* aKey, ::java::security::PublicKey* anotherKey);
	virtual $String* printCertificates();
	virtual $String* printKeys();
	virtual void removeCertificate(::java::security::Certificate* certificate);
	virtual void setInfo($String* info);
	virtual void setPublicKey(::java::security::PublicKey* key);
	virtual $String* toString() override;
	virtual $String* toString(bool detailed);
	static const int64_t serialVersionUID = (int64_t)0x321904F09F5E92D3;
	$String* name = nullptr;
	::java::security::PublicKey* publicKey = nullptr;
	$String* info = nullptr;
	::java::security::IdentityScope* scope = nullptr;
	::java::util::Vector* certificates$ = nullptr;
};

	} // security
} // java

#endif // _java_security_Identity_h_