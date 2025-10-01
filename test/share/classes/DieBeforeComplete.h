#ifndef _DieBeforeComplete_h_
#define _DieBeforeComplete_h_
//$ class DieBeforeComplete
//$ extends java.lang.Object

#include <java/lang/Array.h>

class DieBeforeComplete$Task;
namespace java {
	namespace util {
		namespace concurrent {
			class Future;
		}
	}
}

class $export DieBeforeComplete : public ::java::lang::Object {
	$class(DieBeforeComplete, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DieBeforeComplete();
	void init$();
	static ::java::util::concurrent::Future* initiateAndDie(::DieBeforeComplete$Task* task);
	static void main($StringArray* args);
};

#endif // _DieBeforeComplete_h_