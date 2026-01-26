#include <InheritedMethodTest$C.h>

#include <InheritedMethodTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedMethodTest$C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(InheritedMethodTest$C, init$, void)},
	{}
};

$InnerClassInfo _InheritedMethodTest$C_InnerClassesInfo_[] = {
	{"InheritedMethodTest$C", "InheritedMethodTest", "C", $PUBLIC | $STATIC | $ABSTRACT},
	{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethodTest$C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"InheritedMethodTest$C",
	"java.lang.Object",
	"InheritedMethodTest$I",
	nullptr,
	_InheritedMethodTest$C_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedMethodTest$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritedMethodTest"
};

$Object* allocate$InheritedMethodTest$C($Class* clazz) {
	return $of($alloc(InheritedMethodTest$C));
}

void InheritedMethodTest$C::init$() {
}

InheritedMethodTest$C::InheritedMethodTest$C() {
}

$Class* InheritedMethodTest$C::load$($String* name, bool initialize) {
	$loadClass(InheritedMethodTest$C, name, initialize, &_InheritedMethodTest$C_ClassInfo_, allocate$InheritedMethodTest$C);
	return class$;
}

$Class* InheritedMethodTest$C::class$ = nullptr;