#include <sun/reflect/generics/tree/CharSignature.h>
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

CharSignature* CharSignature::singleton = nullptr;

void CharSignature::init$() {
}

CharSignature* CharSignature::make() {
	$init(CharSignature);
	return CharSignature::singleton;
}

void CharSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitCharSignature(this);
}

void CharSignature::clinit$($Class* clazz) {
	$assignStatic(CharSignature::singleton, $new(CharSignature));
}

CharSignature::CharSignature() {
}

$Class* CharSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lsun/reflect/generics/tree/CharSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CharSignature, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CharSignature, init$, void)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(CharSignature, accept, void, $TypeTreeVisitor*)},
		{"make", "()Lsun/reflect/generics/tree/CharSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(CharSignature, make, CharSignature*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.CharSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.BaseType",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharSignature, name, initialize, &classInfo$$, CharSignature::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CharSignature);
	});
	return class$;
}

$Class* CharSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun