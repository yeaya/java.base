#ifndef _java_io_Console$1_h_
#define _java_io_Console$1_h_
//$ class java.io.Console$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class Console;
	}
}

namespace java {
	namespace io {

class Console$1 : public ::java::lang::Runnable {
	$class(Console$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Console$1();
	void init$(::java::io::Console* this$0);
	virtual void run() override;
	::java::io::Console* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_Console$1_h_