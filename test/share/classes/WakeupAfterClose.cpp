#include <WakeupAfterClose.h>

#include <WakeupAfterClose$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $WakeupAfterClose$1 = ::WakeupAfterClose$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Selector = ::java::nio::channels::Selector;

$MethodInfo _WakeupAfterClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WakeupAfterClose::*)()>(&WakeupAfterClose::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WakeupAfterClose::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _WakeupAfterClose_InnerClassesInfo_[] = {
	{"WakeupAfterClose$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WakeupAfterClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WakeupAfterClose",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WakeupAfterClose_MethodInfo_,
	nullptr,
	nullptr,
	_WakeupAfterClose_InnerClassesInfo_,
	nullptr,
	nullptr,
	"WakeupAfterClose$1"
};

$Object* allocate$WakeupAfterClose($Class* clazz) {
	return $of($alloc(WakeupAfterClose));
}

void WakeupAfterClose::init$() {
}

void WakeupAfterClose::main($StringArray* args) {
	$var($Selector, sel, $Selector::open());
	$var($Runnable, r, $new($WakeupAfterClose$1, sel));
	$var($Thread, t, $new($Thread, r));
	t->start();
	$Thread::sleep(1000);
	t->interrupt();
	$nc(sel)->close();
	sel->wakeup();
}

WakeupAfterClose::WakeupAfterClose() {
}

$Class* WakeupAfterClose::load$($String* name, bool initialize) {
	$loadClass(WakeupAfterClose, name, initialize, &_WakeupAfterClose_ClassInfo_, allocate$WakeupAfterClose);
	return class$;
}

$Class* WakeupAfterClose::class$ = nullptr;