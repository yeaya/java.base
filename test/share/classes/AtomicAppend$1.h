#ifndef _AtomicAppend$1_h_
#define _AtomicAppend$1_h_
//$ class AtomicAppend$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class File;
	}
}

class AtomicAppend$1 : public ::java::lang::Runnable {
	$class(AtomicAppend$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AtomicAppend$1();
	void init$(::java::io::File* val$file);
	virtual void run() override;
	::java::io::File* val$file = nullptr;
};

#endif // _AtomicAppend$1_h_