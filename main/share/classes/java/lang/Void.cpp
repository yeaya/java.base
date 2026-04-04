#include <java/lang/Void.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$Class* Void::TYPE = nullptr;

void Void::init$() {
}

void Void::clinit$($Class* clazz) {
	$assignStatic(Void::TYPE, $Class::getPrimitiveClass("void"_s));
}

Void::Void() {
}

$Class* Void::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Void, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Void, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.Void",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Void, name, initialize, &classInfo$$, Void::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Void);
	});
	return class$;
}

$Class* Void::class$ = nullptr;

Void* Void::VOID$ = nullptr;

	} // lang
} // java