#include <SpecialInterfaceCall/SpecialInterfaceCall$Test.h>

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

$MethodInfo _SpecialInterfaceCall$Test_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _SpecialInterfaceCall$Test_InnerClassesInfo_[] = {
	{"SpecialInterfaceCall.SpecialInterfaceCall$Test", "SpecialInterfaceCall.SpecialInterfaceCall", "Test", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SpecialInterfaceCall$Test_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"SpecialInterfaceCall.SpecialInterfaceCall$Test",
	nullptr,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$Test_MethodInfo_,
	nullptr,
	nullptr,
	_SpecialInterfaceCall$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SpecialInterfaceCall.SpecialInterfaceCall"
};

$Object* allocate$SpecialInterfaceCall$Test($Class* clazz) {
	return $of($alloc(SpecialInterfaceCall$Test));
}

$Class* SpecialInterfaceCall$Test::load$($String* name, bool initialize) {
	$loadClass(SpecialInterfaceCall$Test, name, initialize, &_SpecialInterfaceCall$Test_ClassInfo_, allocate$SpecialInterfaceCall$Test);
	return class$;
}

$Class* SpecialInterfaceCall$Test::class$ = nullptr;

} // SpecialInterfaceCall