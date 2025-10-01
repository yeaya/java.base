#include <StackStreamTest$B.h>

#include <StackStreamTest$C.h>
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
using $StackStreamTest$C = ::StackStreamTest$C;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StackStreamTest$B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StackStreamTest$B::*)()>(&StackStreamTest$B::init$))},
	{"b", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&StackStreamTest$B::b))},
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