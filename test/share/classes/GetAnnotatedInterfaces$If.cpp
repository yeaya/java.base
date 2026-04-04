#include <GetAnnotatedInterfaces$If.h>
#include <GetAnnotatedInterfaces.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* GetAnnotatedInterfaces$If::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedInterfaces$If", "GetAnnotatedInterfaces", "If", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"GetAnnotatedInterfaces$If",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetAnnotatedInterfaces"
	};
	$loadClass(GetAnnotatedInterfaces$If, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedInterfaces$If);
	});
	return class$;
}

$Class* GetAnnotatedInterfaces$If::class$ = nullptr;