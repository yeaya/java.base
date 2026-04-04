#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

void FormalTypeParameter::init$($String* n, $FieldTypeSignatureArray* bs) {
	$set(this, name, n);
	$set(this, bounds, bs);
}

FormalTypeParameter* FormalTypeParameter::make($String* n, $FieldTypeSignatureArray* bs) {
	$init(FormalTypeParameter);
	return $new(FormalTypeParameter, n, bs);
}

$FieldTypeSignatureArray* FormalTypeParameter::getBounds() {
	return this->bounds;
}

$String* FormalTypeParameter::getName() {
	return this->name;
}

void FormalTypeParameter::accept($TypeTreeVisitor* v) {
	$nc(v)->visitFormalTypeParameter(this);
}

FormalTypeParameter::FormalTypeParameter() {
}

$Class* FormalTypeParameter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FormalTypeParameter, name)},
		{"bounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(FormalTypeParameter, bounds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)V", nullptr, $PRIVATE, $method(FormalTypeParameter, init$, void, $String*, $FieldTypeSignatureArray*)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(FormalTypeParameter, accept, void, $TypeTreeVisitor*)},
		{"getBounds", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC, $virtualMethod(FormalTypeParameter, getBounds, $FieldTypeSignatureArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FormalTypeParameter, getName, $String*)},
		{"make", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PUBLIC | $STATIC, $staticMethod(FormalTypeParameter, make, FormalTypeParameter*, $String*, $FieldTypeSignatureArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.FormalTypeParameter",
		"java.lang.Object",
		"sun.reflect.generics.tree.TypeTree",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FormalTypeParameter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormalTypeParameter);
	});
	return class$;
}

$Class* FormalTypeParameter::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun