#ifndef _sun_security_provider_certpath_State_h_
#define _sun_security_provider_certpath_State_h_
//$ interface sun.security.provider.certpath.State
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class State : public ::java::lang::Cloneable {
	$interface(State, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual $Object* clone() override;
	virtual bool isInitial() {return false;}
	virtual bool keyParamsNeeded() {return false;}
	virtual void updateState(::java::security::cert::X509Certificate* cert) {}
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_State_h_