#include <MetafactoryParameterCastTest$BSink.h>
#include <MetafactoryParameterCastTest$B.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest$B = ::MetafactoryParameterCastTest$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* MetafactoryParameterCastTest$BSink::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"take", "(LMetafactoryParameterCastTest$B;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetafactoryParameterCastTest$BSink, take, void, $MetafactoryParameterCastTest$B*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryParameterCastTest$BSink", "MetafactoryParameterCastTest", "BSink", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MetafactoryParameterCastTest$BSink",
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
		"MetafactoryParameterCastTest"
	};
	$loadClass(MetafactoryParameterCastTest$BSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryParameterCastTest$BSink);
	});
	return class$;
}

$Class* MetafactoryParameterCastTest$BSink::class$ = nullptr;