#include <java/lang/ref/Finalizer$FinalizerThread.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/Finalizer.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Finalizer = ::java::lang::ref::Finalizer;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {
		namespace ref {

$FieldInfo _Finalizer$FinalizerThread_FieldInfo_[] = {
	{"running", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Finalizer$FinalizerThread, running)},
	{}
};

$MethodInfo _Finalizer$FinalizerThread_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;)V", nullptr, 0, $method(static_cast<void(Finalizer$FinalizerThread::*)($ThreadGroup*)>(&Finalizer$FinalizerThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Finalizer$FinalizerThread_InnerClassesInfo_[] = {
	{"java.lang.ref.Finalizer$FinalizerThread", "java.lang.ref.Finalizer", "FinalizerThread", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Finalizer$FinalizerThread_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.Finalizer$FinalizerThread",
	"java.lang.Thread",
	nullptr,
	_Finalizer$FinalizerThread_FieldInfo_,
	_Finalizer$FinalizerThread_MethodInfo_,
	nullptr,
	nullptr,
	_Finalizer$FinalizerThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.Finalizer"
};

$Object* allocate$Finalizer$FinalizerThread($Class* clazz) {
	return $of($alloc(Finalizer$FinalizerThread));
}

void Finalizer$FinalizerThread::init$($ThreadGroup* g) {
	$Thread::init$(g, nullptr, "Finalizer"_s, 0, false);
}

void Finalizer$FinalizerThread::run() {
	$useLocalCurrentObjectStackCache();
	if (this->running) {
		return;
	}
	while ($VM::initLevel() == 0) {
		try {
			$VM::awaitInitLevel(1);
		} catch ($InterruptedException&) {
			$catch();
		}
	}
	$var($JavaLangAccess, jla, $SharedSecrets::getJavaLangAccess());
	this->running = true;
	for (;;) {
		try {
			$init($Finalizer);
			$var($Finalizer, f, $cast($Finalizer, $nc($Finalizer::queue)->remove()));
			$nc(f)->runFinalizer(jla);
		} catch ($InterruptedException&) {
			$catch();
		}
	}
}

Finalizer$FinalizerThread::Finalizer$FinalizerThread() {
}

$Class* Finalizer$FinalizerThread::load$($String* name, bool initialize) {
	$loadClass(Finalizer$FinalizerThread, name, initialize, &_Finalizer$FinalizerThread_ClassInfo_, allocate$Finalizer$FinalizerThread);
	return class$;
}

$Class* Finalizer$FinalizerThread::class$ = nullptr;

		} // ref
	} // lang
} // java