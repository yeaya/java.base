#include <StaticFieldsOnInterface$A.h>
#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

#undef CONSTANT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* StaticFieldsOnInterface$A::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONSTANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StaticFieldsOnInterface$A, CONSTANT)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"StaticFieldsOnInterface$A",
		nullptr,
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StaticFieldsOnInterface"
	};
	$loadClass(StaticFieldsOnInterface$A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticFieldsOnInterface$A);
	});
	return class$;
}

$Class* StaticFieldsOnInterface$A::class$ = nullptr;