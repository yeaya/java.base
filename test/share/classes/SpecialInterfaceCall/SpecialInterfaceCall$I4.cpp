#include <SpecialInterfaceCall/SpecialInterfaceCall$I4.h>
#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

void SpecialInterfaceCall$I4::invokeDirect(SpecialInterfaceCall$I4* i) {
	$init(SpecialInterfaceCall$I4);
	$throwNew($Error, "Class file for I4 is not overwritten"_s);
}

void SpecialInterfaceCall$I4::invokeDirectFinal(SpecialInterfaceCall$I4* i) {
	$init(SpecialInterfaceCall$I4);
	$throwNew($Error, "Class file for I4 is not overwritten"_s);
}

$Class* SpecialInterfaceCall$I4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"invokeDirect", "(LSpecialInterfaceCall/SpecialInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall$I4, invokeDirect, void, SpecialInterfaceCall$I4*)},
		{"invokeDirectFinal", "(LSpecialInterfaceCall/SpecialInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialInterfaceCall$I4, invokeDirectFinal, void, SpecialInterfaceCall$I4*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SpecialInterfaceCall.SpecialInterfaceCall$I4", "SpecialInterfaceCall.SpecialInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
		{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"SpecialInterfaceCall.SpecialInterfaceCall$I4",
		nullptr,
		"SpecialInterfaceCall.SpecialInterfaceCall$I1",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SpecialInterfaceCall.SpecialInterfaceCall"
	};
	$loadClass(SpecialInterfaceCall$I4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialInterfaceCall$I4);
	});
	return class$;
}

$Class* SpecialInterfaceCall$I4::class$ = nullptr;

} // SpecialInterfaceCall