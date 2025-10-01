#ifndef _sun_security_provider_Sun$1_h_
#define _sun_security_provider_Sun$1_h_
//$ class sun.security.provider.Sun$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			class Sun;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class Sun$1 : public ::java::security::PrivilegedAction {
	$class(Sun$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Sun$1();
	void init$(::sun::security::provider::Sun* this$0, ::java::util::Iterator* val$serviceIter);
	virtual $Object* run() override;
	::sun::security::provider::Sun* this$0 = nullptr;
	::java::util::Iterator* val$serviceIter = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_Sun$1_h_