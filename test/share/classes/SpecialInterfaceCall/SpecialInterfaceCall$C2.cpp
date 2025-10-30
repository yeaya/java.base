#include <SpecialInterfaceCall/SpecialInterfaceCall$C2.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $SpecialInterfaceCall$I2 = ::SpecialInterfaceCall::SpecialInterfaceCall$I2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$C2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SpecialInterfaceCall$C2::*)()>(&SpecialInterfaceCall$C2::init$))},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$C2_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$C2", "SpecialInterfaceCall.SpecialInterfaceCall", "C2", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I2", "SpecialInterfaceCall.SpecialInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$C2_ClassInfo_ = {
	$ACC_SUPER,
	"SpecialInterfaceCall.SpecialInterfaceCall$C2",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$I2",
	nullptr,
	_SpecialInterfaceCall$C2_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$C2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$C2($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$C2));
}

void SpecialInterfaceCall$C2::init$() {
}

SpecialInterfaceCall$C2::SpecialInterfaceCall$C2() {
}

$Class* SpecialInterfaceCall$C2::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$C2, name, initialize, &_SpecialInterfaceCall$C2_ClassInfo_, allocate$SpecialInterfaceCall$C2);
	return class$;
}

$Class* SpecialInterfaceCall$C2::class$ = nullptr;

} // SpecialInterfaceCall