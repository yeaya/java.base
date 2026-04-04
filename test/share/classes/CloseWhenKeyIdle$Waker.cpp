#include <CloseWhenKeyIdle$Waker.h>
#include <CloseWhenKeyIdle.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $CloseWhenKeyIdle = ::CloseWhenKeyIdle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;

void CloseWhenKeyIdle$Waker::init$($Selector* sel, int64_t delay) {
	$set(this, sel, sel);
	this->delay = delay;
}

void CloseWhenKeyIdle$Waker::run() {
	try {
		$Thread::sleep(this->delay);
		$init($CloseWhenKeyIdle);
		$CloseWhenKeyIdle::wakeupDone = true;
		$nc(this->sel)->wakeup();
	} catch ($Exception& x) {
		x->printStackTrace();
	}
}

CloseWhenKeyIdle$Waker::CloseWhenKeyIdle$Waker() {
}

$Class* CloseWhenKeyIdle$Waker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sel", "Ljava/nio/channels/Selector;", nullptr, $PRIVATE, $field(CloseWhenKeyIdle$Waker, sel)},
		{"delay", "J", nullptr, $PRIVATE, $field(CloseWhenKeyIdle$Waker, delay)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Selector;J)V", nullptr, 0, $method(CloseWhenKeyIdle$Waker, init$, void, $Selector*, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CloseWhenKeyIdle$Waker, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseWhenKeyIdle$Waker", "CloseWhenKeyIdle", "Waker", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CloseWhenKeyIdle$Waker",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CloseWhenKeyIdle"
	};
	$loadClass(CloseWhenKeyIdle$Waker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseWhenKeyIdle$Waker);
	});
	return class$;
}

$Class* CloseWhenKeyIdle$Waker::class$ = nullptr;