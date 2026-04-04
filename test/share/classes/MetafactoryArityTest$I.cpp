#include <MetafactoryArityTest$I.h>
#include <MetafactoryArityTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* MetafactoryArityTest$I::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryArityTest$I", "MetafactoryArityTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MetafactoryArityTest$I",
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
		"MetafactoryArityTest"
	};
	$loadClass(MetafactoryArityTest$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryArityTest$I);
	});
	return class$;
}

$Class* MetafactoryArityTest$I::class$ = nullptr;