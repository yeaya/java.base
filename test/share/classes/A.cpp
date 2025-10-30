#include <A.h>

#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(A::*)()>(&A::init$))},
	{}
};

$InnerClassInfo _A_InnerClassesInfo_[] = {
	{"A$B", "A", "B", 0},
	{}
};

$ClassInfo _A_ClassInfo_ = {
	$ACC_SUPER,
	"A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_A_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_A_InnerClassesInfo_,
	nullptr,
	nullptr,
	"A$B"
};

$Object* allocate$A($Class* clazz) {
	return $of($alloc(A));
}

void A::init$() {
}

A::A() {
}

$Class* A::load$($String* name, bool initialize) {
	$loadClass(A, name, initialize, &_A_ClassInfo_, allocate$A);
	return class$;
}

$Class* A::class$ = nullptr;