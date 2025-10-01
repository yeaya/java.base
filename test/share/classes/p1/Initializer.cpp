#include <p1/Initializer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

$FieldInfo _Initializer_FieldInfo_[] = {
	{"inited", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Initializer, inited)},
	{}
};

$MethodInfo _Initializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Initializer::*)()>(&Initializer::init$))},
	{"init", "()V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&Initializer::init))},
	{"isInited", "()Z", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&Initializer::isInited))},
	{}
};

$ClassInfo _Initializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p1.Initializer",
	"java.lang.Object",
	nullptr,
	_Initializer_FieldInfo_,
	_Initializer_MethodInfo_
};

$Object* allocate$Initializer($Class* clazz) {
	return $of($alloc(Initializer));
}

bool Initializer::inited = false;

void Initializer::init$() {
}

void Initializer::init() {
	$load(Initializer);
	$synchronized(class$) {
		$init(Initializer);
		Initializer::inited = true;
	}
}

bool Initializer::isInited() {
	$load(Initializer);
	$synchronized(class$) {
		$init(Initializer);
		return Initializer::inited;
	}
}

void clinit$Initializer($Class* class$) {
	Initializer::inited = false;
}

Initializer::Initializer() {
}

$Class* Initializer::load$($String* name, bool initialize) {
	$loadClass(Initializer, name, initialize, &_Initializer_ClassInfo_, clinit$Initializer, allocate$Initializer);
	return class$;
}

$Class* Initializer::class$ = nullptr;

} // p1