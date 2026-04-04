#include <Args$Thunk.h>
#include <Args.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* Args$Thunk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Args$Thunk, run, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"Args$Thunk",
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
		"Args"
	};
	$loadClass(Args$Thunk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Args$Thunk);
	});
	return class$;
}

$Class* Args$Thunk::class$ = nullptr;