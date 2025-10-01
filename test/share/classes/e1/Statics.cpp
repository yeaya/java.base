#include <e1/Statics.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e1 {

$MethodInfo _Statics_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Statics::*)()>(&Statics::init$))},
	{"packageMethod", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Statics::packageMethod))},
	{"privateMethod", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Statics::privateMethod))},
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