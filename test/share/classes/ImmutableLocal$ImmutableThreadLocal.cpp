#include <ImmutableLocal$ImmutableThreadLocal.h>
#include <ImmutableLocal.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;

$Object* ImmutableLocal$ImmutableThreadLocal::initialValue() {
	 return this->$ThreadLocal::initialValue();
}

void ImmutableLocal$ImmutableThreadLocal::init$() {
	$ThreadLocal::init$();
}

void ImmutableLocal$ImmutableThreadLocal::set(Object$* value) {
	$throwNew($RuntimeException, "ImmutableThreadLocal set called"_s);
}

ImmutableLocal$ImmutableThreadLocal::ImmutableLocal$ImmutableThreadLocal() {
}

$Class* ImmutableLocal$ImmutableThreadLocal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImmutableLocal$ImmutableThreadLocal, init$, void)},
		{"initialValue", "()Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT},
		{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ImmutableLocal$ImmutableThreadLocal, set, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ImmutableLocal$ImmutableThreadLocal", "ImmutableLocal", "ImmutableThreadLocal", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"ImmutableLocal$ImmutableThreadLocal",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ImmutableLocal"
	};
	$loadClass(ImmutableLocal$ImmutableThreadLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableLocal$ImmutableThreadLocal);
	});
	return class$;
}

$Class* ImmutableLocal$ImmutableThreadLocal::class$ = nullptr;