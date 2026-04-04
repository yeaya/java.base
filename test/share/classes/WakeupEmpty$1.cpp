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
	$FieldInfo fieldInfos$$[] = {
		{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(WakeupEmpty$1, val$sel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Selector;)V", nullptr, 0, $method(WakeupEmpty$1, init$, void, $Selector*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WakeupEmpty$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WakeupEmpty",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WakeupEmpty$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WakeupEmpty$1",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WakeupEmpty"
	};
	$loadClass(WakeupEmpty$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WakeupEmpty$1);
	});
	return class$;
}

$Class* WakeupEmpty$1::class$ = nullptr;