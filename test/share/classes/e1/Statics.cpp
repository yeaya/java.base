#include <e1/Statics.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e1 {

$MethodInfo _Statics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Statics, init$, void)},
	{"packageMethod", "()V", nullptr, $STATIC, $staticMethod(Statics, packageMethod, void)},
	{"privateMethod", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Statics, privateMethod, void)},
	{}
};

$ClassInfo _Statics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"e1.Statics",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Statics_MethodInfo_
};

$Object* allocate$Statics($Class* clazz) {
	return $of($alloc(Statics));
}

void Statics::init$() {
}

void Statics::privateMethod() {
}

void Statics::packageMethod() {
}

Statics::Statics() {
}

$Class* Statics::load$($String* name, bool initialize) {
	$loadClass(Statics, name, initialize, &_Statics_ClassInfo_, allocate$Statics);
	return class$;
}

$Class* Statics::class$ = nullptr;

} // e1