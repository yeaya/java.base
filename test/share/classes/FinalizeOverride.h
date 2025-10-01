#ifndef _FinalizeOverride_h_
#define _FinalizeOverride_h_
//$ class FinalizeOverride
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class $export FinalizeOverride : public ::java::lang::Object {
	$class(FinalizeOverride, 0, ::java::lang::Object)
public:
	FinalizeOverride();
	void init$();
	static void main($StringArray* argvs);
	static void patchPrivateFinalize();
	static void test(Object$* o, int32_t expected);
	static ::java::util::concurrent::atomic::AtomicInteger* finalizedCount;
	static ::java::util::concurrent::atomic::AtomicInteger* finalizedSum;
	static $volatile(bool) privateFinalizeInvoked;
};

#endif // _FinalizeOverride_h_