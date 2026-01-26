#include <StackStreamTest$D.h>

#include <StackStreamTest$E.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$E = ::StackStreamTest$E;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StackStreamTest$D, init$, void)},
	{"d", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$D, d, void)},
	{}
};

$InnerClassInfo _StackStreamTest$D_InnerClassesInfo_[] = {
	{"StackStreamTest$D", "StackStreamTest", "D", $STATIC},
	{}
};

$ClassInfo _StackStreamTest$D_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$D",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest$D_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$D_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$D($Class* clazz) {
	return $of($alloc(StackStreamTest$D));
}

void StackStreamTest$D::init$() {
}

void StackStreamTest$D::d() {
	$StackStreamTest$E::e();
}

StackStreamTest$D::StackStreamTest$D() {
}

$Class* StackStreamTest$D::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$D, name, initialize, &_StackStreamTest$D_ClassInfo_, allocate$StackStreamTest$D);
	return class$;
}

$Class* StackStreamTest$D::class$ = nullptr;