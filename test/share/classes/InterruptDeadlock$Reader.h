#ifndef _InterruptDeadlock$Reader_h_
#define _InterruptDeadlock$Reader_h_
//$ class InterruptDeadlock$Reader
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
		}
	}
}

class $export InterruptDeadlock$Reader : public ::java::lang::Thread {
	$class(InterruptDeadlock$Reader, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	InterruptDeadlock$Reader();
	void init$(::java::nio::channels::FileChannel* fc);
	virtual ::java::lang::Exception* exception();
	virtual void run() override;
	static ::InterruptDeadlock$Reader* startReader(::java::nio::channels::FileChannel* fc);
	::java::nio::channels::FileChannel* fc = nullptr;
	$volatile(::java::lang::Exception*) exception$ = nullptr;
};

#endif // _InterruptDeadlock$Reader_h_