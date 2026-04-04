#include <sun/reflect/generics/repository/GenericDeclRepository.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/repository/AbstractRepository.h>
#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <sun/reflect/generics/tree/Signature.h>
#include <sun/reflect/generics/tree/Tree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <jcpp.h>

using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $FormalTypeParameterArray = $Array<::sun::reflect::generics::tree::FormalTypeParameter>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $AbstractRepository = ::sun::reflect::generics::repository::AbstractRepository;
using $Signature = ::sun::reflect::generics::tree::Signature;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

void GenericDeclRepository::init$($String* rawSig, $GenericsFactory* f) {
	$AbstractRepository::init$(rawSig, f);
}

$TypeVariableArray* GenericDeclRepository::getTypeParameters() {
	$var($TypeVariableArray, value, this->typeParameters);
	if (value == nullptr) {
		$assign(value, computeTypeParameters());
		$set(this, typeParameters, value);
	}
	return $cast($TypeVariableArray, $nc(value)->clone());
}

$TypeVariableArray* GenericDeclRepository::computeTypeParameters() {
	$useLocalObjectStack();
	$var($FormalTypeParameterArray, ftps, $$sure($Signature, getTree())->getFormalTypeParameters());
	int32_t length = $nc(ftps)->length;
	$var($TypeVariableArray, typeParameters, $new($TypeVariableArray, length));
	for (int32_t i = 0; i < length; ++i) {
		$var($Reifier, r, getReifier());
		$nc(ftps->get(i))->accept(r);
		typeParameters->set(i, $$cast($TypeVariable, $cast($Type, $nc(r)->getResult())));
	}
	return typeParameters;
}

GenericDeclRepository::GenericDeclRepository() {
}

$Class* GenericDeclRepository::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"typeParameters", "[Ljava/lang/reflect/TypeVariable;", "[Ljava/lang/reflect/TypeVariable<*>;", $PRIVATE | $VOLATILE, $field(GenericDeclRepository, typeParameters)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PROTECTED, $method(GenericDeclRepository, init$, void, $String*, $GenericsFactory*)},
		{"computeTypeParameters", "()[Ljava/lang/reflect/TypeVariable;", "()[Ljava/lang/reflect/TypeVariable<*>;", $PRIVATE, $method(GenericDeclRepository, computeTypeParameters, $TypeVariableArray*)},
		{"getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;", "()[Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC, $virtualMethod(GenericDeclRepository, getTypeParameters, $TypeVariableArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.reflect.generics.repository.GenericDeclRepository",
		"sun.reflect.generics.repository.AbstractRepository",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<S::Lsun/reflect/generics/tree/Signature;>Lsun/reflect/generics/repository/AbstractRepository<TS;>;"
	};
	$loadClass(GenericDeclRepository, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GenericDeclRepository);
	});
	return class$;
}

$Class* GenericDeclRepository::class$ = nullptr;

			} // repository
		} // generics
	} // reflect
} // sun