#include <InheritedInterfaceMethodsB.h>

#include <jcpp.h>

using $InheritedInterfaceMethodsA = ::InheritedInterfaceMethodsA;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedInterfaceMethodsB_MethodInfo_[] = {
	{"b", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InheritedInterfaceMethodsB_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"InheritedInterfaceMethodsB",
	nullptr,
	"InheritedInterfaceMethodsA",
	nullptr,
	_InheritedInterfaceMethodsB_MethodInfo_
};

$Object* allocate$InheritedInterfaceMethodsB($Class* clazz) {
	return $of($alloc(InheritedInterfaceMethodsB));
}

$Class* InheritedInterfaceMethodsB::load$($String* name, bool initialize) {
	$loadClass(InheritedInterfaceMethodsB, name, initialize, &_InheritedInterfaceMethodsB_ClassInfo_, allocate$InheritedInterfaceMethodsB);
	return class$;
}

$Class* InheritedInterfaceMethodsB::class$ = nullptr;