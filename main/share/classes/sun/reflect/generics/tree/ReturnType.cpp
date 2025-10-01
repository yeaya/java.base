#include <sun/reflect/generics/tree/ReturnType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $TypeTree = ::sun::reflect::generics::tree::TypeTree;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$ClassInfo _ReturnType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.ReturnType",
	nullptr,
	"sun.reflect.generics.tree.TypeTree"
};

$Object* allocate$ReturnType($Class* clazz) {
	return $of($alloc(ReturnType));
}

$Class* ReturnType::load$($String* name, bool initialize) {
	$loadClass(ReturnType, name, initialize, &_ReturnType_ClassInfo_, allocate$ReturnType);
	return class$;
}

$Class* ReturnType::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun