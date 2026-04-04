#include <InheritedMethodTest$C.h>
#include <InheritedMethodTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void InheritedMethodTest$C::init$() {
}

InheritedMethodTest$C::InheritedMethodTest$C() {
}

$Class* InheritedMethodTest$C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InheritedMethodTest$C, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritedMethodTest$C", "InheritedMethodTest", "C", $PUBLIC | $STATIC | $ABSTRACT},
		{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"InheritedMethodTest$C",
		"java.lang.Object",
		"InheritedMethodTest$I",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InheritedMethodTest"
	};
	$loadClass(InheritedMethodTest$C, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedMethodTest$C);
	});
	return class$;
}

$Class* InheritedMethodTest$C::class$ = nullptr;