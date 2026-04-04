#include <TemporarySelector$1.h>
#include <TemporarySelector.h>
#include <jcpp.h>

using $TemporarySelector = ::TemporarySelector;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TemporarySelector$1::init$() {
}

void TemporarySelector$1::run() {
	$init($TemporarySelector);
	while (!$TemporarySelector::done) {
		$System::gc();
		try {
			$Thread::sleep(1000);
		} catch ($Exception& e) {
		}
	}
}

TemporarySelector$1::TemporarySelector$1() {
}

$Class* TemporarySelector$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TemporarySelector$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TemporarySelector$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TemporarySelector",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TemporarySelector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TemporarySelector$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TemporarySelector"
	};
	$loadClass(TemporarySelector$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TemporarySelector$1);
	});
	return class$;
}

$Class* TemporarySelector$1::class$ = nullptr;