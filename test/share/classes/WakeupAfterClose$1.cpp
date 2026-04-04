#include <WakeupAfterClose$1.h>
#include <WakeupAfterClose.h>
#include <java/io/IOException.h>
#include <java/nio/channels/ClosedSelectorException.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClosedSelectorException = ::java::nio::channels::ClosedSelectorException;
using $Selector = ::java::nio::channels::Selector;

void WakeupAfterClose$1::init$($Selector* val$sel) {
	$set(this, val$sel, val$sel);
}

void WakeupAfterClose$1::run() {
	try {
		$nc(this->val$sel)->select();
	} catch ($IOException& x) {
		x->printStackTrace();
	} catch ($ClosedSelectorException& y) {
		$nc($System::err)->println("Caught expected ClosedSelectorException"_s);
	}
}

WakeupAfterClose$1::WakeupAfterClose$1() {
}

$Class* WakeupAfterClose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(WakeupAfterClose$1, val$sel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Selector;)V", "()V", 0, $method(WakeupAfterClose$1, init$, void, $Selector*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WakeupAfterClose$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WakeupAfterClose",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WakeupAfterClose$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WakeupAfterClose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WakeupAfterClose"
	};
	$loadClass(WakeupAfterClose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WakeupAfterClose$1);
	});
	return class$;
}

$Class* WakeupAfterClose$1::class$ = nullptr;