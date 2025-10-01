#include <InheritedInterfaceMethodsA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedInterfaceMethodsA_MethodInfo_[] = {
	{"a", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InheritedInterfaceMethodsA_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"InheritedInterfaceMethodsA",
	nullptr,
	nullptr,
	nullptr,
	_InheritedInterfaceMethodsA_MethodInfo_
};

$Object* allocate$InheritedInterfaceMethodsA($Class* clazz) {
	return $of($alloc(InheritedInterfaceMethodsA));
}

$Class* InheritedInterfaceMethodsA::load$($String* name, bool initialize) {
	$loadClass(InheritedInterfaceMethodsA, name, initialize, &_InheritedInterfaceMethodsA_ClassInfo_, allocate$InheritedInterfaceMethodsA);
	return class$;
}

$Class* InheritedInterfaceMethodsA::class$ = nullptr;