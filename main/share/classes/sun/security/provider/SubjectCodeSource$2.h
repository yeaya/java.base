#ifndef _sun_security_provider_SubjectCodeSource$2_h_
#define _sun_security_provider_SubjectCodeSource$2_h_
//$ class sun.security.provider.SubjectCodeSource$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}
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

class SubjectCodeSource$2 : public ::java::security::PrivilegedAction {
	$class(SubjectCodeSource$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SubjectCodeSource$2();
	void init$(::sun::security::provider::SubjectCodeSource* this$0, ::javax::security::auth::Subject* val$finalSubject);
	virtual $Object* run() override;
	::sun::security::provider::SubjectCodeSource* this$0 = nullptr;
	::javax::security::auth::Subject* val$finalSubject = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_SubjectCodeSource$2_h_