#include <ClassRestrictions$Baz.h>
#include <ClassRestrictions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* ClassRestrictions$Baz::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"foo", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassRestrictions$Baz, foo, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClassRestrictions$Baz", "ClassRestrictions", "Baz", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"ClassRestrictions$Baz",
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
	$loadClass(ClassRestrictions$Baz, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassRestrictions$Baz);
	});
	return class$;
}

$Class* ClassRestrictions$Baz::class$ = nullptr;