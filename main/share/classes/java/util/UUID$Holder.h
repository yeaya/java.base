#ifndef _java_util_UUID$Holder_h_
#define _java_util_UUID$Holder_h_
//$ class java.util.UUID$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace java {
	namespace util {

class UUID$Holder : public ::java::lang::Object {
	$class(UUID$Holder, 0, ::java::lang::Object)
public:
	UUID$Holder();
	void init$();
	static ::java::security::SecureRandom* numberGenerator;
};

	} // util
} // java

#endif // _java_util_UUID$Holder_h_