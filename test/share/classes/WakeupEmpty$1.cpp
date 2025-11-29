#include <WakeupEmpty$1.h>

#include <WakeupEmpty.h>
#include <java/lang/InterruptedException.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;

$FieldInfo _WakeupEmpty$1_FieldInfo_[] = {
	{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(WakeupEmpty$1, val$sel)},
	{}
};

$MethodInfo _WakeupEmpty$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/Selector;)V", nullptr, 0, $method(static_cast<void(WakeupEmpty$1::*)($Selector*)>(&WakeupEmpty$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WakeupEmpty$1_EnclosingMethodInfo_ = {
	"WakeupEmpty",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _WakeupEmpty$1_InnerClassesInfo_[] = {
	{"WakeupEmpty$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WakeupEmpty$1_ClassInfo_ = {
	$ACC_SUPER,
	"WakeupEmpty$1",
	"java.lang.Thread",
	nullptr,
	_WakeupEmpty$1_FieldInfo_,
	_WakeupEmpty$1_MethodInfo_,
	nullptr,
	&_WakeupEmpty$1_EnclosingMethodInfo_,
	_WakeupEmpty$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WakeupEmpty"
};

$Object* allocate$WakeupEmpty$1($Class* clazz) {
	return $of($alloc(WakeupEmpty$1));
}

void WakeupEmpty$1::init$($Selector* val$sel) {
	$set(this, val$sel, val$sel);
	$Thread::init$();
}

void WakeupEmpty$1::run() {
	try {
		sleep(100);
	} catch ($InterruptedException& e) {
	}
	$nc(this->val$sel)->wakeup();
}

WakeupEmpty$1::WakeupEmpty$1() {
}

$Class* WakeupEmpty$1::load$($String* name, bool initialize) {
	$loadClass(WakeupEmpty$1, name, initialize, &_WakeupEmpty$1_ClassInfo_, allocate$WakeupEmpty$1);
	return class$;
}

$Class* WakeupEmpty$1::class$ = nullptr;