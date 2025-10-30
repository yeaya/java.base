#include <ClassAttributesTest$1LocalClass.h>

#include <ClassAttributesTest.h>
#include <jcpp.h>

using $ClassAttributesTest = ::ClassAttributesTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ClassAttributesTest$1LocalClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassAttributesTest$1LocalClass::*)()>(&ClassAttributesTest$1LocalClass::init$))},
	{}
};

$EnclosingMethodInfo _ClassAttributesTest$1LocalClass_EnclosingMethodInfo_ = {
	"ClassAttributesTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ClassAttributesTest$1LocalClass_InnerClassesInfo_[] = {
	{"ClassAttributesTest$1LocalClass", nullptr, "LocalClass", 0},
	{}
};

$ClassInfo _ClassAttributesTest$1LocalClass_ClassInfo_ = {
	$ACC_SUPER,
	"ClassAttributesTest$1LocalClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClassAttributesTest$1LocalClass_MethodInfo_,
	nullptr,
	&_ClassAttributesTest$1LocalClass_EnclosingMethodInfo_,
	_ClassAttributesTest$1LocalClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ClassAttributesTest"
};

$Object* allocate$ClassAttributesTest$1LocalClass($Class* clazz) {
	return $of($alloc(ClassAttributesTest$1LocalClass));
}

void ClassAttributesTest$1LocalClass::init$() {
}

ClassAttributesTest$1LocalClass::ClassAttributesTest$1LocalClass() {
}

$Class* ClassAttributesTest$1LocalClass::load$($String* name, bool initialize) {
	$loadClass(ClassAttributesTest$1LocalClass, name, initialize, &_ClassAttributesTest$1LocalClass_ClassInfo_, allocate$ClassAttributesTest$1LocalClass);
	return class$;
}

$Class* ClassAttributesTest$1LocalClass::class$ = nullptr;