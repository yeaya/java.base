#include <sun/reflect/generics/repository/FieldRepository.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/parser/SignatureParser.h>
#include <sun/reflect/generics/repository/AbstractRepository.h>
#include <sun/reflect/generics/tree/ReturnType.h>
#include <sun/reflect/generics/tree/Tree.h>
#include <sun/reflect/generics/tree/TypeSignature.h>
#include <sun/reflect/generics/tree/TypeTree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $SignatureParser = ::sun::reflect::generics::parser::SignatureParser;
using $AbstractRepository = ::sun::reflect::generics::repository::AbstractRepository;
using $ReturnType = ::sun::reflect::generics::tree::ReturnType;
using $Tree = ::sun::reflect::generics::tree::Tree;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;
using $TypeTree = ::sun::reflect::generics::tree::TypeTree;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

$FieldInfo _FieldRepository_FieldInfo_[] = {
	{"genericType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $VOLATILE, $field(FieldRepository, genericType)},
	{}
};

$MethodInfo _FieldRepository_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PROTECTED, $method(static_cast<void(FieldRepository::*)($String*,$GenericsFactory*)>(&FieldRepository::init$))},
	{"computeGenericType", "()Ljava/lang/reflect/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(FieldRepository::*)()>(&FieldRepository::computeGenericType))},
	{"getGenericType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"make", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/repository/FieldRepository;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FieldRepository*(*)($String*,$GenericsFactory*)>(&FieldRepository::make))},
	{"parse", "(Ljava/lang/String;)Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _FieldRepository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.repository.FieldRepository",
	"sun.reflect.generics.repository.AbstractRepository",
	nullptr,
	_FieldRepository_FieldInfo_,
	_FieldRepository_MethodInfo_,
	"Lsun/reflect/generics/repository/AbstractRepository<Lsun/reflect/generics/tree/TypeSignature;>;"
};

$Object* allocate$FieldRepository($Class* clazz) {
	return $of($alloc(FieldRepository));
}

void FieldRepository::init$($String* rawSig, $GenericsFactory* f) {
	$AbstractRepository::init$(rawSig, f);
}

$Tree* FieldRepository::parse($String* s) {
	return $nc($($SignatureParser::make()))->parseTypeSig(s);
}

FieldRepository* FieldRepository::make($String* rawSig, $GenericsFactory* f) {
	$init(FieldRepository);
	return $new(FieldRepository, rawSig, f);
}

$Type* FieldRepository::getGenericType() {
	$var($Type, value, this->genericType);
	if (value == nullptr) {
		$assign(value, computeGenericType());
		$set(this, genericType, value);
	}
	return value;
}

$Type* FieldRepository::computeGenericType() {
	$var($Reifier, r, getReifier());
	$nc(($cast($TypeSignature, $(getTree()))))->accept(r);
	return $cast($Type, $nc(r)->getResult());
}

FieldRepository::FieldRepository() {
}

$Class* FieldRepository::load$($String* name, bool initialize) {
	$loadClass(FieldRepository, name, initialize, &_FieldRepository_ClassInfo_, allocate$FieldRepository);
	return class$;
}

$Class* FieldRepository::class$ = nullptr;

			} // repository
		} // generics
	} // reflect
} // sun