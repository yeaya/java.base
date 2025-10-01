#include <p2/T.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {

$MethodInfo _T_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(T::*)()>(&T::init$))},
	{}
};

$ClassInfo _T_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.T",
	"java.lang.Object",
	nullptr,
	nullptr,
	_T_MethodInfo_
};

$Object* allocate$T($Class* clazz) {
	return $of($alloc(T));
}

void T::init$() {
}

T::T() {
}

$Class* T::load$($String* name, bool initialize) {
	$loadClass(T, name, initialize, &_T_ClassInfo_, allocate$T);
	return class$;
}

$Class* T::class$ = nullptr;

} // p2