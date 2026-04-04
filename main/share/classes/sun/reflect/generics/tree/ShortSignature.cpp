#include <sun/reflect/generics/tree/ShortSignature.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

ShortSignature* ShortSignature::singleton = nullptr;

void ShortSignature::init$() {
}

ShortSignature* ShortSignature::make() {
	$init(ShortSignature);
	return ShortSignature::singleton;
}

void ShortSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitShortSignature(this);
}

void ShortSignature::clinit$($Class* clazz) {
	$assignStatic(ShortSignature::singleton, $new(ShortSignature));
}

ShortSignature::ShortSignature() {
}

$Class* ShortSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/ShortSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ShortSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ShortSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(ShortSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/ShortSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(ShortSignature, make, ShortSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.ShortSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.BaseType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ShortSignature, name, initialize, &classInfo$$, ShortSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ShortSignature);
	});
	return class$;
}

$Class* ShortSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun