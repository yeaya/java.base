#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$String* Type::getTypeName() {
	return toString();
}

$Class* Type::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Type, getTypeName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.Type",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Type, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type);
	});
	return class$;
}

$Class* Type::class$ = nullptr;

		} // reflect
	} // lang
} // java