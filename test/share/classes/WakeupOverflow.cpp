#include <WakeupOverflow.h>

#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;

$MethodInfo _WakeupOverflow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(WakeupOverflow, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WakeupOverflow, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _WakeupOverflow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WakeupOverflow",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WakeupOverflow_MethodInfo_
};

$Object* allocate$WakeupOverflow($Class* clazz) {
	return $of($alloc(WakeupOverflow));
}

void WakeupOverflow::init$() {
}

void WakeupOverflow::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Selector, selector, $Selector::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = 0; i < 10000; ++i) {
				$nc(selector)->wakeup();
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
}

WakeupOverflow::WakeupOverflow() {
}

$Class* WakeupOverflow::load$($String* name, bool initialize) {
	$loadClass(WakeupOverflow, name, initialize, &_WakeupOverflow_ClassInfo_, allocate$WakeupOverflow);
	return class$;
}

$Class* WakeupOverflow::class$ = nullptr;