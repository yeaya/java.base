#ifndef _java_util_Calendar$1_h_
#define _java_util_Calendar$1_h_
//$ class java.util.Calendar$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Calendar;
	}
}

namespace java {
	namespace util {

class Calendar$1 : public ::java::security::PrivilegedExceptionAction {
	$class(Calendar$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Calendar$1();
	void init$(::java::util::Calendar* this$0, ::java::io::ObjectInputStream* val$input);
	virtual $Object* run() override;
	::java::util::Calendar* this$0 = nullptr;
	::java::io::ObjectInputStream* val$input = nullptr;
};

	} // util
} // java

#endif // _java_util_Calendar$1_h_