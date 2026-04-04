#include <WakeupSpeed.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Selector = ::java::nio::channels::Selector;

void WakeupSpeed::init$() {
}

void WakeupSpeed::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t waitTime = 4000;
	$var($Selector, selector, $Selector::open());
	$var($Throwable, var$0, nullptr);
	try {
		$nc(selector)->wakeup();
		int64_t t1 = $System::currentTimeMillis();
		selector->select(waitTime);
		int64_t t2 = $System::currentTimeMillis();
		int64_t totalTime = t2 - t1;
		if (totalTime > waitTime) {
			$throwNew($RuntimeException, "Test failed"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(selector)->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

WakeupSpeed::WakeupSpeed() {
}

$Class* WakeupSpeed::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WakeupSpeed, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WakeupSpeed, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WakeupSpeed",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WakeupSpeed, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WakeupSpeed);
	});
	return class$;
}

$Class* WakeupSpeed::class$ = nullptr;