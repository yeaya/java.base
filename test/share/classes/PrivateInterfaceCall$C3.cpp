#include <PrivateInterfaceCall$C3.h>

#include <PrivateInterfaceCall.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrivateInterfaceCall = ::PrivateInterfaceCall;
using $PrivateInterfaceCall$I3 = ::PrivateInterfaceCall$I3;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$C3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrivateInterfaceCall$C3::*)()>(&PrivateInterfaceCall$C3::init$))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$C3_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$C3", "PrivateInterfaceCall", "C3", $STATIC},
	{"PrivateInterfaceCall$I3", "PrivateInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$C3_ClassInfo_ = {
	$ACC_SUPER,
	"PrivateInterfaceCall$C3",
	"java.lang.Object",
	"PrivateInterfaceCall$I3",
	nullptr,
	_PrivateInterfaceCall$C3_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$C3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$C3($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$C3));
}

void PrivateInterfaceCall$C3::init$() {
}

PrivateInterfaceCall$C3::PrivateInterfaceCall$C3() {
}

$Class* PrivateInterfaceCall$C3::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$C3, name, initialize, &_PrivateInterfaceCall$C3_ClassInfo_, allocate$PrivateInterfaceCall$C3);
	return class$;
}

$Class* PrivateInterfaceCall$C3::class$ = nullptr;