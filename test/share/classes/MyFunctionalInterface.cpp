#include <MyFunctionalInterface.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MyFunctionalInterface_MethodInfo_[] = {
	{"invokeMethodReference", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MyFunctionalInterface_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"MyFunctionalInterface",
	nullptr,
	nullptr,
	nullptr,
	_MyFunctionalInterface_MethodInfo_
};

$Object* allocate$MyFunctionalInterface($Class* clazz) {
	return $of($alloc(MyFunctionalInterface));
}

$Class* MyFunctionalInterface::load$($String* name, bool initialize) {
	$loadClass(MyFunctionalInterface, name, initialize, &_MyFunctionalInterface_ClassInfo_, allocate$MyFunctionalInterface);
	return class$;
}

$Class* MyFunctionalInterface::class$ = nullptr;