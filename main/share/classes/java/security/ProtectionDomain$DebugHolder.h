#ifndef _java_security_ProtectionDomain$DebugHolder_h_
#define _java_security_ProtectionDomain$DebugHolder_h_
//$ class java.security.ProtectionDomain$DebugHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class ProtectionDomain$DebugHolder : public ::java::lang::Object {
	$class(ProtectionDomain$DebugHolder, 0, ::java::lang::Object)
public:
	ProtectionDomain$DebugHolder();
	void init$();
	static ::sun::security::util::Debug* debug;
};

	} // security
} // java

#endif // _java_security_ProtectionDomain$DebugHolder_h_