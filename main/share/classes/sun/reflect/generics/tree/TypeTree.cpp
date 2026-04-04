#include <sun/reflect/generics/tree/TypeTree.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$Class* TypeTree::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(TypeTree, accept, void, $TypeTreeVisitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.TypeTree",
		nullptr,
		"sun.reflect.generics.tree.Tree",
		nullptr,
		methodInfos$$
	};
	$loadClass(TypeTree, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeTree);
	});
	return class$;
}

$Class* TypeTree::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun