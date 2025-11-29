#include <PrivateInterfaceCall$C2.h>

#include <PrivateInterfaceCall.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$C2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrivateInterfaceCall$C2::*)()>(&PrivateInterfaceCall$C2::init$))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$C2_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$C2", "PrivateInterfaceCall", "C2", $STATIC},
	{"PrivateInterfaceCall$I2", "PrivateInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$C2_ClassInfo_ = {
	$ACC_SUPER,
	"PrivateInterfaceCall$C2",
	"java.lang.Object",
	"PrivateInterfaceCall$I2",
	nullptr,
	_PrivateInterfaceCall$C2_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$C2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$C2($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$C2));
}

void PrivateInterfaceCall$C2::init$() {
}

PrivateInterfaceCall$C2::PrivateInterfaceCall$C2() {
}

$Class* PrivateInterfaceCall$C2::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$C2, name, initialize, &_PrivateInterfaceCall$C2_ClassInfo_, allocate$PrivateInterfaceCall$C2);
	return class$;
}

$Class* PrivateInterfaceCall$C2::class$ = nullptr;