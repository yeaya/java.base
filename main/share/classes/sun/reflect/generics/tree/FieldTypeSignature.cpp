#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/tree/BaseType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaseType = ::sun::reflect::generics::tree::BaseType;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

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
	$MethodInfo methodInfos$$[] = {
		{"*accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", nullptr, $PUBLIC | $ABSTRACT},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.tree.FieldTypeSignature",
		nullptr,
		"sun.reflect.generics.tree.BaseType,sun.reflect.generics.tree.TypeArgument",
		nullptr,
		methodInfos$$
	};
	$loadClass(FieldTypeSignature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FieldTypeSignature));
	});
	return class$;
}

$Class* FieldTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun