#include <MetafactoryParameterCastTest$ASink.h>
#include <MetafactoryParameterCastTest$A.h>
#include <MetafactoryParameterCastTest.h>
#include <jcpp.h>

using $MetafactoryParameterCastTest$A = ::MetafactoryParameterCastTest$A;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* MetafactoryParameterCastTest$ASink::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"take", "(LMetafactoryParameterCastTest$A;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetafactoryParameterCastTest$ASink, take, void, $MetafactoryParameterCastTest$A*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"MetafactoryParameterCastTest$ASink", "MetafactoryParameterCastTest", "ASink", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"MetafactoryParameterCastTest$ASink",
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
	$loadClass(MetafactoryParameterCastTest$ASink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetafactoryParameterCastTest$ASink);
	});
	return class$;
}

$Class* MetafactoryParameterCastTest$ASink::class$ = nullptr;