#include <ImmutableLocal$1.h>
#include <ImmutableLocal$ImmutableThreadLocal.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ImmutableLocal$ImmutableThreadLocal = ::ImmutableLocal$ImmutableThreadLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ImmutableLocal$1::init$() {
	$ImmutableLocal$ImmutableThreadLocal::init$();
}

$Object* ImmutableLocal$1::initialValue() {
	return $of($($Thread::currentThread())->getName());
}

ImmutableLocal$1::ImmutableLocal$1() {
}

$Class* ImmutableLocal$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImmutableLocal$1, init$, void)},
		{"initialValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImmutableLocal$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ImmutableLocal",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImmutableLocal$1", nullptr, nullptr, 0},
		{"ImmutableLocal$ImmutableThreadLocal", "ImmutableLocal", "ImmutableThreadLocal", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ImmutableLocal$1",
		"ImmutableLocal$ImmutableThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ImmutableLocal"
	};
	$loadClass(ImmutableLocal$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableLocal$1);
	});
	return class$;
}

$Class* ImmutableLocal$1::class$ = nullptr;