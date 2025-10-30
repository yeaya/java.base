#include <sun/reflect/generics/tree/SimpleClassTypeSignature.h>

#include <sun/reflect/generics/tree/TypeArgument.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $TypeArgumentArray = $Array<::sun::reflect::generics::tree::TypeArgument>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $TypeArgument = ::sun::reflect::generics::tree::TypeArgument;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _SimpleClassTypeSignature_FieldInfo_[] = {
	{"dollar", "Z", nullptr, $PRIVATE | $FINAL, $field(SimpleClassTypeSignature, dollar)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SimpleClassTypeSignature, name)},
	{"typeArgs", "[Lsun/reflect/generics/tree/TypeArgument;", nullptr, $PRIVATE | $FINAL, $field(SimpleClassTypeSignature, typeArgs)},
	{}
};

$MethodInfo _SimpleClassTypeSignature_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z[Lsun/reflect/generics/tree/TypeArgument;)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleClassTypeSignature::*)($String*,bool,$TypeArgumentArray*)>(&SimpleClassTypeSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"getDollar", "()Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTypeArguments", "()[Lsun/reflect/generics/tree/TypeArgument;", nullptr, $PUBLIC},
	{"make", "(Ljava/lang/String;Z[Lsun/reflect/generics/tree/TypeArgument;)Lsun/reflect/generics/tree/SimpleClassTypeSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SimpleClassTypeSignature*(*)($String*,bool,$TypeArgumentArray*)>(&SimpleClassTypeSignature::make))},
	{}
};

$ClassInfo _SimpleClassTypeSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.SimpleClassTypeSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.FieldTypeSignature",
	_SimpleClassTypeSignature_FieldInfo_,
	_SimpleClassTypeSignature_MethodInfo_
};

$Object* allocate$SimpleClassTypeSignature($Class* clazz) {
	return $of($alloc(SimpleClassTypeSignature));
}

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
	$loadClass(SimpleClassTypeSignature, name, initialize, &_SimpleClassTypeSignature_ClassInfo_, allocate$SimpleClassTypeSignature);
	return class$;
}

$Class* SimpleClassTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun