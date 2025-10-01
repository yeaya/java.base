#ifndef _Truncate$3_h_
#define _Truncate$3_h_
//$ class Truncate$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

class Truncate$3 : public ::java::lang::Runnable {
	$class(Truncate$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Truncate$3();
	void init$(::java::util::concurrent::Callable* val$c);
	virtual void run() override;
	::java::util::concurrent::Callable* val$c = nullptr;
};

#endif // _Truncate$3_h_