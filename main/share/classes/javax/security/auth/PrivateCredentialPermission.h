#ifndef _javax_security_auth_PrivateCredentialPermission_h_
#define _javax_security_auth_PrivateCredentialPermission_h_
//$ class javax.security.auth.PrivateCredentialPermission
//$ extends java.security.Permission

#include <java/lang/Array.h>
#include <java/security/Permission.h>

#pragma push_macro("EMPTY_PRINCIPALS")
#undef EMPTY_PRINCIPALS

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class PermissionCollection;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class PrivateCredentialPermission$CredOwner;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class $export PrivateCredentialPermission : public ::java::security::Permission {
	$class(PrivateCredentialPermission, 0, ::java::security::Permission)
public:
	PrivateCredentialPermission();
	void init$($String* credentialClass, ::java::util::Set* principals);
	void init$($String* name, $String* actions);
	virtual bool equals(Object$* obj) override;
	virtual $String* getActions() override;
	$String* getCredentialClass();
	$Array<::java::lang::String, 2>* getPrincipals();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	bool impliesCredentialClass($String* thisC, $String* thatC);
	bool impliesPrincipalSet($Array<::javax::security::auth::PrivateCredentialPermission$CredOwner>* thisP, $Array<::javax::security::auth::PrivateCredentialPermission$CredOwner>* thatP);
	void init($String* name);
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x4955DC777B507F4C;
	static $Array<::javax::security::auth::PrivateCredentialPermission$CredOwner>* EMPTY_PRINCIPALS;
	$String* credentialClass = nullptr;
	::java::util::Set* principals = nullptr;
	$Array<::javax::security::auth::PrivateCredentialPermission$CredOwner>* credOwners = nullptr;
	bool testing = false;
};

		} // auth
	} // security
} // javax

#pragma pop_macro("EMPTY_PRINCIPALS")

#endif // _javax_security_auth_PrivateCredentialPermission_h_