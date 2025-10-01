#include <sun/reflect/generics/tree/FieldTypeSignature.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/generics/tree/BaseType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaseType = ::sun::reflect::generics::tree::BaseType;
using $TypeArgument = ::sun::reflect::generics::tree::TypeArgument;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$MethodInfo _FieldTypeSignature_MethodInfo_[] = {
	{"*accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _FieldTypeSignature_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.tree.FieldTypeSignature",
	nullptr,
	"sun.reflect.generics.tree.BaseType,sun.reflect.generics.tree.TypeArgument",
	nullptr,
	_FieldTypeSignature_MethodInfo_
};

$Object* allocate$FieldTypeSignature($Class* clazz) {
	return $of($alloc(FieldTypeSignature));
}

int32_t FieldTypeSignature::hashCode() {
	 return this->$BaseType::hashCode();
}

bool FieldTypeSignature::equals(Object$* obj) {
	 return this->$BaseType::equals(obj);
}

$Object* FieldTypeSignature::clone() {
	 return this->$BaseType::clone();
}

$String* FieldTypeSignature::toString() {
	 return this->$BaseType::toString();
}

void FieldTypeSignature::finalize() {
	this->$BaseType::finalize();
}

$Class* FieldTypeSignature::load$($String* name, bool initialize) {
	$loadClass(FieldTypeSignature, name, initialize, &_FieldTypeSignature_ClassInfo_, allocate$FieldTypeSignature);
	return class$;
}

$Class* FieldTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun