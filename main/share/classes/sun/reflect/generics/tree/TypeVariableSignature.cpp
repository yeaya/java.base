#include <sun/reflect/generics/tree/TypeVariableSignature.h>
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

void TypeVariableSignature::init$($String* id) {
	$set(this, identifier, id);
}

TypeVariableSignature* TypeVariableSignature::make($String* id) {
	$init(TypeVariableSignature);
	return $new(TypeVariableSignature, id);
}

$String* TypeVariableSignature::getIdentifier() {
	return this->identifier;
}

void TypeVariableSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitTypeVariableSignature(this);
}

TypeVariableSignature::TypeVariableSignature() {
}

$Class* TypeVariableSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"identifier", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TypeVariableSignature, identifier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(TypeVariableSignature, init$, void, $String*)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(TypeVariableSignature, accept, void, $TypeTreeVisitor*)},
		{"getIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeVariableSignature, getIdentifier, $String*)},
		{"make", "(Ljava/lang/String;)Lsun/reflect/generics/tree/TypeVariableSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeVariableSignature, make, TypeVariableSignature*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.TypeVariableSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.FieldTypeSignature",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TypeVariableSignature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TypeVariableSignature));
	});
	return class$;
}

$Class* TypeVariableSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun