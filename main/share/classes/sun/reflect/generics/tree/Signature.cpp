#include <sun/reflect/generics/tree/Signature.h>

#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$MethodInfo _Signature_MethodInfo_[] = {
	{"getFormalTypeParameters", "()[Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Signature_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.Signature",
	nullptr,
	"sun.reflect.generics.tree.Tree",
	nullptr,
	_Signature_MethodInfo_
};

$Object* allocate$Signature($Class* clazz) {
	return $of($alloc(Signature));
}

$Class* Signature::load$($String* name, bool initialize) {
	$loadClass(Signature, name, initialize, &_Signature_ClassInfo_, allocate$Signature);
	return class$;
}

$Class* Signature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun