#include <sun/reflect/generics/tree/BaseType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$ClassInfo _BaseType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.BaseType",
	nullptr,
	"sun.reflect.generics.tree.TypeSignature"
};

$Object* allocate$BaseType($Class* clazz) {
	return $of($alloc(BaseType));
}

$Class* BaseType::load$($String* name, bool initialize) {
	$loadClass(BaseType, name, initialize, &_BaseType_ClassInfo_, allocate$BaseType);
	return class$;
}

$Class* BaseType::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun