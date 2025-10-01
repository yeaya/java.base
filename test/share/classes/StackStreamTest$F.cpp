#include <StackStreamTest$F.h>

#include <StackStreamTest$G.h>
#include <StackStreamTest$K.h>
#include <StackStreamTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StackStreamTest = ::StackStreamTest;
using $StackStreamTest$G = ::StackStreamTest$G;
using $StackStreamTest$K = ::StackStreamTest$K;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$F_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StackStreamTest$F::*)()>(&StackStreamTest$F::init$))},
	{"f", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&StackStreamTest$F::f))},
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