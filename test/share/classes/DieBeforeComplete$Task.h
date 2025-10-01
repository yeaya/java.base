#ifndef _DieBeforeComplete$Task_h_
#define _DieBeforeComplete$Task_h_
//$ interface DieBeforeComplete$Task
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Future;
		}
	}
}

class $export DieBeforeComplete$Task : public ::java::lang::Object {
	$interface(DieBeforeComplete$Task, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::concurrent::Future* run() {return nullptr;}
};

#endif // _DieBeforeComplete$Task_h_