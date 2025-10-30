#include <Equals2A.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Equals2A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Equals2A::*)()>(&Equals2A::init$))},
	{"m", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Equals2A_ClassInfo_ = {
	$ACC_SUPER,
	"Equals2A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Equals2A_MethodInfo_
};

$Object* allocate$Equals2A($Class* clazz) {
	return $of($alloc(Equals2A));
}

void Equals2A::init$() {
}

$Object* Equals2A::m() {
	return $of(this);
}

Equals2A::Equals2A() {
}

$Class* Equals2A::load$($String* name, bool initialize) {
	$loadClass(Equals2A, name, initialize, &_Equals2A_ClassInfo_, allocate$Equals2A);
	return class$;
}

$Class* Equals2A::class$ = nullptr;