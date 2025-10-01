#ifndef _javax_security_auth_PrivateCredentialPermission$CredOwner_h_
#define _javax_security_auth_PrivateCredentialPermission$CredOwner_h_
//$ class javax.security.auth.PrivateCredentialPermission$CredOwner
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace security {
		namespace auth {

class $import PrivateCredentialPermission$CredOwner : public ::java::io::Serializable {
	$class(PrivateCredentialPermission$CredOwner, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	PrivateCredentialPermission$CredOwner();
	void init$($String* principalClass, $String* principalName);
	virtual bool implies(Object$* obj);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xB22E5616B9037436;
	$String* principalClass = nullptr;
	$String* principalName = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_PrivateCredentialPermission$CredOwner_h_