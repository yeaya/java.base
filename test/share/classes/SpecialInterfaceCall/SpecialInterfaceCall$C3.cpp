#include <SpecialInterfaceCall/SpecialInterfaceCall$C3.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$C3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$C3, init$, void)},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$C3_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$C3", "SpecialInterfaceCall.SpecialInterfaceCall", "C3", $STATIC},
	{"SpecialInterfaceCall.SpecialInterfaceCall$I3", "SpecialInterfaceCall.SpecialInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$C3_ClassInfo_ = {
	$ACC_SUPER,
	"SpecialInterfaceCall.SpecialInterfaceCall$C3",
	"java.lang.Object",
	"SpecialInterfaceCall.SpecialInterfaceCall$I3",
	nullptr,
	_SpecialInterfaceCall$C3_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$C3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$C3($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$C3));
}

void SpecialInterfaceCall$C3::init$() {
}

SpecialInterfaceCall$C3::SpecialInterfaceCall$C3() {
}

$Class* SpecialInterfaceCall$C3::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$C3, name, initialize, &_SpecialInterfaceCall$C3_ClassInfo_, allocate$SpecialInterfaceCall$C3);
	return class$;
}

$Class* SpecialInterfaceCall$C3::class$ = nullptr;

} // SpecialInterfaceCall