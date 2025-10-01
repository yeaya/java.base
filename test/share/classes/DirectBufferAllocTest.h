#ifndef _DirectBufferAllocTest_h_
#define _DirectBufferAllocTest_h_
//$ class DirectBufferAllocTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CAPACITY")
#undef CAPACITY
#pragma push_macro("RUN_TIME_SECONDS")
#undef RUN_TIME_SECONDS
#pragma push_macro("MIN_THREADS")
#undef MIN_THREADS
#pragma push_macro("MAX_THREADS")
#undef MAX_THREADS

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

class $export DirectBufferAllocTest : public ::java::lang::Object {
	$class(DirectBufferAllocTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DirectBufferAllocTest();
	void init$();
	static ::java::lang::Void* lambda$main$0(int32_t pbs, int32_t cap, int32_t i);
	static ::java::util::concurrent::Callable* lambda$main$1(int32_t pbs, int32_t cap, int32_t i);
	static void main($StringArray* args);
	static const int32_t RUN_TIME_SECONDS = 5;
	static const int32_t MIN_THREADS = 4;
	static const int32_t MAX_THREADS = 64;
	static const int32_t CAPACITY = 1048576; // 1024 * 1024
};

#pragma pop_macro("CAPACITY")
#pragma pop_macro("RUN_TIME_SECONDS")
#pragma pop_macro("MIN_THREADS")
#pragma pop_macro("MAX_THREADS")

#endif // _DirectBufferAllocTest_h_