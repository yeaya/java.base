#include <StackStreamTest$A.h>

#include <StackStreamTest$B.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$B = ::StackStreamTest$B;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StackStreamTest$A, init$, void)},
	{"a", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$A, a, void)},
	{}
};

$InnerClassInfo _StackStreamTest$A_InnerClassesInfo_[] = {
	{"StackStreamTest$A", "StackStreamTest", "A", $STATIC},
	{}
};

$ClassInfo _StackStreamTest$A_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest$A_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$A_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$A($Class* clazz) {
	return $of($alloc(StackStreamTest$A));
}

void StackStreamTest$A::init$() {
}

void StackStreamTest$A::a() {
	$StackStreamTest$B::b();
}

StackStreamTest$A::StackStreamTest$A() {
}

$Class* StackStreamTest$A::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$A, name, initialize, &_StackStreamTest$A_ClassInfo_, allocate$StackStreamTest$A);
	return class$;
}

$Class* StackStreamTest$A::class$ = nullptr;