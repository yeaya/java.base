#include <sun/reflect/generics/tree/Signature.h>
#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <jcpp.h>

using $FormalTypeParameterArray = $Array<::sun::reflect::generics::tree::FormalTypeParameter>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$Class* Signature::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFormalTypeParameters", "()[Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Signature, getFormalTypeParameters, $FormalTypeParameterArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.Signature",
		nullptr,
		"sun.reflect.generics.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(Signature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Signature);
	});
	return class$;
}

$Class* Signature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun