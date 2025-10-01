#ifndef _java_io_DeleteOnExitHook$1_h_
#define _java_io_DeleteOnExitHook$1_h_
//$ class java.io.DeleteOnExitHook$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {

class DeleteOnExitHook$1 : public ::java::lang::Runnable {
	$class(DeleteOnExitHook$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DeleteOnExitHook$1();
	void init$();
	virtual void run() override;
};

	} // io
} // java

#endif // _java_io_DeleteOnExitHook$1_h_