#include <WakeupSpeed.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Selector = ::java::nio::channels::Selector;

$MethodInfo _WakeupSpeed_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WakeupSpeed::*)()>(&WakeupSpeed::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WakeupSpeed::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _WakeupSpeed_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WakeupSpeed",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WakeupSpeed_MethodInfo_
};

$Object* allocate$WakeupSpeed($Class* clazz) {
	return $of($alloc(WakeupSpeed));
}

void WakeupSpeed::init$() {
}

void WakeupSpeed::main($StringArray* argv) {
	int32_t waitTime = 4000;
	$var($Selector, selector, $Selector::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(selector)->wakeup();
			int64_t t1 = $System::currentTimeMillis();
			selector->select((int64_t)waitTime);
			int64_t t2 = $System::currentTimeMillis();
			int64_t totalTime = t2 - t1;
			if (totalTime > waitTime) {
				$throwNew($RuntimeException, "Test failed"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(selector)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

WakeupSpeed::WakeupSpeed() {
}

$Class* WakeupSpeed::load$($String* name, bool initialize) {
	$loadClass(WakeupSpeed, name, initialize, &_WakeupSpeed_ClassInfo_, allocate$WakeupSpeed);
	return class$;
}

$Class* WakeupSpeed::class$ = nullptr;