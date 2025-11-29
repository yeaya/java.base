#include <InheritedMethodTest$J.h>

#include <InheritedMethodTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _InheritedMethodTest$J_InnerClassesInfo_[] = {
	{"InheritedMethodTest$J", "InheritedMethodTest", "J", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethodTest$J_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"InheritedMethodTest$J",
	nullptr,
	"InheritedMethodTest$I",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_InheritedMethodTest$J_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritedMethodTest"
};

$Object* allocate$InheritedMethodTest$J($Class* clazz) {
	return $of($alloc(InheritedMethodTest$J));
}

$Class* InheritedMethodTest$J::load$($String* name, bool initialize) {
	$loadClass(InheritedMethodTest$J, name, initialize, &_InheritedMethodTest$J_ClassInfo_, allocate$InheritedMethodTest$J);
	return class$;
}

$Class* InheritedMethodTest$J::class$ = nullptr;