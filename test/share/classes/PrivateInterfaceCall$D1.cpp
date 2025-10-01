#include <PrivateInterfaceCall$D1.h>

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
using $PrivateInterfaceCall$I1 = ::PrivateInterfaceCall$I1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$D1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PrivateInterfaceCall$D1::*)()>(&PrivateInterfaceCall$D1::init$))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$D1_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$D1", "PrivateInterfaceCall", "D1", $STATIC},
	{"PrivateInterfaceCall$I1", "PrivateInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$D1_ClassInfo_ = {
	$ACC_SUPER,
	"PrivateInterfaceCall$D1",
	"java.lang.Object",
	"PrivateInterfaceCall$I1",
	nullptr,
	_PrivateInterfaceCall$D1_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$D1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$D1($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$D1));
}

void PrivateInterfaceCall$D1::init$() {
}

PrivateInterfaceCall$D1::PrivateInterfaceCall$D1() {
}

$Class* PrivateInterfaceCall$D1::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$D1, name, initialize, &_PrivateInterfaceCall$D1_ClassInfo_, allocate$PrivateInterfaceCall$D1);
	return class$;
}

$Class* PrivateInterfaceCall$D1::class$ = nullptr;