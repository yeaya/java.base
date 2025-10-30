#include <Outer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Outer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Outer::*)()>(&Outer::init$))},
	{}
};

$InnerClassInfo _Outer_InnerClassesInfo_[] = {
	{"Outer$Inner", "Outer", "Inner", 0},
	{}
};

$ClassInfo _Outer_ClassInfo_ = {
	$ACC_SUPER,
	"Outer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Outer_MethodInfo_,
	nullptr,
	nullptr,
	_Outer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Outer$Inner"
};

$Object* allocate$Outer($Class* clazz) {
	return $of($alloc(Outer));
}

void Outer::init$() {
}

Outer::Outer() {
}

$Class* Outer::load$($String* name, bool initialize) {
	$loadClass(Outer, name, initialize, &_Outer_ClassInfo_, allocate$Outer);
	return class$;
}

$Class* Outer::class$ = nullptr;