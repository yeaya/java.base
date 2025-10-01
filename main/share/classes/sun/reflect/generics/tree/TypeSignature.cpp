#include <sun/reflect/generics/tree/TypeSignature.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ReturnType = ::sun::reflect::generics::tree::ReturnType;

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