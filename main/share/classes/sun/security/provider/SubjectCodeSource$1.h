#ifndef _sun_security_provider_SubjectCodeSource$1_h_
#define _sun_security_provider_SubjectCodeSource$1_h_
//$ class sun.security.provider.SubjectCodeSource$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace provider {
			class SubjectCodeSource;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class SubjectCodeSource$1 : public ::java::security::PrivilegedAction {
	$class(SubjectCodeSource$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SubjectCodeSource$1();
	void init$(::sun::security::provider::SubjectCodeSource* this$0);
	virtual $Object* run() override;
	::sun::security::provider::SubjectCodeSource* this$0 = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SubjectCodeSource$1_h_