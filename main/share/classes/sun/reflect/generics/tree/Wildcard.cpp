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
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $TypeArgument = ::sun::reflect::generics::tree::TypeArgument;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _Wildcard_FieldInfo_[] = {
	{"upperBounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(Wildcard, upperBounds)},
	{"lowerBounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(Wildcard, lowerBounds)},
	{"emptyBounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Wildcard, emptyBounds)},
	{}
};

$MethodInfo _Wildcard_MethodInfo_[] = {
	{"<init>", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;)V", nullptr, $PRIVATE, $method(static_cast<void(Wildcard::*)($FieldTypeSignatureArray*,$FieldTypeSignatureArray*)>(&Wildcard::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"getLowerBounds", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC},
	{"getUpperBounds", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC},
	{"make", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;)Lsun/reflect/generics/tree/Wildcard;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Wildcard*(*)($FieldTypeSignatureArray*,$FieldTypeSignatureArray*)>(&Wildcard::make))},
	{}
};

$ClassInfo _Wildcard_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.Wildcard",
	"java.lang.Object",
	"sun.reflect.generics.tree.TypeArgument",
	_Wildcard_FieldInfo_,
	_Wildcard_MethodInfo_
};

$Object* allocate$Wildcard($Class* clazz) {
	return $of($alloc(Wildcard));
}

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
	if ($nc(this->lowerBounds)->length == 1 && $equals($nc(this->lowerBounds)->get(0), $BottomSignature::make())) {
		return Wildcard::emptyBounds;
	} else {
		return this->lowerBounds;
	}
}

void Wildcard::accept($TypeTreeVisitor* v) {
	$nc(v)->visitWildcard(this);
}

void clinit$Wildcard($Class* class$) {
	$assignStatic(Wildcard::emptyBounds, $new($FieldTypeSignatureArray, 0));
}

Wildcard::Wildcard() {
}

$Class* Wildcard::load$($String* name, bool initialize) {
	$loadClass(Wildcard, name, initialize, &_Wildcard_ClassInfo_, clinit$Wildcard, allocate$Wildcard);
	return class$;
}

$Class* Wildcard::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun