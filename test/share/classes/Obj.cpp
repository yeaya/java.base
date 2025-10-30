#include <Obj.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Obj_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Obj::*)()>(&Obj::init$))},
	{}
};

$ClassInfo _Obj_ClassInfo_ = {
	$ACC_SUPER,
	"Obj",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Obj_MethodInfo_
};

$Object* allocate$Obj($Class* clazz) {
	return $of($alloc(Obj));
}

void Obj::init$() {
}

Obj::Obj() {
}

$Class* Obj::load$($String* name, bool initialize) {
	$loadClass(Obj, name, initialize, &_Obj_ClassInfo_, allocate$Obj);
	return class$;
}

$Class* Obj::class$ = nullptr;