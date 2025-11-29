#include <sun/reflect/generics/tree/TypeArgument.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$ClassInfo _TypeArgument_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.TypeArgument",
	nullptr,
	"sun.reflect.generics.tree.TypeTree"
};

$Object* allocate$TypeArgument($Class* clazz) {
	return $of($alloc(TypeArgument));
}

$Class* TypeArgument::load$($String* name, bool initialize) {
	$loadClass(TypeArgument, name, initialize, &_TypeArgument_ClassInfo_, allocate$TypeArgument);
	return class$;
}

$Class* TypeArgument::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun