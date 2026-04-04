#include <KeySets$Catch.h>
#include <KeySets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void KeySets$Catch::init$($Class* xc) {
	$useLocalObjectStack();
	try {
		go();
	} catch ($Exception& x) {
		if ($nc(xc)->isInstance(x)) {
			return;
		}
		$throwNew($Exception, "Wrong exception"_s, x);
	}
	$throwNew($Exception, $$str({"Not thrown as expected: "_s, $($nc(xc)->getName())}));
}

KeySets$Catch::KeySets$Catch() {
}

$Class* KeySets$Catch::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, 0, $method(KeySets$Catch, init$, void, $Class*), "java.lang.Exception"},
		{"go", "()V", nullptr, $ABSTRACT, $virtualMethod(KeySets$Catch, go, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"KeySets$Catch",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"KeySets"
	};
	$loadClass(KeySets$Catch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$Catch);
	});
	return class$;
}

$Class* KeySets$Catch::class$ = nullptr;