#include <InheritedMethodTest$J.h>
#include <InheritedMethodTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* InheritedMethodTest$J::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritedMethodTest$J", "InheritedMethodTest", "J", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"InheritedMethodTest$J",
		nullptr,
		"InheritedMethodTest$I",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InheritedMethodTest"
	};
	$loadClass(InheritedMethodTest$J, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedMethodTest$J);
	});
	return class$;
}

$Class* InheritedMethodTest$J::class$ = nullptr;