#include <InheritedMethodTest$StringFactory.h>
#include <InheritedMethodTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* InheritedMethodTest$StringFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedMethodTest$StringFactory, get, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InheritedMethodTest$StringFactory", "InheritedMethodTest", "StringFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"InheritedMethodTest$StringFactory",
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
	$loadClass(InheritedMethodTest$StringFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedMethodTest$StringFactory);
	});
	return class$;
}

$Class* InheritedMethodTest$StringFactory::class$ = nullptr;