#include <InheritedMethodTest$I.h>

#include <InheritedMethodTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InheritedMethodTest = ::InheritedMethodTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedMethodTest$I_MethodInfo_[] = {
	{"iString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _InheritedMethodTest$I_InnerClassesInfo_[] = {
	{"InheritedMethodTest$I", "InheritedMethodTest", "I", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethodTest$I_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"InheritedMethodTest$I",
	nullptr,
	nullptr,
	nullptr,
	_InheritedMethodTest$I_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedMethodTest$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritedMethodTest"
};

$Object* allocate$InheritedMethodTest$I($Class* clazz) {
	return $of($alloc(InheritedMethodTest$I));
}

$Class* InheritedMethodTest$I::load$($String* name, bool initialize) {
	$loadClass(InheritedMethodTest$I, name, initialize, &_InheritedMethodTest$I_ClassInfo_, allocate$InheritedMethodTest$I);
	return class$;
}

$Class* InheritedMethodTest$I::class$ = nullptr;