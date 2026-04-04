#include <sun/reflect/generics/visitor/Visitor.h>
#include <sun/reflect/generics/tree/ClassSignature.h>
#include <sun/reflect/generics/tree/MethodTypeSignature.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassSignature = ::sun::reflect::generics::tree::ClassSignature;
using $MethodTypeSignature = ::sun::reflect::generics::tree::MethodTypeSignature;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {

$Class* Visitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"visitClassSignature", "(Lsun/reflect/generics/tree/ClassSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitClassSignature, void, $ClassSignature*)},
		{"visitMethodTypeSignature", "(Lsun/reflect/generics/tree/MethodTypeSignature;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Visitor, visitMethodTypeSignature, void, $MethodTypeSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.visitor.Visitor",
		nullptr,
		"sun.reflect.generics.visitor.TypeTreeVisitor",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Lsun/reflect/generics/visitor/TypeTreeVisitor<TT;>;"
	};
	$loadClass(Visitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Visitor);
	});
	return class$;
}

$Class* Visitor::class$ = nullptr;

			} // visitor
		} // generics
	} // reflect
} // sun