#ifndef _ParallelProbes_h_
#define _ParallelProbes_h_
//$ class ParallelProbes
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("REPEATS")
#undef REPEATS

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

class $export ParallelProbes : public ::java::lang::Object {
	$class(ParallelProbes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ParallelProbes();
	void init$(int32_t numThreads);
	::java::lang::Runnable* createRunnable(::java::nio::file::Path* p);
	::java::nio::file::Path* createTmpFile();
	virtual void join();
	static void main($StringArray* args);
	virtual void start();
	static const int32_t REPEATS = 1000;
	int32_t numThreads = 0;
	::java::util::ArrayList* threads = nullptr;
};

#pragma pop_macro("REPEATS")

#endif // _ParallelProbes_h_