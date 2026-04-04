#include <WakeupEmpty.h>
#include <WakeupEmpty$1.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

#undef SLEEP_TIME

using $WakeupEmpty$1 = ::WakeupEmpty$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;

void WakeupEmpty::init$() {
}

void WakeupEmpty::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($Selector, sel, $Selector::open());
	$var($Thread, thread, $new($WakeupEmpty$1, sel));
	thread->start();
	if ($nc(sel)->select() != 0) {
		$throwNew($Exception, "Zero expected"_s);
	}
}

WakeupEmpty::WakeupEmpty() {
}

$Class* WakeupEmpty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SLEEP_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WakeupEmpty, SLEEP_TIME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WakeupEmpty, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WakeupEmpty, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WakeupEmpty$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WakeupEmpty",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"WakeupEmpty$1"
	};
	$loadClass(WakeupEmpty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WakeupEmpty);
	});
	return class$;
}

$Class* WakeupEmpty::class$ = nullptr;