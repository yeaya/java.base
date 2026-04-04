#include <WakeupAfterClose.h>
#include <WakeupAfterClose$1.h>
#include <java/lang/Runnable.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $WakeupAfterClose$1 = ::WakeupAfterClose$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Selector = ::java::nio::channels::Selector;

void WakeupAfterClose::init$() {
}

void WakeupAfterClose::main($StringArray* args) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WakeupAfterClose, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WakeupAfterClose, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WakeupAfterClose$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WakeupAfterClose",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"WakeupAfterClose$1"
	};
	$loadClass(WakeupAfterClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WakeupAfterClose);
	});
	return class$;
}

$Class* WakeupAfterClose::class$ = nullptr;