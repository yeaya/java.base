#ifndef _sun_security_jca_ProviderConfig$ProviderLoader$1_h_
#define _sun_security_jca_ProviderConfig$ProviderLoader$1_h_
//$ class sun.security.jca.ProviderConfig$ProviderLoader$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace security {
		namespace jca {
			class ProviderConfig$ProviderLoader;
		}
	}
}

namespace sun {
	namespace security {
		namespace jca {

class ProviderConfig$ProviderLoader$1 : public ::java::security::PrivilegedExceptionAction {
	$class(ProviderConfig$ProviderLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ProviderConfig$ProviderLoader$1();
	void init$(::sun::security::jca::ProviderConfig$ProviderLoader* this$0, $Class* val$provClass);
	virtual $Object* run() override;
	::sun::security::jca::ProviderConfig$ProviderLoader* this$0 = nullptr;
	$Class* val$provClass = nullptr;
};

		} // jca
	} // security
} // sun

#endif // _sun_security_jca_ProviderConfig$ProviderLoader$1_h_