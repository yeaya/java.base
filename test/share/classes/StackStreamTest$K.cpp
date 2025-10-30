#include <StackStreamTest$K.h>

#include <StackStreamTest$K$Caller.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest = ::StackStreamTest;
using $StackStreamTest$K$Caller = ::StackStreamTest$K$Caller;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$K_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StackStreamTest$K::*)()>(&StackStreamTest$K::init$))},
	{"k", "()V", nullptr, 0},
	{"k1", "()V", nullptr, 0},
	{"k10", "()V", nullptr, 0},
	{"k2", "()V", nullptr, 0},
	{"k20", "()V", nullptr, 0},
	{"k3", "()V", nullptr, 0},
	{"k4", "()V", nullptr, 0},
	{"k5", "()V", nullptr, 0},
	{"k6", "()V", nullptr, 0},
	{"k7", "()V", nullptr, 0},
	{"k8", "()V", nullptr, 0},
	{"k9", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _StackStreamTest$K_InnerClassesInfo_[] = {
	{"StackStreamTest$K", "StackStreamTest", "K", $STATIC},
	{"StackStreamTest$K$Caller", "StackStreamTest$K", "Caller", 0},
	{}
};

$ClassInfo _StackStreamTest$K_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$K",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest$K_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$K_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$K($Class* clazz) {
	return $of($alloc(StackStreamTest$K));
}

void StackStreamTest$K::init$() {
}

void StackStreamTest$K::k() {
	k1();
}

void StackStreamTest$K::k1() {
	k2();
}

void StackStreamTest$K::k2() {
	k3();
}

void StackStreamTest$K::k3() {
	k4();
}

void StackStreamTest$K::k4() {
	k5();
}

void StackStreamTest$K::k5() {
	k6();
}

void StackStreamTest$K::k6() {
	k7();
}

void StackStreamTest$K::k7() {
	k8();
}

void StackStreamTest$K::k8() {
	k9();
}

void StackStreamTest$K::k9() {
	k10();
}

void StackStreamTest$K::k10() {
	k20();
}

void StackStreamTest$K::k20() {
	$$new($StackStreamTest$K$Caller, this)->test();
}

StackStreamTest$K::StackStreamTest$K() {
}

$Class* StackStreamTest$K::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$K, name, initialize, &_StackStreamTest$K_ClassInfo_, allocate$StackStreamTest$K);
	return class$;
}

$Class* StackStreamTest$K::class$ = nullptr;