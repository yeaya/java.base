#include <SpecialInterfaceCall/SpecialInterfaceCall$E.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$E_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SpecialInterfaceCall$E, init$, void)},
	{"priv_m", "()V", nullptr, $PRIVATE, $method(SpecialInterfaceCall$E, priv_m, void)},
	{"pub_m", "()V", nullptr, $PUBLIC, $virtualMethod(SpecialInterfaceCall$E, pub_m, void)},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$E_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$E", "SpecialInterfaceCall.SpecialInterfaceCall", "E", $STATIC},
	{}
};

$ClassInfo _SpecialInterfaceCall$E_ClassInfo_ = {
	$ACC_SUPER,
	"SpecialInterfaceCall.SpecialInterfaceCall$E",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SpecialInterfaceCall$E_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$E_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$E($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$E));
}

void SpecialInterfaceCall$E::init$() {
}

void SpecialInterfaceCall$E::pub_m() {
}

void SpecialInterfaceCall$E::priv_m() {
}

SpecialInterfaceCall$E::SpecialInterfaceCall$E() {
}

$Class* SpecialInterfaceCall$E::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$E, name, initialize, &_SpecialInterfaceCall$E_ClassInfo_, allocate$SpecialInterfaceCall$E);
	return class$;
}

$Class* SpecialInterfaceCall$E::class$ = nullptr;

} // SpecialInterfaceCall