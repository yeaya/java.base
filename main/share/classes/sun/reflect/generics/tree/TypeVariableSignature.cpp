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

$FieldInfo _TypeVariableSignature_FieldInfo_[] = {
	{"identifier", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TypeVariableSignature, identifier)},
	{}
};

$MethodInfo _TypeVariableSignature_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(TypeVariableSignature::*)($String*)>(&TypeVariableSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"getIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"make", "(Ljava/lang/String;)Lsun/reflect/generics/tree/TypeVariableSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeVariableSignature*(*)($String*)>(&TypeVariableSignature::make))},
	{}
};

$ClassInfo _TypeVariableSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.TypeVariableSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.FieldTypeSignature",
	_TypeVariableSignature_FieldInfo_,
	_TypeVariableSignature_MethodInfo_
};

$Object* allocate$TypeVariableSignature($Class* clazz) {
	return $of($alloc(TypeVariableSignature));
}

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
	$loadClass(TypeVariableSignature, name, initialize, &_TypeVariableSignature_ClassInfo_, allocate$TypeVariableSignature);
	return class$;
}

$Class* TypeVariableSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun