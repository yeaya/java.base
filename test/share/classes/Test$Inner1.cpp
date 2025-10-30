#include <Test$Inner1.h>

#include <Test.h>
#include <jcpp.h>

using $Test = ::Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test$Inner1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test$Inner1::*)()>(&Test$Inner1::init$))},
	{"bar", "([Ljava/lang/Object;)V", "([TU;)V", 0},
	{}
};

$InnerClassInfo _Test$Inner1_InnerClassesInfo_[] = {
	{"Test$Inner1", "Test", "Inner1", $STATIC},
	{}
};

$ClassInfo _Test$Inner1_ClassInfo_ = {
	$ACC_SUPER,
	"Test$Inner1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test$Inner1_MethodInfo_,
	"<U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Test$Inner1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test"
};

$Object* allocate$Test$Inner1($Class* clazz) {
	return $of($alloc(Test$Inner1));
}

void Test$Inner1::init$() {
}

void Test$Inner1::bar($ObjectArray* array1) {
	return;
}

Test$Inner1::Test$Inner1() {
}

$Class* Test$Inner1::load$($String* name, bool initialize) {
	$loadClass(Test$Inner1, name, initialize, &_Test$Inner1_ClassInfo_, allocate$Test$Inner1);
	return class$;
}

$Class* Test$Inner1::class$ = nullptr;