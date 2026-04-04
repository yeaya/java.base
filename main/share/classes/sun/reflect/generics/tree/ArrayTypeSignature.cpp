#include <sun/reflect/generics/tree/ArrayTypeSignature.h>
#include <sun/reflect/generics/tree/TypeSignature.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

void ArrayTypeSignature::init$($TypeSignature* ct) {
	$set(this, componentType, ct);
}

ArrayTypeSignature* ArrayTypeSignature::make($TypeSignature* ct) {
	$init(ArrayTypeSignature);
	return $new(ArrayTypeSignature, ct);
}

$TypeSignature* ArrayTypeSignature::getComponentType() {
	return this->componentType;
}

void ArrayTypeSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitArrayTypeSignature(this);
}

ArrayTypeSignature::ArrayTypeSignature() {
}

$Class* ArrayTypeSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"componentType", "Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PRIVATE | $FINAL, $field(ArrayTypeSignature, componentType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/reflect/generics/tree/TypeSignature;)V", nullptr, $PRIVATE, $method(ArrayTypeSignature, init$, void, $TypeSignature*)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(ArrayTypeSignature, accept, void, $TypeTreeVisitor*)},
		{"getComponentType", "()Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PUBLIC, $virtualMethod(ArrayTypeSignature, getComponentType, $TypeSignature*)},
		{"make", "(Lsun/reflect/generics/tree/TypeSignature;)Lsun/reflect/generics/tree/ArrayTypeSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(ArrayTypeSignature, make, ArrayTypeSignature*, $TypeSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.ArrayTypeSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.FieldTypeSignature",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ArrayTypeSignature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ArrayTypeSignature));
	});
	return class$;
}

$Class* ArrayTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun