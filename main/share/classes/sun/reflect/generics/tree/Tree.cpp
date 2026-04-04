#include <sun/reflect/generics/tree/Tree.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$Class* Tree::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.Tree"
	};
	$loadClass(Tree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Tree);
	});
	return class$;
}

$Class* Tree::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun