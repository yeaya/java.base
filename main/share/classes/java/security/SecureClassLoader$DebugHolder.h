#ifndef _java_security_SecureClassLoader$DebugHolder_h_
#define _java_security_SecureClassLoader$DebugHolder_h_
//$ class java.security.SecureClassLoader$DebugHolder
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

class SecureClassLoader$DebugHolder : public ::java::lang::Object {
	$class(SecureClassLoader$DebugHolder, 0, ::java::lang::Object)
public:
	SecureClassLoader$DebugHolder();
	void init$();
	static ::sun::security::util::Debug* debug;
};

	} // security
} // java

#endif // _java_security_SecureClassLoader$DebugHolder_h_