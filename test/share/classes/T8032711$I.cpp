#include <T8032711$I.h>
#include <T8032711.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* T8032711$I::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(T8032711$I, m, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"T8032711$I", "T8032711", "I", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"T8032711$I",
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
		"T8032711"
	};
	$loadClass(T8032711$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(T8032711$I);
	});
	return class$;
}

$Class* T8032711$I::class$ = nullptr;