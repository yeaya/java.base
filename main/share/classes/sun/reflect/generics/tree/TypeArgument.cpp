#include <sun/reflect/generics/tree/TypeArgument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$Class* TypeArgument::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.TypeArgument",
		nullptr,
		"sun.reflect.generics.tree.TypeTree"
	};
	$loadClass(TypeArgument, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeArgument);
	});
	return class$;
}

$Class* TypeArgument::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun