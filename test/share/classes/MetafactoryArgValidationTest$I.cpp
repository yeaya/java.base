#include <MetafactoryArgValidationTest$I.h>
#include <MetafactoryArgValidationTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* MetafactoryArgValidationTest$I::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryArgValidationTest$I", "MetafactoryArgValidationTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MetafactoryArgValidationTest$I",
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
		"MetafactoryArgValidationTest"
	};
	$loadClass(MetafactoryArgValidationTest$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryArgValidationTest$I);
	});
	return class$;
}

$Class* MetafactoryArgValidationTest$I::class$ = nullptr;