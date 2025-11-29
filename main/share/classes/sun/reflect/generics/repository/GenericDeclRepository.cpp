#include <sun/reflect/generics/repository/GenericDeclRepository.h>

#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/repository/AbstractRepository.h>
#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <sun/reflect/generics/tree/Signature.h>
#include <sun/reflect/generics/tree/Tree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
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
using $FormalTypeParameter = ::sun::reflect::generics::tree::FormalTypeParameter;
using $Signature = ::sun::reflect::generics::tree::Signature;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

$FieldInfo _GenericDeclRepository_FieldInfo_[] = {
	{"typeParameters", "[Ljava/lang/reflect/TypeVariable;", "[Ljava/lang/reflect/TypeVariable<*>;", $PRIVATE | $VOLATILE, $field(GenericDeclRepository, typeParameters)},
	{}
};

$MethodInfo _GenericDeclRepository_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PROTECTED, $method(static_cast<void(GenericDeclRepository::*)($String*,$GenericsFactory*)>(&GenericDeclRepository::init$))},
	{"computeTypeParameters", "()[Ljava/lang/reflect/TypeVariable;", "()[Ljava/lang/reflect/TypeVariable<*>;", $PRIVATE, $method(static_cast<$TypeVariableArray*(GenericDeclRepository::*)()>(&GenericDeclRepository::computeTypeParameters))},
	{"getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;", "()[Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC},
	{}
};

$ClassInfo _GenericDeclRepository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.reflect.generics.repository.GenericDeclRepository",
	"sun.reflect.generics.repository.AbstractRepository",
	nullptr,
	_GenericDeclRepository_FieldInfo_,
	_GenericDeclRepository_MethodInfo_,
	"<S::Lsun/reflect/generics/tree/Signature;>Lsun/reflect/generics/repository/AbstractRepository<TS;>;"
};

$Object* allocate$GenericDeclRepository($Class* clazz) {
	return $of($alloc(GenericDeclRepository));
}

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
	$useLocalCurrentObjectStackCache();
	$var($FormalTypeParameterArray, ftps, $nc(($cast($Signature, $(getTree()))))->getFormalTypeParameters());
	int32_t length = $nc(ftps)->length;
	$var($TypeVariableArray, typeParameters, $new($TypeVariableArray, length));
	for (int32_t i = 0; i < length; ++i) {
		$var($Reifier, r, getReifier());
		$nc(ftps->get(i))->accept(r);
		typeParameters->set(i, $cast($TypeVariable, $($cast($Type, $nc(r)->getResult()))));
	}
	return typeParameters;
}

GenericDeclRepository::GenericDeclRepository() {
}

$Class* GenericDeclRepository::load$($String* name, bool initialize) {
	$loadClass(GenericDeclRepository, name, initialize, &_GenericDeclRepository_ClassInfo_, allocate$GenericDeclRepository);
	return class$;
}

$Class* GenericDeclRepository::class$ = nullptr;

			} // repository
		} // generics
	} // reflect
} // sun