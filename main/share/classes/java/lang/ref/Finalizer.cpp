#include <java/lang/ref/Finalizer.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/FinalReference.h>
#include <java/lang/ref/Finalizer$1.h>
#include <java/lang/ref/Finalizer$2.h>
#include <java/lang/ref/Finalizer$FinalizerThread.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {
		namespace ref {

$FieldInfo _Finalizer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Finalizer, $assertionsDisabled)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(Finalizer, queue)},
	{"unfinalized", "Ljava/lang/ref/Finalizer;", nullptr, $PRIVATE | $STATIC, $staticField(Finalizer, unfinalized)},
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Finalizer, lock)},
	{"next", "Ljava/lang/ref/Finalizer;", nullptr, $PRIVATE, $field(Finalizer, next)},
	{"prev", "Ljava/lang/ref/Finalizer;", nullptr, $PRIVATE, $field(Finalizer, prev)},
	{}
};

$MethodInfo _Finalizer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Finalizer::*)(Object$*)>(&Finalizer::init$))},
	{"forkSecondaryFinalizer", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Runnable*)>(&Finalizer::forkSecondaryFinalizer))},
	{"getQueue", "()Ljava/lang/ref/ReferenceQueue;", "()Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC, $method(static_cast<$ReferenceQueue*(*)()>(&Finalizer::getQueue))},
	{"register", "(Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*)>(&Finalizer::register$))},
	{"runFinalization", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Finalizer::runFinalization))},
	{"runFinalizer", "(Ljdk/internal/access/JavaLangAccess;)V", nullptr, $PRIVATE, $method(static_cast<void(Finalizer::*)($JavaLangAccess*)>(&Finalizer::runFinalizer))},
	{}
};

$InnerClassInfo _Finalizer_InnerClassesInfo_[] = {
	{"java.lang.ref.Finalizer$FinalizerThread", "java.lang.ref.Finalizer", "FinalizerThread", $PRIVATE | $STATIC},
	{"java.lang.ref.Finalizer$2", nullptr, nullptr, 0},
	{"java.lang.ref.Finalizer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Finalizer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.ref.Finalizer",
	"java.lang.ref.FinalReference",
	nullptr,
	_Finalizer_FieldInfo_,
	_Finalizer_MethodInfo_,
	"Ljava/lang/ref/FinalReference<Ljava/lang/Object;>;",
	nullptr,
	_Finalizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.ref.Finalizer$FinalizerThread,java.lang.ref.Finalizer$2,java.lang.ref.Finalizer$1"
};

$Object* allocate$Finalizer($Class* clazz) {
	return $of($alloc(Finalizer));
}

bool Finalizer::$assertionsDisabled = false;
$ReferenceQueue* Finalizer::queue = nullptr;

Finalizer* Finalizer::unfinalized = nullptr;

$Object* Finalizer::lock = nullptr;

void Finalizer::init$(Object$* finalizee) {
	$FinalReference::init$(finalizee, Finalizer::queue);
	$synchronized(Finalizer::lock) {
		if (Finalizer::unfinalized != nullptr) {
			$set(this, next, Finalizer::unfinalized);
			$set($nc(Finalizer::unfinalized), prev, this);
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
			$set($nc(this->next), prev, this->prev);
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
	} catch ($Throwable&) {
		$catch();
	}
	$FinalReference::clear();
}

void Finalizer::forkSecondaryFinalizer($Runnable* proc) {
	$init(Finalizer);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Finalizer$1, proc)));
}

void Finalizer::runFinalization() {
	$init(Finalizer);
	if ($VM::initLevel() == 0) {
		return;
	}
	forkSecondaryFinalizer($$new($Finalizer$2));
}

void clinit$Finalizer($Class* class$) {
	Finalizer::$assertionsDisabled = !Finalizer::class$->desiredAssertionStatus();
	$assignStatic(Finalizer::queue, $new($ReferenceQueue));
	$assignStatic(Finalizer::unfinalized, nullptr);
	$assignStatic(Finalizer::lock, $new($Object));
	{
		$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
		{
			$var($ThreadGroup, tgn, tg);
			for (; tgn != nullptr; $assign(tg, tgn), $assign(tgn, $nc(tg)->getParent())) {
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
	$loadClass(Finalizer, name, initialize, &_Finalizer_ClassInfo_, clinit$Finalizer, allocate$Finalizer);
	return class$;
}

$Class* Finalizer::class$ = nullptr;

		} // ref
	} // lang
} // java