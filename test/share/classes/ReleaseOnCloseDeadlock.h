#ifndef _ReleaseOnCloseDeadlock_h_
#define _ReleaseOnCloseDeadlock_h_
//$ class ReleaseOnCloseDeadlock
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOCK_COUNT")
#undef LOCK_COUNT

namespace java {
	namespace nio {
		namespace channels {
			class Channel;
			class FileLock;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class $export ReleaseOnCloseDeadlock : public ::java::lang::Object {
	$class(ReleaseOnCloseDeadlock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReleaseOnCloseDeadlock();
	void init$();
	static void main($StringArray* args);
	static void test(::java::nio::file::Path* file);
	static void tryToDeadlock(::java::nio::channels::Channel* channel, $Array<::java::nio::channels::FileLock>* locks);
	static const int32_t LOCK_COUNT = 1024;
};

#pragma pop_macro("LOCK_COUNT")

#endif // _ReleaseOnCloseDeadlock_h_