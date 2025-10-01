#ifndef _javax_security_auth_Refreshable_h_
#define _javax_security_auth_Refreshable_h_
//$ interface javax.security.auth.Refreshable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace security {
		namespace auth {

class $import Refreshable : public ::java::lang::Object {
	$interface(Refreshable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isCurrent() {return false;}
	virtual void refresh() {}
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_Refreshable_h_