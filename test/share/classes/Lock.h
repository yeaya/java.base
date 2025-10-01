#ifndef _Lock_h_
#define _Lock_h_
//$ class Lock
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OPEN_CMD")
#undef OPEN_CMD
#pragma push_macro("LOCK_CMD")
#undef LOCK_CMD
#pragma push_macro("TERMINATOR")
#undef TERMINATOR
#pragma push_macro("CLOSE_CMD")
#undef CLOSE_CMD
#pragma push_macro("UNLOCK_CMD")
#undef UNLOCK_CMD

class Lock$LockWorkerMirror;
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}

class $export Lock : public ::java::lang::Object {
	$class(Lock, 0, ::java::lang::Object)
public:
	Lock();
	void init$();
	static void main($StringArray* args);
	static void runLockWorker(int32_t port);
	static ::Lock$LockWorkerMirror* startLockWorker();
	static void testAsyncClose(::java::io::File* file, ::Lock$LockWorkerMirror* worker);
	static void testLockProtocol(::java::io::File* file, ::Lock$LockWorkerMirror* worker);
	static ::java::util::Random* rand;
	static $String* OPEN_CMD;
	static $String* CLOSE_CMD;
	static $String* LOCK_CMD;
	static $String* UNLOCK_CMD;
	static const char16_t TERMINATOR = ((char16_t)59);
};

#pragma pop_macro("OPEN_CMD")
#pragma pop_macro("LOCK_CMD")
#pragma pop_macro("TERMINATOR")
#pragma pop_macro("CLOSE_CMD")
#pragma pop_macro("UNLOCK_CMD")

#endif // _Lock_h_