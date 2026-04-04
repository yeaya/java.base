#include <MetafactoryMethodNameTest$I.h>
#include <MetafactoryMethodNameTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$Class* MetafactoryMethodNameTest$I::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryMethodNameTest$I", "MetafactoryMethodNameTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MetafactoryMethodNameTest$I",
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
		"MetafactoryMethodNameTest"
	};
	$loadClass(MetafactoryMethodNameTest$I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryMethodNameTest$I);
	});
	return class$;
}

$Class* MetafactoryMethodNameTest$I::class$ = nullptr;