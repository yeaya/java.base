#include <java/lang/ref/Reference.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/FinalReference.h>
#include <java/lang/ref/Reference$1.h>
#include <java/lang/ref/Reference$ReferenceHandler.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jdk/internal/access/JavaLangRefAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/ref/Cleaner.h>
#include <jcpp.h>

#include <java/lang/ObjectManagerInternal.h>
using ::java::lang::ObjectManagerInternal;

#undef ENQUEUED
#undef MAX_PRIORITY
#undef NULL

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $FinalReference = ::java::lang::ref::FinalReference;
using $Reference$1 = ::java::lang::ref::Reference$1;
using $Reference$ReferenceHandler = ::java::lang::ref::Reference$ReferenceHandler;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $JavaLangRefAccess = ::jdk::internal::access::JavaLangRefAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Cleaner = ::jdk::internal::ref::Cleaner;

namespace java {
	namespace lang {
		namespace ref {

$CompoundAttribute _Reference_MethodAnnotations_get8[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Reference_Attribute_var$0[] = {
	{"since", 's', "16"},
	{}
};

$CompoundAttribute _Reference_MethodAnnotations_isEnqueued12[] = {
	{"Ljava/lang/Deprecated;", Reference_Attribute_var$0},
	{}
};

$CompoundAttribute _Reference_MethodAnnotations_reachabilityFence14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _Reference_MethodAnnotations_refersTo016[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Reference_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Reference, $assertionsDisabled)},
	{"referent", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(Reference, referent)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<-TT;>;", $VOLATILE, $field(Reference, queue)},
	{"next", "Ljava/lang/ref/Reference;", nullptr, $VOLATILE, $field(Reference, next)},
	{"discovered", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<*>;", $PRIVATE | $TRANSIENT, $field(Reference, discovered)},
	{"processPendingLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Reference, processPendingLock)},
	{"processPendingActive", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Reference, processPendingActive)},
	{}
};

$MethodInfo _Reference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(Reference, init$, void, Object$*)},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", 0, $method(Reference, init$, void, Object$*, $ReferenceQueue*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(Reference, clear, void)},
	{"clear0", "()V", nullptr, $PRIVATE | $NATIVE, $method(Reference, clear0, void)},
	{"clearInactiveFinalReference", "()V", nullptr, 0, $virtualMethod(Reference, clearInactiveFinalReference, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Reference, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"enqueue", "()Z", nullptr, $PUBLIC, $virtualMethod(Reference, enqueue, bool)},
	{"enqueueFromPending", "()V", nullptr, $PRIVATE, $method(Reference, enqueueFromPending, void)},
	{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Reference, get, $Object*), nullptr, nullptr, _Reference_MethodAnnotations_get8},
	{"getAndClearReferencePendingList", "()Ljava/lang/ref/Reference;", "()Ljava/lang/ref/Reference<*>;", $PRIVATE | $STATIC | $NATIVE, $staticMethod(Reference, getAndClearReferencePendingList, Reference*)},
	{"getFromInactiveFinalReference", "()Ljava/lang/Object;", "()TT;", 0, $virtualMethod(Reference, getFromInactiveFinalReference, $Object*)},
	{"hasReferencePendingList", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Reference, hasReferencePendingList, bool)},
	{"isEnqueued", "()Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(Reference, isEnqueued, bool), nullptr, nullptr, _Reference_MethodAnnotations_isEnqueued12},
	{"processPendingReferences", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Reference, processPendingReferences, void)},
	{"reachabilityFence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Reference, reachabilityFence, void, Object$*), nullptr, nullptr, _Reference_MethodAnnotations_reachabilityFence14},
	{"refersTo", "(Ljava/lang/Object;)Z", "(TT;)Z", $PUBLIC | $FINAL, $method(Reference, refersTo, bool, Object$*)},
	{"refersTo0", "(Ljava/lang/Object;)Z", nullptr, $NATIVE, $virtualMethod(Reference, refersTo0, bool, Object$*), nullptr, nullptr, _Reference_MethodAnnotations_refersTo016},
	{"waitForReferencePendingList", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Reference, waitForReferencePendingList, void)},
	{"waitForReferenceProcessing", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Reference, waitForReferenceProcessing, bool), "java.lang.InterruptedException"},
	{}
};

#define _METHOD_INDEX_clear0 3
#define _METHOD_INDEX_getAndClearReferencePendingList 9
#define _METHOD_INDEX_hasReferencePendingList 11
#define _METHOD_INDEX_refersTo0 16
#define _METHOD_INDEX_waitForReferencePendingList 17

