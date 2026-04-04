#include <java/lang/ref/Finalizer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/FinalReference.h>
#include <java/lang/ref/Finalizer$1.h>
#include <java/lang/ref/Finalizer$2.h>
#include <java/lang/ref/Finalizer$FinalizerThread.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessController.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $FinalReference = ::java::lang::ref::FinalReference;
using $Finalizer$1 = ::java::lang::ref::Finalizer$1;
using $Finalizer$2 = ::java::lang::ref::Finalizer$2;
using $Finalizer$FinalizerThread = ::java::lang::ref::Finalizer$FinalizerThread;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AccessController = ::java::security::AccessController;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {
		namespace ref {

bool Finalizer::$assertionsDisabled = false;
$ReferenceQueue* Finalizer::queue = nullptr;
Finalizer* Finalizer::unfinalized = nullptr;
$Object* Finalizer::lock = nullptr;

void Finalizer::init$(Object$* finalizee) {
	$FinalReference::init$(finalizee, Finalizer::queue);
	$synchronized(Finalizer::lock) {
		if (Finalizer::unfinalized != nullptr) {
			$set(this, next, Finalizer::unfinalized);
			$set(Finalizer::unfinalized, prev, this);
		}
		$assignStatic(Finalizer::unfinalized, this);
	}
}

$ReferenceQueue* Finalizer::getQueue() {
	$init(Finalizer);
	return Finalizer::queue;
}

void Finalizer::register$(Object$* finalizee) {
	$init(Finalizer);
	$new(Finalizer, finalizee);
}

void Finalizer::runFinalizer($JavaLangAccess* jla) {
	$synchronized(Finalizer::lock) {
		if (this->next == this) {
			return;
		}
		if (Finalizer::unfinalized == this) {
			$assignStatic(Finalizer::unfinalized, this->next);
		} else {
			$set($nc(this->prev), next, this->next);
		}
		if (this->next != nullptr) {
			$set(this->next, prev, this->prev);
		}
		$set(this, prev, nullptr);
		$set(this, next, this);
	}
	try {
		$var($Object, finalizee, this->get());
		if (!Finalizer::$assertionsDisabled && !(finalizee != nullptr)) {
			$throwNew($AssertionError);
		}
		if (!($instanceOf($Enum, finalizee))) {
			$nc(jla)->invokeFinalize(finalizee);
			$assign(finalizee, nullptr);
		}
	} catch ($Throwable& x) {
	}
	$FinalReference::clear();
}

void Finalizer::forkSecondaryFinalizer($Runnable* proc) {
	$init(Finalizer);
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($Finalizer$1, proc));
}

void Finalizer::runFinalization() {
	$init(Finalizer);
	if ($VM::initLevel() == 0) {
		return;
	}
	forkSecondaryFinalizer($$new($Finalizer$2));
}

void Finalizer::clinit$($Class* clazz) {
	$useLocalObjectStack();
	Finalizer::$assertionsDisabled = !Finalizer::class$->desiredAssertionStatus();
	$assignStatic(Finalizer::queue, $new($ReferenceQueue));
	$assignStatic(Finalizer::unfinalized, nullptr);
	$assignStatic(Finalizer::lock, $new($Object));
	{
		$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
		{
			$var($ThreadGroup, tgn, tg);
			for (; tgn != nullptr; $assign(tg, tgn), $assign(tgn, tg->getParent())) {
				;
			}
		}
		$var($Thread, finalizer, $new($Finalizer$FinalizerThread, tg));
		finalizer->setPriority($Thread::MAX_PRIORITY - 2);
		finalizer->setDaemon(true);
		finalizer->start();
	}
}

Finalizer::Finalizer() {
}

$Class* Finalizer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Finalizer, $assertionsDisabled)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(Finalizer, queue)},
		{"unfinalized", "Ljava/lang/ref/Finalizer;", nullptr, $PRIVATE | $STATIC, $staticField(Finalizer, unfinalized)},
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Finalizer, lock)},
		{"next", "Ljava/lang/ref/Finalizer;", nullptr, $PRIVATE, $field(Finalizer, next)},
		{"prev", "Ljava/lang/ref/Finalizer;", nullptr, $PRIVATE, $field(Finalizer, prev)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(Finalizer, init$, void, Object$*)},
		{"forkSecondaryFinalizer", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Finalizer, forkSecondaryFinalizer, void, $Runnable*)},
		{"getQueue", "()Ljava/lang/ref/ReferenceQueue;", "()Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC, $staticMethod(Finalizer, getQueue, $ReferenceQueue*)},
		{"register", "(Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(Finalizer, register$, void, Object$*)},
		{"runFinalization", "()V", nullptr, $STATIC, $staticMethod(Finalizer, runFinalization, void)},
		{"runFinalizer", "(Ljdk/internal/access/JavaLangAccess;)V", nullptr, $PRIVATE, $method(Finalizer, runFinalizer, void, $JavaLangAccess*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Finalizer$FinalizerThread", "java.lang.ref.Finalizer", "FinalizerThread", $PRIVATE | $STATIC},
		{"java.lang.ref.Finalizer$2", nullptr, nullptr, 0},
		{"java.lang.ref.Finalizer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.ref.Finalizer",
		"java.lang.ref.FinalReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/FinalReference<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.ref.Finalizer$FinalizerThread,java.lang.ref.Finalizer$2,java.lang.ref.Finalizer$1"
	};
	$loadClass(Finalizer, name, initialize, &classInfo$$, Finalizer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Finalizer);
	});
	return class$;
}

$Class* Finalizer::class$ = nullptr;

		} // ref
	} // lang
} // java