#include <GetAnnotatedSuperclass$If.h>
#include <GetAnnotatedSuperclass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* GetAnnotatedSuperclass$If::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedSuperclass$If", "GetAnnotatedSuperclass", "If", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"GetAnnotatedSuperclass$If",
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
		"GetAnnotatedSuperclass"
	};
	$loadClass(GetAnnotatedSuperclass$If, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedSuperclass$If);
	});
	return class$;
}

$Class* GetAnnotatedSuperclass$If::class$ = nullptr;