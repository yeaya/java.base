#include <PrivateInterfaceCall$C4.h>

#include <PrivateInterfaceCall.h>
#include <jcpp.h>

using $PrivateInterfaceCall = ::PrivateInterfaceCall;
using $PrivateInterfaceCall$I4 = ::PrivateInterfaceCall$I4;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$C4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrivateInterfaceCall$C4::*)()>(&PrivateInterfaceCall$C4::init$))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$C4_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$C4", "PrivateInterfaceCall", "C4", $STATIC},
	{"PrivateInterfaceCall$I4", "PrivateInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$C4_ClassInfo_ = {
	$ACC_SUPER,
	"PrivateInterfaceCall$C4",
	"java.lang.Object",
	"PrivateInterfaceCall$I4",
	nullptr,
	_PrivateInterfaceCall$C4_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$C4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$C4($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$C4));
}

void PrivateInterfaceCall$C4::init$() {
}

PrivateInterfaceCall$C4::PrivateInterfaceCall$C4() {
}

$Class* PrivateInterfaceCall$C4::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$C4, name, initialize, &_PrivateInterfaceCall$C4_ClassInfo_, allocate$PrivateInterfaceCall$C4);
	return class$;
}

$Class* PrivateInterfaceCall$C4::class$ = nullptr;