#include <sun/reflect/generics/tree/SimpleClassTypeSignature.h>
#include <sun/reflect/generics/tree/TypeArgument.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $TypeArgumentArray = $Array<::sun::reflect::generics::tree::TypeArgument>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

void SimpleClassTypeSignature::init$($String* n, bool dollar, $TypeArgumentArray* tas) {
	$set(this, name, n);
	this->dollar = dollar;
	$set(this, typeArgs, tas);
}

SimpleClassTypeSignature* SimpleClassTypeSignature::make($String* n, bool dollar, $TypeArgumentArray* tas) {
	$init(SimpleClassTypeSignature);
	return $new(SimpleClassTypeSignature, n, dollar, tas);
}

bool SimpleClassTypeSignature::getDollar() {
	return this->dollar;
}

$String* SimpleClassTypeSignature::getName() {
	return this->name;
}

$TypeArgumentArray* SimpleClassTypeSignature::getTypeArguments() {
	return this->typeArgs;
}

void SimpleClassTypeSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitSimpleClassTypeSignature(this);
}

SimpleClassTypeSignature::SimpleClassTypeSignature() {
}

$Class* SimpleClassTypeSignature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dollar", "Z", nullptr, $PRIVATE | $FINAL, $field(SimpleClassTypeSignature, dollar)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SimpleClassTypeSignature, name)},
		{"typeArgs", "[Lsun/reflect/generics/tree/TypeArgument;", nullptr, $PRIVATE | $FINAL, $field(SimpleClassTypeSignature, typeArgs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z[Lsun/reflect/generics/tree/TypeArgument;)V", nullptr, $PRIVATE, $method(SimpleClassTypeSignature, init$, void, $String*, bool, $TypeArgumentArray*)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(SimpleClassTypeSignature, accept, void, $TypeTreeVisitor*)},
		{"getDollar", "()Z", nullptr, $PUBLIC, $virtualMethod(SimpleClassTypeSignature, getDollar, bool)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleClassTypeSignature, getName, $String*)},
		{"getTypeArguments", "()[Lsun/reflect/generics/tree/TypeArgument;", nullptr, $PUBLIC, $virtualMethod(SimpleClassTypeSignature, getTypeArguments, $TypeArgumentArray*)},
		{"make", "(Ljava/lang/String;Z[Lsun/reflect/generics/tree/TypeArgument;)Lsun/reflect/generics/tree/SimpleClassTypeSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleClassTypeSignature, make, SimpleClassTypeSignature*, $String*, bool, $TypeArgumentArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.SimpleClassTypeSignature",
		"java.lang.Object",
		"sun.reflect.generics.tree.FieldTypeSignature",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleClassTypeSignature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SimpleClassTypeSignature));
	});
	return class$;
}

$Class* SimpleClassTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun