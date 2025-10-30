#include <SpecialInterfaceCall/SpecialInterfaceCall$C1.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $SpecialInterfaceCall$I1 = ::SpecialInterfaceCall::SpecialInterfaceCall$I1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$C1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SpecialInterfaceCall$C1::*)()>(&SpecialInterfaceCall$C1::init$))},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$C1_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$C1", "SpecialInterfaceCall.SpecialInterfaceCall", "C1", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$C1_ClassInfo_ = {
	$ACC_SUPER,
	"SpecialInterfaceCall.SpecialInterfaceCall$C1",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$I1",
	nullptr,
	_SpecialInterfaceCall$C1_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$C1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$C1($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$C1));
}

void SpecialInterfaceCall$C1::init$() {
}

SpecialInterfaceCall$C1::SpecialInterfaceCall$C1() {
}

$Class* SpecialInterfaceCall$C1::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$C1, name, initialize, &_SpecialInterfaceCall$C1_ClassInfo_, allocate$SpecialInterfaceCall$C1);
	return class$;
}

$Class* SpecialInterfaceCall$C1::class$ = nullptr;

} // SpecialInterfaceCall