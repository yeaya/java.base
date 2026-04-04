#include <KeySets$Adder.h>
#include <KeySets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* KeySets$Adder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeySets$Adder, add, void), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"KeySets$Adder",
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
		"KeySets"
	};
	$loadClass(KeySets$Adder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$Adder);
	});
	return class$;
}

$Class* KeySets$Adder::class$ = nullptr;