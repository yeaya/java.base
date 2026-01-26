#include <StackStreamTest$B.h>

#include <StackStreamTest$C.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$C = ::StackStreamTest$C;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StackStreamTest$B, init$, void)},
	{"b", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(StackStreamTest$B, b, void)},
	{}
};

$InnerClassInfo _StackStreamTest$B_InnerClassesInfo_[] = {
	{"StackStreamTest$B", "StackStreamTest", "B", $STATIC},
	{}
};

$ClassInfo _StackStreamTest$B_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$B",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest$B_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$B_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$B($Class* clazz) {
	return $of($alloc(StackStreamTest$B));
}

void StackStreamTest$B::init$() {
}

void StackStreamTest$B::b() {
	$StackStreamTest$C::c();
}

StackStreamTest$B::StackStreamTest$B() {
}

$Class* StackStreamTest$B::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$B, name, initialize, &_StackStreamTest$B_ClassInfo_, allocate$StackStreamTest$B);
	return class$;
}

$Class* StackStreamTest$B::class$ = nullptr;