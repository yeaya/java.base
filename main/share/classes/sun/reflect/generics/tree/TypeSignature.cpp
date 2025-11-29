#include <sun/reflect/generics/tree/TypeSignature.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$ClassInfo _TypeSignature_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.TypeSignature",
	nullptr,
	"sun.reflect.generics.tree.ReturnType"
};

$Object* allocate$TypeSignature($Class* clazz) {
	return $of($alloc(TypeSignature));
}

$Class* TypeSignature::load$($String* name, bool initialize) {
	$loadClass(TypeSignature, name, initialize, &_TypeSignature_ClassInfo_, allocate$TypeSignature);
	return class$;
}

$Class* TypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun