#include <sun/reflect/generics/tree/BaseType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$Class* BaseType::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.BaseType",
		nullptr,
		"sun.reflect.generics.tree.TypeSignature"
	};
	$loadClass(BaseType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaseType);
	});
	return class$;
}

$Class* BaseType::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun