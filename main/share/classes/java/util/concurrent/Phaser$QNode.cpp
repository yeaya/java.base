#include <java/util/concurrent/Phaser$QNode.h>
#include <java/util/concurrent/Phaser.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Phaser = ::java::util::concurrent::Phaser;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {

void Phaser$QNode::init$($Phaser* phaser, int32_t phase, bool interruptible, bool timed, int64_t nanos) {
	$set(this, phaser, phaser);
	this->phase = phase;
	this->interruptible = interruptible;
	this->nanos = nanos;
	this->timed = timed;
	this->deadline = timed ? $System::nanoTime() + nanos : 0;
	$set(this, thread, $Thread::currentThread());
}

bool Phaser$QNode::isReleasable() {
	if (this->thread == nullptr) {
		return true;
	}
	if ($nc(this->phaser)->getPhase() != this->phase) {
		$set(this, thread, nullptr);
		return true;
	}
	if ($Thread::interrupted()) {
		this->wasInterrupted = true;
	}
	if (this->wasInterrupted && this->interruptible) {
		$set(this, thread, nullptr);
		return true;
	}
	bool var$0 = this->timed;
	if (var$0) {
		bool var$1 = this->nanos <= 0;
		var$0 = var$1 || (this->nanos = this->deadline - $System::nanoTime()) <= 0;
	}
	if (var$0) {
		$set(this, thread, nullptr);
		return true;
	}
	return false;
}

bool Phaser$QNode::block() {
	while (!isReleasable()) {
		if (this->timed) {
			$LockSupport::parkNanos(this, this->nanos);
		} else {
			$LockSupport::park(this);
		}
	}
	return true;
}

Phaser$QNode::Phaser$QNode() {
}

$Class* Phaser$QNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"phaser", "Ljava/util/concurrent/Phaser;", nullptr, $FINAL, $field(Phaser$QNode, phaser)},
		{"phase", "I", nullptr, $FINAL, $field(Phaser$QNode, phase)},
		{"interruptible", "Z", nullptr, $FINAL, $field(Phaser$QNode, interruptible)},
		{"timed", "Z", nullptr, $FINAL, $field(Phaser$QNode, timed)},
		{"wasInterrupted", "Z", nullptr, 0, $field(Phaser$QNode, wasInterrupted)},
		{"nanos", "J", nullptr, 0, $field(Phaser$QNode, nanos)},
		{"deadline", "J", nullptr, $FINAL, $field(Phaser$QNode, deadline)},
		{"thread", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(Phaser$QNode, thread)},
		{"next", "Ljava/util/concurrent/Phaser$QNode;", nullptr, 0, $field(Phaser$QNode, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Phaser;IZZJ)V", nullptr, 0, $method(Phaser$QNode, init$, void, $Phaser*, int32_t, bool, bool, int64_t)},
		{"block", "()Z", nullptr, $PUBLIC, $virtualMethod(Phaser$QNode, block, bool)},
		{"isReleasable", "()Z", nullptr, $PUBLIC, $virtualMethod(Phaser$QNode, isReleasable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Phaser$QNode", "java.util.concurrent.Phaser", "QNode", $STATIC | $FINAL},
		{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.concurrent.Phaser$QNode",
		"java.lang.Object",
		"java.util.concurrent.ForkJoinPool$ManagedBlocker",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.Phaser"
	};
	$loadClass(Phaser$QNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Phaser$QNode);
	});
	return class$;
}

$Class* Phaser$QNode::class$ = nullptr;

		} // concurrent
	} // util
} // java