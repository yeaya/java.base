#include <ClassRestrictions$Bar.h>
#include <ClassRestrictions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* ClassRestrictions$Bar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"foo", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassRestrictions$Bar, foo, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClassRestrictions$Bar", "ClassRestrictions", "Bar", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"ClassRestrictions$Bar",
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
	$loadClass(ClassRestrictions$Bar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassRestrictions$Bar);
	});
	return class$;
}

$Class* ClassRestrictions$Bar::class$ = nullptr;