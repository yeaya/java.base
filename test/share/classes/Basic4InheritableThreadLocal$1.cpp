#include <Basic4InheritableThreadLocal$1.h>
#include <java/lang/InheritableThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4InheritableThreadLocal$1::init$() {
	$InheritableThreadLocal::init$();
}

$Object* Basic4InheritableThreadLocal$1::initialValue() {
	return $of($new($Integer, 0));
}

$Object* Basic4InheritableThreadLocal$1::childValue(Object$* parentValue) {
	return $of($new($Integer, $nc($cast($Integer, parentValue))->intValue() + 1));
}

Basic4InheritableThreadLocal$1::Basic4InheritableThreadLocal$1() {
}

$Class* Basic4InheritableThreadLocal$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4InheritableThreadLocal$1, init$, void)},
		{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Basic4InheritableThreadLocal$1, childValue, $Object*, Object$*)},
		{"initialValue", "()Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Basic4InheritableThreadLocal$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4InheritableThreadLocal",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4InheritableThreadLocal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4InheritableThreadLocal$1",
		"java.lang.InheritableThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic4InheritableThreadLocal"
	};
	$loadClass(Basic4InheritableThreadLocal$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4InheritableThreadLocal$1);
	});
	return class$;
}

$Class* Basic4InheritableThreadLocal$1::class$ = nullptr;