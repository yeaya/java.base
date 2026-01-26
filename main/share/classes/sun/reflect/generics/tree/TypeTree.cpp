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

$MethodInfo _TypeTree_MethodInfo_[] = {
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(TypeTree, accept, void, $TypeTreeVisitor*)},
	{}
};

$ClassInfo _TypeTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.TypeTree",
	nullptr,
	"sun.reflect.generics.tree.Tree",
	nullptr,
	_TypeTree_MethodInfo_
};

$Object* allocate$TypeTree($Class* clazz) {
	return $of($alloc(TypeTree));
}

$Class* TypeTree::load$($String* name, bool initialize) {
	$loadClass(TypeTree, name, initialize, &_TypeTree_ClassInfo_, allocate$TypeTree);
	return class$;
}

$Class* TypeTree::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun