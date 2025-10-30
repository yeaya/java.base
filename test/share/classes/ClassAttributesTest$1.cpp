#include <ClassAttributesTest$1.h>

#include <ClassAttributesTest.h>
#include <jcpp.h>

using $ClassAttributesTest = ::ClassAttributesTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ClassAttributesTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassAttributesTest$1::*)()>(&ClassAttributesTest$1::init$))},
	{}
};

$EnclosingMethodInfo _ClassAttributesTest$1_EnclosingMethodInfo_ = {
	"ClassAttributesTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ClassAttributesTest$1_InnerClassesInfo_[] = {
	{"ClassAttributesTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassAttributesTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ClassAttributesTest$1",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_ClassAttributesTest$1_MethodInfo_,
	nullptr,
	&_ClassAttributesTest$1_EnclosingMethodInfo_,
	_ClassAttributesTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ClassAttributesTest"
};

$Object* allocate$ClassAttributesTest$1($Class* clazz) {
	return $of($alloc(ClassAttributesTest$1));
}

void ClassAttributesTest$1::init$() {
}

ClassAttributesTest$1::ClassAttributesTest$1() {
}

$Class* ClassAttributesTest$1::load$($String* name, bool initialize) {
	$loadClass(ClassAttributesTest$1, name, initialize, &_ClassAttributesTest$1_ClassInfo_, allocate$ClassAttributesTest$1);
	return class$;
}

$Class* ClassAttributesTest$1::class$ = nullptr;