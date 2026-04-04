#include <ClassRestrictions$Bashful.h>
#include <ClassRestrictions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* ClassRestrictions$Bashful::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassRestrictions$Bashful, foo, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClassRestrictions$Bashful", "ClassRestrictions", "Bashful", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"ClassRestrictions$Bashful",
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
		"ClassRestrictions"
	};
	$loadClass(ClassRestrictions$Bashful, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassRestrictions$Bashful);
	});
	return class$;
}

$Class* ClassRestrictions$Bashful::class$ = nullptr;