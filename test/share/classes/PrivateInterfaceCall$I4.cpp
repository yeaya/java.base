#include <PrivateInterfaceCall$I4.h>

#include <PrivateInterfaceCall.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$I4_MethodInfo_[] = {
	{"invokeDirect", "(LPrivateInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall$I4, invokeDirect, void, PrivateInterfaceCall$I4*)},
	{"invokeDirectFinal", "(LPrivateInterfaceCall$I4;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrivateInterfaceCall$I4, invokeDirectFinal, void, PrivateInterfaceCall$I4*)},
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