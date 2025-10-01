#ifndef _sun_security_provider_PolicyFile$SelfPermission_h_
#define _sun_security_provider_PolicyFile$SelfPermission_h_
//$ class sun.security.provider.PolicyFile$SelfPermission
//$ extends java.security.Permission

#include <java/lang/Array.h>
#include <java/security/Permission.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class PolicyFile$SelfPermission : public ::java::security::Permission {
	$class(PolicyFile$SelfPermission, $NO_CLASS_INIT, ::java::security::Permission)
public:
	PolicyFile$SelfPermission();
	void init$($String* type, $String* name, $String* actions, $Array<::java::security::cert::Certificate>* certs);
	virtual bool equals(Object$* obj) override;
	virtual $String* getActions() override;
	virtual $Array<::java::security::cert::Certificate>* getCerts();
	virtual $String* getSelfActions();
	virtual $String* getSelfName();
	virtual $String* getSelfType();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x8C992FE429857E2A;
	$String* type = nullptr;
	$String* name = nullptr;
	$String* actions = nullptr;
	$Array<::java::security::cert::Certificate>* certs = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$SelfPermission_h_