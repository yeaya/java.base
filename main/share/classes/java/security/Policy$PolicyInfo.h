#ifndef _java_security_Policy$PolicyInfo_h_
#define _java_security_Policy$PolicyInfo_h_
//$ class java.security.Policy$PolicyInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Policy;
	}
}

namespace java {
	namespace security {

class Policy$PolicyInfo : public ::java::lang::Object {
	$class(Policy$PolicyInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Policy$PolicyInfo();
	void init$(::java::security::Policy* policy, bool initialized);
	::java::security::Policy* policy = nullptr;
	bool initialized = false;
};

	} // security
} // java

#endif // _java_security_Policy$PolicyInfo_h_