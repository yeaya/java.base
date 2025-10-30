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
using $Callable = ::java::util::concurrent::Callable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

$FieldInfo _AdaptorCloseAndInterrupt$2_FieldInfo_[] = {
	{"this$0", "LAdaptorCloseAndInterrupt;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$2, this$0)},
	{"val$current", "Ljava/lang/Thread;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$2, val$current)},
	{}
};

$MethodInfo _AdaptorCloseAndInterrupt$2_MethodInfo_[] = {
	{"<init>", "(LAdaptorCloseAndInterrupt;Ljava/lang/Thread;)V", "()V", 0, $method(static_cast<void(AdaptorCloseAndInterrupt$2::*)($AdaptorCloseAndInterrupt*,$Thread*)>(&AdaptorCloseAndInterrupt$2::init$))},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _AdaptorCloseAndInterrupt$2_EnclosingMethodInfo_ = {
	"AdaptorCloseAndInterrupt",
	"doAsyncInterrupt",
	"()V"
};

$InnerClassInfo _AdaptorCloseAndInterrupt$2_InnerClassesInfo_[] = {
	{"AdaptorCloseAndInterrupt$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AdaptorCloseAndInterrupt$2_ClassInfo_ = {
	$ACC_SUPER,
	"AdaptorCloseAndInterrupt$2",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_AdaptorCloseAndInterrupt$2_FieldInfo_,
	_AdaptorCloseAndInterrupt$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_AdaptorCloseAndInterrupt$2_EnclosingMethodInfo_,
	_AdaptorCloseAndInterrupt$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AdaptorCloseAndInterrupt"
};

$Object* allocate$AdaptorCloseAndInterrupt$2($Class* clazz) {
	return $of($alloc(AdaptorCloseAndInterrupt$2));
}

void AdaptorCloseAndInterrupt$2::init$($AdaptorCloseAndInterrupt* this$0, $Thread* val$current) {
	$set(this, this$0, this$0);
	$set(this, val$current, val$current);
}

$Object* AdaptorCloseAndInterrupt$2::call() {
	$nc(this->val$current)->interrupt();
	$nc(this->this$0->isInterrupted)->set(true);
	return $of(nullptr);
}

AdaptorCloseAndInterrupt$2::AdaptorCloseAndInterrupt$2() {
}

$Class* AdaptorCloseAndInterrupt$2::load$($String* name, bool initialize) {
	$loadClass(AdaptorCloseAndInterrupt$2, name, initialize, &_AdaptorCloseAndInterrupt$2_ClassInfo_, allocate$AdaptorCloseAndInterrupt$2);
	return class$;
}

$Class* AdaptorCloseAndInterrupt$2::class$ = nullptr;