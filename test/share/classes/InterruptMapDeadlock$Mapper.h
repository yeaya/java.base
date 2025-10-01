#ifndef _InterruptMapDeadlock$Mapper_h_
#define _InterruptMapDeadlock$Mapper_h_
//$ class InterruptMapDeadlock$Mapper
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
namespace java {
	namespace util {
		namespace concurrent {
			class Semaphore;
		}
	}
}

class $export InterruptMapDeadlock$Mapper : public ::java::lang::Thread {
	$class(InterruptMapDeadlock$Mapper, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	InterruptMapDeadlock$Mapper();
	void init$(::java::nio::channels::FileChannel* fc, ::java::util::concurrent::Semaphore* gate);
	virtual ::java::lang::Exception* exception();
	virtual void run() override;
	static ::InterruptMapDeadlock$Mapper* startMapper(::java::nio::channels::FileChannel* fc, ::java::util::concurrent::Semaphore* gate);
	::java::nio::channels::FileChannel* fc = nullptr;
	::java::util::concurrent::Semaphore* gate = nullptr;
	$volatile(::java::lang::Exception*) exception$ = nullptr;
};

#endif // _InterruptMapDeadlock$Mapper_h_