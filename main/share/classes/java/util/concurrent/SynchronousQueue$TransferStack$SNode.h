#ifndef _java_util_concurrent_SynchronousQueue$TransferStack$SNode_h_
#define _java_util_concurrent_SynchronousQueue$TransferStack$SNode_h_
//$ class java.util.concurrent.SynchronousQueue$TransferStack$SNode
//$ extends java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>

#pragma push_macro("SMATCH")
#undef SMATCH
#pragma push_macro("SNEXT")
#undef SNEXT
#pragma push_macro("SWAITER")
#undef SWAITER

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

class $export SynchronousQueue$TransferStack$SNode : public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(SynchronousQueue$TransferStack$SNode, 0, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	SynchronousQueue$TransferStack$SNode();
	void init$(Object$* item);
	virtual bool block() override;
	bool casNext(::java::util::concurrent::SynchronousQueue$TransferStack$SNode* cmp, ::java::util::concurrent::SynchronousQueue$TransferStack$SNode* val);
	void forgetWaiter();
	bool isCancelled();
	virtual bool isReleasable() override;
	bool tryCancel();
	bool tryMatch(::java::util::concurrent::SynchronousQueue$TransferStack$SNode* s);
	$volatile(::java::util::concurrent::SynchronousQueue$TransferStack$SNode*) next = nullptr;
	$volatile(::java::util::concurrent::SynchronousQueue$TransferStack$SNode*) match = nullptr;
	$volatile($Thread*) waiter = nullptr;
	$Object* item = nullptr;
	int32_t mode = 0;
	static ::java::lang::invoke::VarHandle* SMATCH;
	static ::java::lang::invoke::VarHandle* SNEXT;
	static ::java::lang::invoke::VarHandle* SWAITER;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("SMATCH")
#pragma pop_macro("SNEXT")
#pragma pop_macro("SWAITER")

#endif // _java_util_concurrent_SynchronousQueue$TransferStack$SNode_h_