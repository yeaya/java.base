#ifndef _java_util_concurrent_Phaser$QNode_h_
#define _java_util_concurrent_Phaser$QNode_h_
//$ class java.util.concurrent.Phaser$QNode
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
			class Phaser;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import Phaser$QNode : public ::java::util::concurrent::ForkJoinPool$ManagedBlocker {
	$class(Phaser$QNode, $NO_CLASS_INIT, ::java::util::concurrent::ForkJoinPool$ManagedBlocker)
public:
	Phaser$QNode();
	void init$(::java::util::concurrent::Phaser* phaser, int32_t phase, bool interruptible, bool timed, int64_t nanos);
	virtual bool block() override;
	virtual bool isReleasable() override;
	::java::util::concurrent::Phaser* phaser = nullptr;
	int32_t phase = 0;
	bool interruptible = false;
	bool timed = false;
	bool wasInterrupted = false;
	int64_t nanos = 0;
	int64_t deadline = 0;
	$volatile($Thread*) thread = nullptr;
	::java::util::concurrent::Phaser$QNode* next = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_Phaser$QNode_h_