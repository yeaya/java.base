#ifndef _TLRemoveTest$2_h_
#define _TLRemoveTest$2_h_
//$ class TLRemoveTest$2
//$ extends java.lang.Thread

#include <java/lang/Array.h>
#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

class TLRemoveTest$2 : public ::java::lang::Thread {
	$class(TLRemoveTest$2, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	TLRemoveTest$2();
	void init$(int32_t val$threadId, $ints* val$removeNode, $ints* val$removeAndSet, $ints* val$x, $Array<::java::lang::Throwable>* val$exceptions);
	virtual void run() override;
	$Array<::java::lang::Throwable>* val$exceptions = nullptr;
	$ints* val$x = nullptr;
	$ints* val$removeAndSet = nullptr;
	$ints* val$removeNode = nullptr;
	int32_t val$threadId = 0;
};

#endif // _TLRemoveTest$2_h_