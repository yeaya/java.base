#include <SpecialInterfaceCall/SpecialInterfaceCall$C4.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $SpecialInterfaceCall$I4 = ::SpecialInterfaceCall::SpecialInterfaceCall$I4;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$C4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SpecialInterfaceCall$C4::*)()>(&SpecialInterfaceCall$C4::init$))},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$C4_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$C4", "SpecialInterfaceCall.SpecialInterfaceCall", "C4", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I4", "SpecialInterfaceCall.SpecialInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$C4_ClassInfo_ = {
	$ACC_SUPER,
	"SpecialInterfaceCall.SpecialInterfaceCall$C4",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$I4",
	nullptr,
	_SpecialInterfaceCall$C4_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$C4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$C4($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$C4));
}

void SpecialInterfaceCall$C4::init$() {
}

SpecialInterfaceCall$C4::SpecialInterfaceCall$C4() {
}

$Class* SpecialInterfaceCall$C4::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$C4, name, initialize, &_SpecialInterfaceCall$C4_ClassInfo_, allocate$SpecialInterfaceCall$C4);
	return class$;
}

$Class* SpecialInterfaceCall$C4::class$ = nullptr;

} // SpecialInterfaceCall