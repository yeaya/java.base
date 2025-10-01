#ifndef _CloseRace_h_
#define _CloseRace_h_
//$ class CloseRace
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BIG_FILE")
#undef BIG_FILE

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export CloseRace : public ::java::lang::Object {
	$class(CloseRace, 0, ::java::lang::Object)
public:
	CloseRace();
	void init$();
	static int32_t count($booleans* bits);
	static void dumpAllStacks();
	static bool fdInUse(int32_t i);
	static void lambda$main$0($Thread* t, $Throwable* e);
	static void main($StringArray* args);
	static $booleans* procFDsInUse();
	static $String* BIG_FILE;
	static $ints* procFDs;
	static int32_t testDurationSeconds;
	static ::java::util::concurrent::CountDownLatch* threadsStarted;
};

#pragma pop_macro("BIG_FILE")

#endif // _CloseRace_h_