#include <sun/reflect/generics/tree/Tree.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$ClassInfo _Tree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.Tree"
};

$Object* allocate$Tree($Class* clazz) {
	return $of($alloc(Tree));
}

$Class* Tree::load$($String* name, bool initialize) {
	$loadClass(Tree, name, initialize, &_Tree_ClassInfo_, allocate$Tree);
	return class$;
}

$Class* Tree::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun