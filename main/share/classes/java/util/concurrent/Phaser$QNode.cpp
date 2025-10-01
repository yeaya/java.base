#include <java/util/concurrent/Phaser$QNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Phaser.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ForkJoinPool$ManagedBlocker = ::java::util::concurrent::ForkJoinPool$ManagedBlocker;
using $Phaser = ::java::util::concurrent::Phaser;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Phaser$QNode_FieldInfo_[] = {
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

$MethodInfo _Phaser$QNode_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Phaser;IZZJ)V", nullptr, 0, $method(static_cast<void(Phaser$QNode::*)($Phaser*,int32_t,bool,bool,int64_t)>(&Phaser$QNode::init$))},
	{"block", "()Z", nullptr, $PUBLIC},
	{"isReleasable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Phaser$QNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.Phaser$QNode", "java.util.concurrent.Phaser", "QNode", $STATIC | $FINAL},
	{"java.util.concurrent.ForkJoinPool$ManagedBlocker", "java.util.concurrent.ForkJoinPool", "ManagedBlocker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Phaser$QNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.Phaser$QNode",
	"java.lang.Object",
	"java.util.concurrent.ForkJoinPool$ManagedBlocker",
	_Phaser$QNode_FieldInfo_,
	_Phaser$QNode_MethodInfo_,
	nullptr,
	nullptr,
	_Phaser$QNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Phaser"
};

$Object* allocate$Phaser$QNode($Class* clazz) {
	return $of($alloc(Phaser$QNode));
}

void Phaser$QNode::init$($Phaser* phaser, int32_t phase, bool interruptible, bool timed, int64_t nanos) {
	$set(this, phaser, phaser);
	this->phase = phase;
	this->interruptible = interruptible;
	this->nanos = nanos;
	this->timed = timed;
	this->deadline = timed ? $System::nanoTime() + nanos : (int64_t)0;
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
		bool var$1 = this->nanos <= (int64_t)0;
		var$0 = (var$1 || (this->nanos = this->deadline - $System::nanoTime()) <= (int64_t)0);
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
	$loadClass(Phaser$QNode, name, initialize, &_Phaser$QNode_ClassInfo_, allocate$Phaser$QNode);
	return class$;
}

$Class* Phaser$QNode::class$ = nullptr;

		} // concurrent
	} // util
} // java