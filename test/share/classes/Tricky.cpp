#include <Tricky.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Tricky_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Tricky, init$, void)},
	{}
};

$InnerClassInfo _Tricky_InnerClassesInfo_[] = {
	{"Tricky$Nested", "Tricky", "Nested", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Tricky_ClassInfo_ = {
	$ACC_SUPER,
	"Tricky",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Tricky_MethodInfo_,
	nullptr,
	nullptr,
	_Tricky_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Tricky$Nested"
};

$Object* allocate$Tricky($Class* clazz) {
	return $of($alloc(Tricky));
}

void Tricky::init$() {
}

Tricky::Tricky() {
}

$Class* Tricky::load$($String* name, bool initialize) {
	$loadClass(Tricky, name, initialize, &_Tricky_ClassInfo_, allocate$Tricky);
	return class$;
}

$Class* Tricky::class$ = nullptr;