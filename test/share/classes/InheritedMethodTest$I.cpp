#include <InheritedMethodTest$I.h>
#include <InheritedMethodTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* InheritedMethodTest$I::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"iString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedMethodTest$I, iString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"InheritedMethodTest$I",
		nullptr,
		nullptr,
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
	$loadClass(InheritedMethodTest$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedMethodTest$I);
	});
	return class$;
}

$Class* InheritedMethodTest$I::class$ = nullptr;