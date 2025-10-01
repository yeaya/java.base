#ifndef _java_util_concurrent_SynchronousQueue$TransferQueue$QNode_h_
#define _java_util_concurrent_SynchronousQueue$TransferQueue$QNode_h_
//$ class java.util.concurrent.SynchronousQueue$TransferQueue$QNode
//$ extends java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>

#pragma push_macro("QITEM")
#undef QITEM
#pragma push_macro("QWAITER")
#undef QWAITER
#pragma push_macro("QNEXT")
#undef QNEXT

namespace java {
	namespace lang {
		class Thread;
	}
}
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

class $import SynchronousQueue$TransferQueue$QNode : public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(SynchronousQueue$TransferQueue$QNode, 0, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	SynchronousQueue$TransferQueue$QNode();
	void init$(Object$* item, bool isData);
	virtual bool block() override;
	bool casItem(Object$* cmp, Object$* val);
	bool casNext(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* cmp, ::java::util::concurrent::SynchronousQueue$TransferQueue$QNode* val);
	void forgetWaiter();
	bool isCancelled();
	bool isFulfilled();
	bool isOffList();
	virtual bool isReleasable() override;
	bool tryCancel(Object$* cmp);
	$volatile(::java::util::concurrent::SynchronousQueue$TransferQueue$QNode*) next = nullptr;
	$volatile($Object*) item = nullptr;
	$volatile($Thread*) waiter = nullptr;
	bool isData = false;
	static ::java::lang::invoke::VarHandle* QITEM;
	static ::java::lang::invoke::VarHandle* QNEXT;
	static ::java::lang::invoke::VarHandle* QWAITER;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("QITEM")
#pragma pop_macro("QWAITER")
#pragma pop_macro("QNEXT")

#endif // _java_util_concurrent_SynchronousQueue$TransferQueue$QNode_h_