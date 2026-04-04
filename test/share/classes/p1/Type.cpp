#include <p1/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

$Object* Type::obj = nullptr;

void Type::init$() {
}

void Type::clinit$($Class* clazz) {
	$assignStatic(Type::obj, $new($Object));
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Type, obj)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Type, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"p1.Type",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Type, name, initialize, &classInfo$$, Type::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Type);
	});
	return class$;
}

$Class* Type::class$ = nullptr;

} // p1