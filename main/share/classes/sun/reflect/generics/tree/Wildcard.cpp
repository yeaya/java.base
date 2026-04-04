#include <sun/reflect/generics/tree/Wildcard.h>
#include <sun/reflect/generics/tree/BottomSignature.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BottomSignature = ::sun::reflect::generics::tree::BottomSignature;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldTypeSignatureArray* Wildcard::emptyBounds = nullptr;

void Wildcard::init$($FieldTypeSignatureArray* ubs, $FieldTypeSignatureArray* lbs) {
	$set(this, upperBounds, ubs);
	$set(this, lowerBounds, lbs);
}

Wildcard* Wildcard::make($FieldTypeSignatureArray* ubs, $FieldTypeSignatureArray* lbs) {
	$init(Wildcard);
	return $new(Wildcard, ubs, lbs);
}

$FieldTypeSignatureArray* Wildcard::getUpperBounds() {
	return this->upperBounds;
}

$FieldTypeSignatureArray* Wildcard::getLowerBounds() {
	if ($nc(this->lowerBounds)->length == 1 && $equals(this->lowerBounds->get(0), $BottomSignature::make())) {
		return Wildcard::emptyBounds;
	} else {
		return this->lowerBounds;
	}
}

void Wildcard::accept($TypeTreeVisitor* v) {
	$nc(v)->visitWildcard(this);
}

void Wildcard::clinit$($Class* clazz) {
	$assignStatic(Wildcard::emptyBounds, $new($FieldTypeSignatureArray, 0));
}

Wildcard::Wildcard() {
}

$Class* Wildcard::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"upperBounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(Wildcard, upperBounds)},
		{"lowerBounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(Wildcard, lowerBounds)},
		{"emptyBounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Wildcard, emptyBounds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;)V", nullptr, $PRIVATE, $method(Wildcard, init$, void, $FieldTypeSignatureArray*, $FieldTypeSignatureArray*)},
		{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC, $virtualMethod(Wildcard, accept, void, $TypeTreeVisitor*)},
		{"getLowerBounds", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC, $virtualMethod(Wildcard, getLowerBounds, $FieldTypeSignatureArray*)},
		{"getUpperBounds", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC, $virtualMethod(Wildcard, getUpperBounds, $FieldTypeSignatureArray*)},
		{"make", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;)Lsun/reflect/generics/tree/Wildcard;", nullptr, $PUBLIC | $STATIC, $staticMethod(Wildcard, make, Wildcard*, $FieldTypeSignatureArray*, $FieldTypeSignatureArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.tree.Wildcard",
		"java.lang.Object",
		"sun.reflect.generics.tree.TypeArgument",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Wildcard, name, initialize, &classInfo$$, Wildcard::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Wildcard);
	});
	return class$;
}

$Class* Wildcard::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun