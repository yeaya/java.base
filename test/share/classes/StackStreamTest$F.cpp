#include <StackStreamTest$F.h>

#include <StackStreamTest$G.h>
#include <StackStreamTest$K.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$G = ::StackStreamTest$G;
using $StackStreamTest$K = ::StackStreamTest$K;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$F_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StackStreamTest$F, init$, void)},
	{"f", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$F, f, void)},
	{}
};

$InnerClassInfo _StackStreamTest$F_InnerClassesInfo_[] = {
	{"StackStreamTest$F", "StackStreamTest", "F", $STATIC},
	{}
};

$ClassInfo _StackStreamTest$F_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$F",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest$F_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$F_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$F($Class* clazz) {
	return $of($alloc(StackStreamTest$F));
}

void StackStreamTest$F::init$() {
}

void StackStreamTest$F::f() {
	$StackStreamTest$G::g();
	$$new($StackStreamTest$K)->k();
}

StackStreamTest$F::StackStreamTest$F() {
}

$Class* StackStreamTest$F::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$F, name, initialize, &_StackStreamTest$F_ClassInfo_, allocate$StackStreamTest$F);
	return class$;
}

$Class* StackStreamTest$F::class$ = nullptr;