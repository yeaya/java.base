#ifndef _sun_security_rsa_SunRsaSign$1_h_
#define _sun_security_rsa_SunRsaSign$1_h_
//$ class sun.security.rsa.SunRsaSign$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class SunRsaSign;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class SunRsaSign$1 : public ::java::security::PrivilegedAction {
	$class(SunRsaSign$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SunRsaSign$1();
	void init$(::sun::security::rsa::SunRsaSign* this$0, ::java::util::Iterator* val$serviceIter);
	virtual $Object* run() override;
	::sun::security::rsa::SunRsaSign* this$0 = nullptr;
	::java::util::Iterator* val$serviceIter = nullptr;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_SunRsaSign$1_h_