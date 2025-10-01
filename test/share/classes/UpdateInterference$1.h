#ifndef _UpdateInterference$1_h_
#define _UpdateInterference$1_h_
//$ class UpdateInterference$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

class UpdateInterference$1 : public ::java::lang::Thread {
	$class(UpdateInterference$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	UpdateInterference$1();
	void init$(::java::nio::file::Path* val$foo);
	virtual void run() override;
	::java::nio::file::Path* val$foo = nullptr;
};

#endif // _UpdateInterference$1_h_