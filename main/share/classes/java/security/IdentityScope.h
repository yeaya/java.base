#ifndef _java_security_IdentityScope_h_
#define _java_security_IdentityScope_h_
//$ class java.security.IdentityScope
//$ extends java.security.Identity

#include <java/security/Identity.h>

namespace java {
	namespace security {
		class Principal;
		class PublicKey;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace java {
	namespace security {

class $export IdentityScope : public ::java::security::Identity {
	$class(IdentityScope, $NO_CLASS_INIT, ::java::security::Identity)
public:
	IdentityScope();
	void init$();
	void init$($String* name);
	void init$($String* name, ::java::security::IdentityScope* scope);
	virtual void addIdentity(::java::security::Identity* identity) {}
	static void check($String* directive);
	virtual ::java::security::Identity* getIdentity($String* name) {return nullptr;}
	virtual ::java::security::Identity* getIdentity(::java::security::Principal* principal);
	virtual ::java::security::Identity* getIdentity(::java::security::PublicKey* key) {return nullptr;}
	static ::java::security::IdentityScope* getSystemScope();
	virtual ::java::util::Enumeration* identities() {return nullptr;}
	static void initializeSystemScope();
	virtual void removeIdentity(::java::security::Identity* identity) {}
	static void setSystemScope(::java::security::IdentityScope* scope);
	virtual int32_t size() {return 0;}
	using ::java::security::Identity::toString;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xDF9013F0E89A7002;
	static ::java::security::IdentityScope* scope;
};

	} // security
} // java

#endif // _java_security_IdentityScope_h_