#include <SpecialInterfaceCall/SpecialInterfaceCall$D1.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $SpecialInterfaceCall$I1 = ::SpecialInterfaceCall::SpecialInterfaceCall$I1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$D1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SpecialInterfaceCall$D1::*)()>(&SpecialInterfaceCall$D1::init$))},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$D1_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$D1", "SpecialInterfaceCall.SpecialInterfaceCall", "D1", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$D1_ClassInfo_ = {
	$ACC_SUPER,
	"SpecialInterfaceCall.SpecialInterfaceCall$D1",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$I1",
	nullptr,
	_SpecialInterfaceCall$D1_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$D1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$D1($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$D1));
}

void SpecialInterfaceCall$D1::init$() {
}

SpecialInterfaceCall$D1::SpecialInterfaceCall$D1() {
}

$Class* SpecialInterfaceCall$D1::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$D1, name, initialize, &_SpecialInterfaceCall$D1_ClassInfo_, allocate$SpecialInterfaceCall$D1);
	return class$;
}

$Class* SpecialInterfaceCall$D1::class$ = nullptr;

} // SpecialInterfaceCall