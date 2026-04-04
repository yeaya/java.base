#include <AdaptorCloseAndInterrupt$2.h>
#include <AdaptorCloseAndInterrupt.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

using $AdaptorCloseAndInterrupt = ::AdaptorCloseAndInterrupt;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void AdaptorCloseAndInterrupt$2::init$($AdaptorCloseAndInterrupt* this$0, $Thread* val$current) {
	$set(this, this$0, this$0);
	$set(this, val$current, val$current);
}

$Object* AdaptorCloseAndInterrupt$2::call() {
	$nc(this->val$current)->interrupt();
	$nc(this->this$0->isInterrupted)->set(true);
	return nullptr;
}

AdaptorCloseAndInterrupt$2::AdaptorCloseAndInterrupt$2() {
}

$Class* AdaptorCloseAndInterrupt$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LAdaptorCloseAndInterrupt;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$2, this$0)},
		{"val$current", "Ljava/lang/Thread;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$2, val$current)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAdaptorCloseAndInterrupt;Ljava/lang/Thread;)V", "()V", 0, $method(AdaptorCloseAndInterrupt$2, init$, void, $AdaptorCloseAndInterrupt*, $Thread*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AdaptorCloseAndInterrupt$2, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AdaptorCloseAndInterrupt",
		"doAsyncInterrupt",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AdaptorCloseAndInterrupt$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AdaptorCloseAndInterrupt$2",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AdaptorCloseAndInterrupt"
	};
	$loadClass(AdaptorCloseAndInterrupt$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AdaptorCloseAndInterrupt$2);
	});
	return class$;
}

$Class* AdaptorCloseAndInterrupt$2::class$ = nullptr;