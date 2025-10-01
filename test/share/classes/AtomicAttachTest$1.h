#ifndef _AtomicAttachTest$1_h_
#define _AtomicAttachTest$1_h_
//$ class AtomicAttachTest$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace nio {
		namespace channels {
			class SelectionKey;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

class AtomicAttachTest$1 : public ::java::lang::Thread {
	$class(AtomicAttachTest$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AtomicAttachTest$1();
	void init$(::java::nio::channels::SelectionKey* val$key, ::java::util::concurrent::atomic::AtomicInteger* val$errorCount);
	virtual void run() override;
	::java::util::concurrent::atomic::AtomicInteger* val$errorCount = nullptr;
	::java::nio::channels::SelectionKey* val$key = nullptr;
};

#endif // _AtomicAttachTest$1_h_