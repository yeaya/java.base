#include <java/lang/ref/Finalizer$1.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/Finalizer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace java {
	namespace lang {
		namespace ref {

void Finalizer$1::init$($Runnable* val$proc) {
	$set(this, val$proc, val$proc);
}

$Object* Finalizer$1::run() {
	$useLocalObjectStack();
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	{
		$var($ThreadGroup, tgn, tg);
		for (; tgn != nullptr; $assign(tg, tgn), $assign(tgn, tg->getParent())) {
			;
		}
	}
	$var($Thread, sft, $new($Thread, tg, this->val$proc, "Secondary finalizer"_s, 0, false));
	sft->start();
	try {
		sft->join();
	} catch ($InterruptedException& x) {
		$($Thread::currentThread())->interrupt();
	}
	return nullptr;
}

Finalizer$1::Finalizer$1() {
}

$Class* Finalizer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$proc", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Finalizer$1, val$proc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, 0, $method(Finalizer$1, init$, void, $Runnable*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Finalizer$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ref.Finalizer",
		"forkSecondaryFinalizer",
		"(Ljava/lang/Runnable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ref.Finalizer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ref.Finalizer$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ref.Finalizer"
	};
	$loadClass(Finalizer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finalizer$1);
	});
	return class$;
}

$Class* Finalizer$1::class$ = nullptr;

		} // ref
	} // lang
} // java