$InnerClassInfo _Reference_InnerClassesInfo_[] = {
	{"java.lang.ref.Reference$ReferenceHandler", "java.lang.ref.Reference", "ReferenceHandler", $PRIVATE | $STATIC},
	{"java.lang.ref.Reference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.ref.Reference",
	"java.lang.Object",
	nullptr,
	_Reference_FieldInfo_,
	_Reference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Reference_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.ref.Reference$ReferenceHandler,java.lang.ref.Reference$1"
};

$Object* allocate$Reference($Class* clazz) {
	return $of($alloc(Reference));
}

bool Reference::$assertionsDisabled = false;
$Object* Reference::processPendingLock = nullptr;
bool Reference::processPendingActive = false;

Reference* Reference::getAndClearReferencePendingList() {
	return ObjectManagerInternal::getAndClearReferencePendingList();
}

bool Reference::hasReferencePendingList() {
	return ObjectManagerInternal::hasReferencePendingList();
}

void Reference::waitForReferencePendingList() {
	ObjectManagerInternal::waitForReferencePendingList();
}

void Reference::enqueueFromPending() {
	$var($ReferenceQueue, q, this->queue);
	$init($ReferenceQueue);
	if (q != $ReferenceQueue::NULL) {
		$nc(q)->enqueue(this);
	}
}

void Reference::processPendingReferences() {
	$init(Reference);
	$useLocalCurrentObjectStackCache();
	waitForReferencePendingList();
	$var(Reference, pendingList, nullptr);
	$synchronized(Reference::processPendingLock) {
		$assign(pendingList, getAndClearReferencePendingList());
		Reference::processPendingActive = true;
	}
	while (pendingList != nullptr) {
		$var(Reference, ref, pendingList);
		$assign(pendingList, ref->discovered);
		$set(ref, discovered, nullptr);
		if ($instanceOf($Cleaner, ref)) {
			$nc(($cast($Cleaner, ref)))->clean();
			$synchronized(Reference::processPendingLock) {
				$nc($of(Reference::processPendingLock))->notifyAll();
			}
		} else {
			ref->enqueueFromPending();
		}
	}
	$synchronized(Reference::processPendingLock) {
		Reference::processPendingActive = false;
		$nc($of(Reference::processPendingLock))->notifyAll();
	}
}

bool Reference::waitForReferenceProcessing() {
	$init(Reference);
	$synchronized(Reference::processPendingLock) {
		if (Reference::processPendingActive || hasReferencePendingList()) {
			$nc($of(Reference::processPendingLock))->wait();
			return true;
		} else {
			return false;
		}
	}
}

$Object* Reference::get() {
	$var($Object, referent, this->referent);
	if (referent == this->referent) {
		return referent;
	}
	return nullptr;
}

bool Reference::refersTo(Object$* obj) {
	return refersTo0(obj);
}

bool Reference::refersTo0(Object$* referent) {
	return $equals(this->referent, referent);
}

void Reference::clear() {
	clear0();
}

void Reference::clear0() {
	$set(this, referent, nullptr);
}

$Object* Reference::getFromInactiveFinalReference() {
	if (!Reference::$assertionsDisabled && !$instanceOf($FinalReference, this)) {
		$throwNew($AssertionError);
	}
	if (!Reference::$assertionsDisabled && !(this->next != nullptr)) {
		$throwNew($AssertionError);
	}
	return $of(this->referent);
}

void Reference::clearInactiveFinalReference() {
	if (!Reference::$assertionsDisabled && !$instanceOf($FinalReference, this)) {
		$throwNew($AssertionError);
	}
	if (!Reference::$assertionsDisabled && !(this->next != nullptr)) {
		$throwNew($AssertionError);
	}
	$set(this, referent, nullptr);
}

bool Reference::isEnqueued() {
	$init($ReferenceQueue);
	return (this->queue == $ReferenceQueue::ENQUEUED);
}

bool Reference::enqueue() {
	clear0();
	return $nc(this->queue)->enqueue(this);
}

$Object* Reference::clone() {
	$throwNew($CloneNotSupportedException);
	$shouldNotReachHere();
}

void Reference::init$(Object$* referent) {
	Reference::init$(referent, nullptr);
}

void Reference::init$(Object$* referent, $ReferenceQueue* queue) {
	$set(this, referent, referent);
	$init($ReferenceQueue);
	$set(this, queue, (queue == nullptr) ? $ReferenceQueue::NULL : queue);
}

void Reference::reachabilityFence(Object$* ref) {
	$init(Reference);
}

void clinit$Reference($Class* class$) {
	$useLocalCurrentObjectStackCache();
	Reference::$assertionsDisabled = !Reference::class$->desiredAssertionStatus();
	$assignStatic(Reference::processPendingLock, $new($Object));
	Reference::processPendingActive = false;
	{
		$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
		{
			$var($ThreadGroup, tgn, tg);
			for (; tgn != nullptr; $assign(tg, tgn), $assign(tgn, $nc(tg)->getParent())) {
			}
		}
		$var($Thread, handler, $new($Reference$ReferenceHandler, tg, "Reference Handler"_s));
		handler->setPriority($Thread::MAX_PRIORITY);
		handler->setDaemon(true);
		handler->start();
		$SharedSecrets::setJavaLangRefAccess($$new($Reference$1));
	}
}

Reference::Reference() {
}

$Class* Reference::load$($String* name, bool initialize) {
	$loadClass(Reference, name, initialize, &_Reference_ClassInfo_, clinit$Reference, allocate$Reference);
	return class$;
}

$Class* Reference::class$ = nullptr;

		} // ref
	} // lang
} // java