#include <PrivateInterfaceCall$E.h>

#include <PrivateInterfaceCall.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $PrivateInterfaceCall = ::PrivateInterfaceCall;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$E_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrivateInterfaceCall$E::*)()>(&PrivateInterfaceCall$E::init$))},
	{"priv_m", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrivateInterfaceCall$E::*)()>(&PrivateInterfaceCall$E::priv_m))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$E_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$E", "PrivateInterfaceCall", "E", $STATIC},
	{}
};

$ClassInfo _PrivateInterfaceCall$E_ClassInfo_ = {
	$ACC_SUPER,
	"PrivateInterfaceCall$E",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PrivateInterfaceCall$E_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$E_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$E($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$E));
}

void PrivateInterfaceCall$E::init$() {
}

void PrivateInterfaceCall$E::priv_m() {
	$throwNew($Error, "Should not call this"_s);
}

PrivateInterfaceCall$E::PrivateInterfaceCall$E() {
}

$Class* PrivateInterfaceCall$E::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$E, name, initialize, &_PrivateInterfaceCall$E_ClassInfo_, allocate$PrivateInterfaceCall$E);
	return class$;
}

$Class* PrivateInterfaceCall$E::class$ = nullptr;