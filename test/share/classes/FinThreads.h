#ifndef _FinThreads_h_
#define _FinThreads_h_
//$ class FinThreads
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

class $export FinThreads : public ::java::lang::Object {
	$class(FinThreads, 0, ::java::lang::Object)
public:
	FinThreads();
	void init$();
	static void alarm($Thread* sleeper, int64_t delay);
	static void main($StringArray* args);
	static $Thread* mainThread;
	static $Object* lock;
	static $Thread* finalizerThread;
	static $Thread* finalizedBy;
};

#endif // _FinThreads_h_