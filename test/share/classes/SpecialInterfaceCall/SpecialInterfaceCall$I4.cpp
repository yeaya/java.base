#include <SpecialInterfaceCall/SpecialInterfaceCall$I4.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $SpecialInterfaceCall$I1 = ::SpecialInterfaceCall::SpecialInterfaceCall$I1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$I4_MethodInfo_[] = {
	{"invokeDirect", "(LSpecialInterfaceCall/SpecialInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SpecialInterfaceCall$I4*)>(&SpecialInterfaceCall$I4::invokeDirect))},
	{"invokeDirectFinal", "(LSpecialInterfaceCall/SpecialInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(SpecialInterfaceCall$I4*)>(&SpecialInterfaceCall$I4::invokeDirectFinal))},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$I4_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$I4", "SpecialInterfaceCall.SpecialInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$I4_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SpecialInterfaceCall.SpecialInterfaceCall$I4",
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall$I1",
	nullptr,
	_SpecialInterfaceCall$I4_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$I4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$I4($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$I4));
}

void SpecialInterfaceCall$I4::invokeDirect(SpecialInterfaceCall$I4* i) {
	$init(SpecialInterfaceCall$I4);
	$throwNew($Error, "Class file for I4 is not overwritten"_s);
}

void SpecialInterfaceCall$I4::invokeDirectFinal(SpecialInterfaceCall$I4* i) {
	$init(SpecialInterfaceCall$I4);
	$throwNew($Error, "Class file for I4 is not overwritten"_s);
}

$Class* SpecialInterfaceCall$I4::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$I4, name, initialize, &_SpecialInterfaceCall$I4_ClassInfo_, allocate$SpecialInterfaceCall$I4);
	return class$;
}

$Class* SpecialInterfaceCall$I4::class$ = nullptr;

} // SpecialInterfaceCall