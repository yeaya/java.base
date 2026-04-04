#include <java/lang/ref/Finalizer$FinalizerThread.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/Finalizer.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
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
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {
		namespace ref {

void Finalizer$FinalizerThread::init$($ThreadGroup* g) {
	$Thread::init$(g, nullptr, "Finalizer"_s, 0, false);
}

void Finalizer$FinalizerThread::run() {
	$useLocalObjectStack();
	if (this->running) {
		return;
	}
	while ($VM::initLevel() == 0) {
		try {
			$VM::awaitInitLevel(1);
		} catch ($InterruptedException& x) {
		}
	}
	$var($JavaLangAccess, jla, $SharedSecrets::getJavaLangAccess());
	this->running = true;
	for (;;) {
		try {
			$init($Finalizer);
			$var($Finalizer, f, $cast($Finalizer, $nc($Finalizer::queue)->remove()));
			$nc(f)->runFinalizer(jla);
		} catch ($InterruptedException& x) {
		}
	}
}

Finalizer$FinalizerThread::Finalizer$FinalizerThread() {
}

$Class* Finalizer$FinalizerThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"running", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Finalizer$FinalizerThread, running)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ThreadGroup;)V", nullptr, 0, $method(Finalizer$FinalizerThread, init$, void, $ThreadGroup*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Finalizer$FinalizerThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Finalizer$FinalizerThread", "java.lang.ref.Finalizer", "FinalizerThread", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.Finalizer$FinalizerThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.Finalizer"
	};
	$loadClass(Finalizer$FinalizerThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finalizer$FinalizerThread);
	});
	return class$;
}

$Class* Finalizer$FinalizerThread::class$ = nullptr;

		} // ref
	} // lang
} // java