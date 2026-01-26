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
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

$FieldInfo _AdaptorCloseAndInterrupt$1_FieldInfo_[] = {
	{"this$0", "LAdaptorCloseAndInterrupt;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$1, this$0)},
	{"val$sc", "Ljava/nio/channels/spi/AbstractSelectableChannel;", nullptr, $FINAL | $SYNTHETIC, $field(AdaptorCloseAndInterrupt$1, val$sc)},
	{}
};

$MethodInfo _AdaptorCloseAndInterrupt$1_MethodInfo_[] = {
	{"<init>", "(LAdaptorCloseAndInterrupt;Ljava/nio/channels/spi/AbstractSelectableChannel;)V", "()V", 0, $method(AdaptorCloseAndInterrupt$1, init$, void, $AdaptorCloseAndInterrupt*, $AbstractSelectableChannel*)},
	{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AdaptorCloseAndInterrupt$1, call, $Object*), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _AdaptorCloseAndInterrupt$1_EnclosingMethodInfo_ = {
	"AdaptorCloseAndInterrupt",
	"doAsyncClose",
	"(Ljava/nio/channels/spi/AbstractSelectableChannel;)V"
};

$InnerClassInfo _AdaptorCloseAndInterrupt$1_InnerClassesInfo_[] = {
	{"AdaptorCloseAndInterrupt$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AdaptorCloseAndInterrupt$1_ClassInfo_ = {
	$ACC_SUPER,
	"AdaptorCloseAndInterrupt$1",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_AdaptorCloseAndInterrupt$1_FieldInfo_,
	_AdaptorCloseAndInterrupt$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
	&_AdaptorCloseAndInterrupt$1_EnclosingMethodInfo_,
	_AdaptorCloseAndInterrupt$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AdaptorCloseAndInterrupt"
};

$Object* allocate$AdaptorCloseAndInterrupt$1($Class* clazz) {
	return $of($alloc(AdaptorCloseAndInterrupt$1));
}

void AdaptorCloseAndInterrupt$1::init$($AdaptorCloseAndInterrupt* this$0, $AbstractSelectableChannel* val$sc) {
	$set(this, this$0, this$0);
	$set(this, val$sc, val$sc);
}

$Object* AdaptorCloseAndInterrupt$1::call() {
	$nc(this->val$sc)->close();
	$nc(this->this$0->isClosed)->set(true);
	return $of(nullptr);
}

AdaptorCloseAndInterrupt$1::AdaptorCloseAndInterrupt$1() {
}

$Class* AdaptorCloseAndInterrupt$1::load$($String* name, bool initialize) {
	$loadClass(AdaptorCloseAndInterrupt$1, name, initialize, &_AdaptorCloseAndInterrupt$1_ClassInfo_, allocate$AdaptorCloseAndInterrupt$1);
	return class$;
}

$Class* AdaptorCloseAndInterrupt$1::class$ = nullptr;