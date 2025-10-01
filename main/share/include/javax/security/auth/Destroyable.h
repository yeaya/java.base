#ifndef _javax_security_auth_Destroyable_h_
#define _javax_security_auth_Destroyable_h_
//$ interface javax.security.auth.Destroyable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace security {
		namespace auth {

class $import Destroyable : public ::java::lang::Object {
	$interface(Destroyable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void destroy();
	virtual bool isDestroyed();
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Destroyable_h_