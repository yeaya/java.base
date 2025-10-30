#include <sun/reflect/generics/factory/GenericsFactory.h>

#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/lang/reflect/WildcardType.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $WildcardType = ::java::lang::reflect::WildcardType;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace factory {

$MethodInfo _GenericsFactory_MethodInfo_[] = {
	{"findTypeVariable", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC | $ABSTRACT},
	{"makeArrayType", "(Ljava/lang/reflect/Type;)Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeBool", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeByte", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeChar", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeDouble", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeFloat", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeInt", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeLong", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeNamedType", "(Ljava/lang/String;)Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeParameterizedType", "(Ljava/lang/reflect/Type;[Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)Ljava/lang/reflect/ParameterizedType;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeShort", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeTypeVariable", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC | $ABSTRACT},
	{"makeVoid", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeWildcard", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/WildcardType;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GenericsFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.factory.GenericsFactory",
	nullptr,
	nullptr,
	nullptr,
	_GenericsFactory_MethodInfo_
};

$Object* allocate$GenericsFactory($Class* clazz) {
	return $of($alloc(GenericsFactory));
}

$Class* GenericsFactory::load$($String* name, bool initialize) {
	$loadClass(GenericsFactory, name, initialize, &_GenericsFactory_ClassInfo_, allocate$GenericsFactory);
	return class$;
}

$Class* GenericsFactory::class$ = nullptr;

			} // factory
		} // generics
	} // reflect
} // sun