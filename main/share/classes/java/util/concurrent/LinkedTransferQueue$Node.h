#ifndef _java_util_concurrent_LinkedTransferQueue$Node_h_
#define _java_util_concurrent_LinkedTransferQueue$Node_h_
//$ class java.util.concurrent.LinkedTransferQueue$Node
//$ extends java.util.concurrent.ForkJoinPool$ManagedBlocker

#include <java/util/concurrent/ForkJoinPool$ManagedBlocker.h>

namespace java {
	namespace lang {
		class Thread;
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export LinkedTransferQueue$Node : public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(LinkedTransferQueue$Node, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	LinkedTransferQueue$Node();
	void init$(Object$* item);
	void init$();
	void appendRelaxed(::java::util::concurrent::LinkedTransferQueue$Node* next);
	virtual bool block() override;
	bool cannotPrecede(bool haveData);
	bool casItem(Object$* cmp, Object$* val);
	bool casNext(::java::util::concurrent::LinkedTransferQueue$Node* cmp, ::java::util::concurrent::LinkedTransferQueue$Node* val);
	bool isMatched();
	virtual bool isReleasable() override;
	void selfLink();
	bool tryMatch(Object$* cmp, Object$* val);
	bool isData = false;
	$volatile($Object*) item = nullptr;
	$volatile(::java::util::concurrent::LinkedTransferQueue$Node*) next = nullptr;
	$volatile($Thread*) waiter = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xD1261C33B18E3356;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_LinkedTransferQueue$Node_h_