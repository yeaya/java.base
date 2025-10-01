#include <SpecialInterfaceCall/SpecialInterfaceCall$I1.h>

#include <SpecialInterfaceCall/SpecialInterfaceCall.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SpecialInterfaceCall = ::SpecialInterfaceCall::SpecialInterfaceCall;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace SpecialInterfaceCall {

$MethodInfo _SpecialInterfaceCall$I1_MethodInfo_[] = {
	{"priv_m", "()V", nullptr, $PRIVATE, $method(static_cast<void(SpecialInterfaceCall$I1::*)()>(&SpecialInterfaceCall$I1::priv_m))},
	{"pub_m", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$I1_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$I1", "SpecialInterfaceCall.SpecialInterfaceCall", "I1", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$I1_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SpecialInterfaceCall.SpecialInterfaceCall$I1",
	nullptr,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$I1_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$I1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$I1($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$I1));
}

void SpecialInterfaceCall$I1::pub_m() {
}

void SpecialInterfaceCall$I1::priv_m() {
}

$Class* SpecialInterfaceCall$I1::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$I1, name, initialize, &_SpecialInterfaceCall$I1_ClassInfo_, allocate$SpecialInterfaceCall$I1);
	return class$;
}

$Class* SpecialInterfaceCall$I1::class$ = nullptr;

} // SpecialInterfaceCall