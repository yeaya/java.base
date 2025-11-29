#include <StackStreamTest$E.h>

#include <StackStreamTest$F.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$F = ::StackStreamTest$F;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$E_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StackStreamTest$E::*)()>(&StackStreamTest$E::init$))},
	{"e", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&StackStreamTest$E::e))},
	{}
};

$InnerClassInfo _StackStreamTest$E_InnerClassesInfo_[] = {
	{"StackStreamTest$E", "StackStreamTest", "E", $STATIC},
	{}
};

$ClassInfo _StackStreamTest$E_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$E",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest$E_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$E_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$E($Class* clazz) {
	return $of($alloc(StackStreamTest$E));
}

void StackStreamTest$E::init$() {
}

void StackStreamTest$E::e() {
	$StackStreamTest$F::f();
}

StackStreamTest$E::StackStreamTest$E() {
}

$Class* StackStreamTest$E::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$E, name, initialize, &_StackStreamTest$E_ClassInfo_, allocate$StackStreamTest$E);
	return class$;
}

$Class* StackStreamTest$E::class$ = nullptr;