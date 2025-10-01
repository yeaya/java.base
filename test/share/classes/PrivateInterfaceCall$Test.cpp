#include <PrivateInterfaceCall$Test.h>

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
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PrivateInterfaceCall$Test_MethodInfo_[] = {
	{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$Test_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$Test", "PrivateInterfaceCall", "Test", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$Test_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"PrivateInterfaceCall$Test",
	nullptr,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$Test_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$Test($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$Test));
}

$Class* PrivateInterfaceCall$Test::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$Test, name, initialize, &_PrivateInterfaceCall$Test_ClassInfo_, allocate$PrivateInterfaceCall$Test);
	return class$;
}

$Class* PrivateInterfaceCall$Test::class$ = nullptr;