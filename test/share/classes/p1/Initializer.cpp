#include <p1/Initializer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

bool Initializer::inited = false;

void Initializer::init$() {
}

void Initializer::init() {
	$init(Initializer);
	$synchronized(class$) {
		Initializer::inited = true;
	}
}

bool Initializer::isInited() {
	$init(Initializer);
	$synchronized(class$) {
		return Initializer::inited;
	}
}

void Initializer::clinit$($Class* clazz) {
	Initializer::inited = false;
}

Initializer::Initializer() {
}

$Class* Initializer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inited", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Initializer, inited)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Initializer, init$, void)},
		{"init", "()V", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(Initializer, init, void)},
		{"isInited", "()Z", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(Initializer, isInited, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p1.Initializer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Initializer, name, initialize, &classInfo$$, Initializer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Initializer);
	});
	return class$;
}

$Class* Initializer::class$ = nullptr;

} // p1