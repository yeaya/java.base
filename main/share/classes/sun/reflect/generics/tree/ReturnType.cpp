#include <sun/reflect/generics/tree/ReturnType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$Class* ReturnType::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.ReturnType",
		nullptr,
		"sun.reflect.generics.tree.TypeTree"
	};
	$loadClass(ReturnType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReturnType);
	});
	return class$;
}

$Class* ReturnType::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun