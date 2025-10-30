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
using $Finalizer = ::java::lang::ref::Finalizer;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {
		namespace ref {

$FieldInfo _Finalizer$1_FieldInfo_[] = {
	{"val$proc", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(Finalizer$1, val$proc)},
	{}
};

$MethodInfo _Finalizer$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Runnable;)V", nullptr, 0, $method(static_cast<void(Finalizer$1::*)($Runnable*)>(&Finalizer$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Finalizer$1_EnclosingMethodInfo_ = {
	"java.lang.ref.Finalizer",
	"forkSecondaryFinalizer",
	"(Ljava/lang/Runnable;)V"
};

$InnerClassInfo _Finalizer$1_InnerClassesInfo_[] = {
	{"java.lang.ref.Finalizer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Finalizer$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.Finalizer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Finalizer$1_FieldInfo_,
	_Finalizer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Finalizer$1_EnclosingMethodInfo_,
	_Finalizer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.Finalizer"
};

$Object* allocate$Finalizer$1($Class* clazz) {
	return $of($alloc(Finalizer$1));
}

void Finalizer$1::init$($Runnable* val$proc) {
	$set(this, val$proc, val$proc);
}

$Object* Finalizer$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	{
		$var($ThreadGroup, tgn, tg);
		for (; tgn != nullptr; $assign(tg, tgn), $assign(tgn, $nc(tg)->getParent())) {
		}
	}
	$var($Thread, sft, $new($Thread, tg, this->val$proc, "Secondary finalizer"_s, 0, false));
	sft->start();
	try {
		sft->join();
	} catch ($InterruptedException& x) {
		$($Thread::currentThread())->interrupt();
	}
	return $of(nullptr);
}

Finalizer$1::Finalizer$1() {
}

$Class* Finalizer$1::load$($String* name, bool initialize) {
	$loadClass(Finalizer$1, name, initialize, &_Finalizer$1_ClassInfo_, allocate$Finalizer$1);
	return class$;
}

$Class* Finalizer$1::class$ = nullptr;

		} // ref
	} // lang
} // java