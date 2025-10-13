#ifndef _java_util_concurrent_SynchronousQueue$TransferQueue_h_
#define _java_util_concurrent_SynchronousQueue$TransferQueue_h_
//$ class java.util.concurrent.SynchronousQueue$TransferQueue
//$ extends java.util.concurrent.SynchronousQueue$Transferer

#include <java/util/concurrent/SynchronousQueue$Transferer.h>

#pragma push_macro("QCLEANME")
#undef QCLEANME
#pragma push_macro("QHEAD")
#undef QHEAD
#pragma push_macro("QTAIL")
#undef QTAIL

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class SynchronousQueue$TransferQueue$QNode;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export SynchronousQueue$TransferQueue : public ::java::util::concurrent::SynchronousQueue$Transferer {
	$class(SynchronousQueue$TransferQueue, 0, ::java::util::concurrent::SynchronousQueue$Transferer)
public:
	SynchronousQueue$TransferQueue();
	void init$();
	void advanceHead(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* h, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* nh);
	void advanceTail(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* t, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* nt);
	bool casCleanMe(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* cmp, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* val);
	void clean(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* pred, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* s);
	virtual $Object* transfer(Object$* e, bool timed, int64_t nanos) override;
	$volatile(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode*) head = nullptr;
	$volatile(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode*) tail = nullptr;
	$volatile(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode*) cleanMe = nullptr;
	static ::java::lang::invoke::VarHandle* QHEAD;
	static ::java::lang::invoke::VarHandle* QTAIL;
	static ::java::lang::invoke::VarHandle* QCLEANME;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("QCLEANME")
#pragma pop_macro("QHEAD")
#pragma pop_macro("QTAIL")

#endif // _java_util_concurrent_SynchronousQueue$TransferQueue_h_