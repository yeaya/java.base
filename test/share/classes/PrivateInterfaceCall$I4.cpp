#include <PrivateInterfaceCall$I4.h>

#include <PrivateInterfaceCall.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrivateInterfaceCall = ::PrivateInterfaceCall;
using $PrivateInterfaceCall$I1 = ::PrivateInterfaceCall$I1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$I4_MethodInfo_[] = {
	{"invokeDirect", "(LPrivateInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PrivateInterfaceCall$I4*)>(&PrivateInterfaceCall$I4::invokeDirect))},
	{"invokeDirectFinal", "(LPrivateInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PrivateInterfaceCall$I4*)>(&PrivateInterfaceCall$I4::invokeDirectFinal))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$I4_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$I4", "PrivateInterfaceCall", "I4", $STATIC | $INTERFACE | $ABSTRACT},
	{"PrivateInterfaceCall$I1", "PrivateInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$I4_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"PrivateInterfaceCall$I4",
	nullptr,
	"PrivateInterfaceCall$I1",
	nullptr,
	_PrivateInterfaceCall$I4_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$I4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$I4($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$I4));
}

void PrivateInterfaceCall$I4::invokeDirect(PrivateInterfaceCall$I4* i) {
	$init(PrivateInterfaceCall$I4);
	$throwNew($Error, "Class file for I4 is not overwritten"_s);
}

void PrivateInterfaceCall$I4::invokeDirectFinal(PrivateInterfaceCall$I4* i) {
	$init(PrivateInterfaceCall$I4);
	$throwNew($Error, "Class file for I4 is not overwritten"_s);
}

$Class* PrivateInterfaceCall$I4::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$I4, name, initialize, &_PrivateInterfaceCall$I4_ClassInfo_, allocate$PrivateInterfaceCall$I4);
	return class$;
}

$Class* PrivateInterfaceCall$I4::class$ = nullptr;