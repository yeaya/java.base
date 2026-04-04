#include <AdaptorCloseAndInterrupt$1.h>
#include <AdaptorCloseAndInterrupt.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

using $AdaptorCloseAndInterrupt = ::AdaptorCloseAndInterrupt;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;

void AdaptorCloseAndInterrupt$1::init$($AdaptorCloseAndInterrupt* this$0, $AbstractSelectableChannel* val$sc) {
	$set(this, this$0, this$0);
	$set(this, val$sc, val$sc);
}

$Object* AdaptorCloseAndInterrupt$1::call() {
	$nc(this->val$sc)->close();
	$nc(this->this$0->isClosed)->set(true);
	return nullptr;
}

AdaptorCloseAndInterrupt$1::AdaptorCloseAndInterrupt$1() {
}

$Class* AdaptorCloseAndInterrupt$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LAdaptorCloseAndInterrupt;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$1, this$0)},
		{"val$sc", "Ljava/nio/channels/spi/AbstractSelectableChannel;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$1, val$sc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LAdaptorCloseAndInterrupt;Ljava/nio/channels/spi/AbstractSelectableChannel;)V", "()V", 0, $method(AdaptorCloseAndInterrupt$1, init$, void, $AdaptorCloseAndInterrupt*, $AbstractSelectableChannel*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AdaptorCloseAndInterrupt$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AdaptorCloseAndInterrupt",
		"doAsyncClose",
		"(Ljava/nio/channels/spi/AbstractSelectableChannel;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AdaptorCloseAndInterrupt$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AdaptorCloseAndInterrupt$1",
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
	$loadClass(AdaptorCloseAndInterrupt$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AdaptorCloseAndInterrupt$1);
	});
	return class$;
}

$Class* AdaptorCloseAndInterrupt$1::class$ = nullptr;