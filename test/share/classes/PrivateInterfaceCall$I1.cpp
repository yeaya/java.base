#include <PrivateInterfaceCall$I1.h>

#include <PrivateInterfaceCall.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$I1_MethodInfo_[] = {
	{"priv_m", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrivateInterfaceCall$I1::*)()>(&PrivateInterfaceCall$I1::priv_m))},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$I1_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$I1", "PrivateInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$I1_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"PrivateInterfaceCall$I1",
	nullptr,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$I1_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$I1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$I1($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$I1));
}

void PrivateInterfaceCall$I1::priv_m() {
	$throwNew($Error, "Should not call this"_s);
}

$Class* PrivateInterfaceCall$I1::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$I1, name, initialize, &_PrivateInterfaceCall$I1_ClassInfo_, allocate$PrivateInterfaceCall$I1);
	return class$;
}

$Class* PrivateInterfaceCall$I1::class$ = nullptr;