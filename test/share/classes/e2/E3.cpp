#include <e2/E3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e2 {

$MethodInfo _E3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(E3::*)()>(&E3::init$))},
	{}
};

$ClassInfo _E3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"e2.E3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_E3_MethodInfo_
};

$Object* allocate$E3($Class* clazz) {
	return $of($alloc(E3));
}

void E3::init$() {
}

E3::E3() {
}

$Class* E3::load$($String* name, bool initialize) {
	$loadClass(E3, name, initialize, &_E3_ClassInfo_, allocate$E3);
	return class$;
}

$Class* E3::class$ = nullptr;

} // e2