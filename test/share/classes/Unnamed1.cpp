#include <Unnamed1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Unnamed1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Unnamed1::*)()>(&Unnamed1::init$))},
	{}
};

$ClassInfo _Unnamed1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Unnamed1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Unnamed1_MethodInfo_
};

$Object* allocate$Unnamed1($Class* clazz) {
	return $of($alloc(Unnamed1));
}

void Unnamed1::init$() {
}

Unnamed1::Unnamed1() {
}

$Class* Unnamed1::load$($String* name, bool initialize) {
	$loadClass(Unnamed1, name, initialize, &_Unnamed1_ClassInfo_, allocate$Unnamed1);
	return class$;
}

$Class* Unnamed1::class$ = nullptr;