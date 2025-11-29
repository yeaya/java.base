#include <StackStreamTest$C.h>

#include <StackStreamTest$D.h>
#include <StackStreamTest.h>
#include <jcpp.h>

using $StackStreamTest$D = ::StackStreamTest$D;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StackStreamTest$C::*)()>(&StackStreamTest$C::init$))},
	{"c", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&StackStreamTest$C::c))},
	{}
};

$InnerClassInfo _StackStreamTest$C_InnerClassesInfo_[] = {
	{"StackStreamTest$C", "StackStreamTest", "C", $STATIC},
	{}
};

$ClassInfo _StackStreamTest$C_ClassInfo_ = {
	$ACC_SUPER,
	"StackStreamTest$C",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StackStreamTest$C_MethodInfo_,
	nullptr,
	nullptr,
	_StackStreamTest$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StackStreamTest"
};

$Object* allocate$StackStreamTest$C($Class* clazz) {
	return $of($alloc(StackStreamTest$C));
}

void StackStreamTest$C::init$() {
}

void StackStreamTest$C::c() {
	$StackStreamTest$D::d();
}

StackStreamTest$C::StackStreamTest$C() {
}

$Class* StackStreamTest$C::load$($String* name, bool initialize) {
	$loadClass(StackStreamTest$C, name, initialize, &_StackStreamTest$C_ClassInfo_, allocate$StackStreamTest$C);
	return class$;
}

$Class* StackStreamTest$C::class$ = nullptr;