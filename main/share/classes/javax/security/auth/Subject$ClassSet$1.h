#ifndef _javax_security_auth_Subject$ClassSet$1_h_
#define _javax_security_auth_Subject$ClassSet$1_h_
//$ class javax.security.auth.Subject$ClassSet$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject$ClassSet;
		}
	}
}

namespace javax {
	namespace security {
		namespace auth {

class Subject$ClassSet$1 : public ::java::security::PrivilegedAction {
	$class(Subject$ClassSet$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Subject$ClassSet$1();
	void init$(::javax::security::auth::Subject$ClassSet* this$1, ::java::util::Iterator* val$iterator);
	virtual $Object* run() override;
	::javax::security::auth::Subject$ClassSet* this$1 = nullptr;
	::java::util::Iterator* val$iterator = nullptr;
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Subject$ClassSet$1_h_