#ifndef _LotsOfCloses_h_
#define _LotsOfCloses_h_
//$ class LotsOfCloses
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RAND")
#undef RAND

namespace java {
	namespace lang {
		class Boolean;
		class Void;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
			class WatchService;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class ExecutorService;
		}
	}
}

class $export LotsOfCloses : public ::java::lang::Object {
	$class(LotsOfCloses, 0, ::java::lang::Object)
public:
	LotsOfCloses();
	void init$();
	static ::java::lang::Void* lambda$newCloserTask$0(::java::nio::file::WatchService* watcher);
	static ::java::lang::Boolean* lambda$newRegisterTask$1(::java::nio::file::Path* dir, ::java::nio::file::WatchService* watcher);
	static void main($StringArray* args);
	static ::java::util::concurrent::Callable* newCloserTask(::java::nio::file::WatchService* watcher);
	static ::java::util::concurrent::Callable* newRegisterTask(::java::nio::file::WatchService* watcher, ::java::nio::file::Path* dir);
	static void test(::java::nio::file::Path* dir, ::java::util::concurrent::ExecutorService* pool);
	static ::java::util::Random* RAND;
};

#pragma pop_macro("RAND")

#endif // _LotsOfCloses_h_