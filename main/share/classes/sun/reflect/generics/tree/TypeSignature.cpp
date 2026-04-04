#include <sun/reflect/generics/tree/TypeSignature.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$Class* TypeSignature::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.TypeSignature",
		nullptr,
		"sun.reflect.generics.tree.ReturnType"
	};
	$loadClass(TypeSignature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeSignature);
	});
	return class$;
}

$Class* TypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun