#include <sun/reflect/generics/factory/CoreReflectionFactory.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/TypeNotPresentException.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/lang/reflect/WildcardType.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/reflectiveObjects/GenericArrayTypeImpl.h>
#include <sun/reflect/generics/reflectiveObjects/ParameterizedTypeImpl.h>
#include <sun/reflect/generics/reflectiveObjects/TypeVariableImpl.h>
#include <sun/reflect/generics/reflectiveObjects/WildcardTypeImpl.h>
#include <sun/reflect/generics/scope/Scope.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <jcpp.h>

#undef TYPE

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Short = ::java::lang::Short;
using $TypeNotPresentException = ::java::lang::TypeNotPresentException;
using $Void = ::java::lang::Void;
using $1Array = ::java::lang::reflect::Array;
using $Constructor = ::java::lang::reflect::Constructor;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $Method = ::java::lang::reflect::Method;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $WildcardType = ::java::lang::reflect::WildcardType;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $GenericArrayTypeImpl = ::sun::reflect::generics::reflectiveObjects::GenericArrayTypeImpl;
using $ParameterizedTypeImpl = ::sun::reflect::generics::reflectiveObjects::ParameterizedTypeImpl;
using $TypeVariableImpl = ::sun::reflect::generics::reflectiveObjects::TypeVariableImpl;
using $WildcardTypeImpl = ::sun::reflect::generics::reflectiveObjects::WildcardTypeImpl;
using $Scope = ::sun::reflect::generics::scope::Scope;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace factory {

$FieldInfo _CoreReflectionFactory_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CoreReflectionFactory, $assertionsDisabled)},
	{"decl", "Ljava/lang/reflect/GenericDeclaration;", nullptr, $PRIVATE | $FINAL, $field(CoreReflectionFactory, decl)},
	{"scope", "Lsun/reflect/generics/scope/Scope;", nullptr, $PRIVATE | $FINAL, $field(CoreReflectionFactory, scope)},
	{}
};

$MethodInfo _CoreReflectionFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/GenericDeclaration;Lsun/reflect/generics/scope/Scope;)V", nullptr, $PRIVATE, $method(static_cast<void(CoreReflectionFactory::*)($GenericDeclaration*,$Scope*)>(&CoreReflectionFactory::init$))},
	{"findTypeVariable", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC},
	{"getDecl", "()Ljava/lang/reflect/GenericDeclaration;", nullptr, $PRIVATE, $method(static_cast<$GenericDeclaration*(CoreReflectionFactory::*)()>(&CoreReflectionFactory::getDecl))},
	{"getDeclsLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $method(static_cast<$ClassLoader*(CoreReflectionFactory::*)()>(&CoreReflectionFactory::getDeclsLoader))},
	{"getScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PRIVATE, $method(static_cast<$Scope*(CoreReflectionFactory::*)()>(&CoreReflectionFactory::getScope))},
	{"make", "(Ljava/lang/reflect/GenericDeclaration;Lsun/reflect/generics/scope/Scope;)Lsun/reflect/generics/factory/CoreReflectionFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CoreReflectionFactory*(*)($GenericDeclaration*,$Scope*)>(&CoreReflectionFactory::make))},
	{"makeArrayType", "(Ljava/lang/reflect/Type;)Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeBool", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeByte", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeChar", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeDouble", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeFloat", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeInt", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeLong", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeNamedType", "(Ljava/lang/String;)Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeParameterizedType", "(Ljava/lang/reflect/Type;[Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)Ljava/lang/reflect/ParameterizedType;", nullptr, $PUBLIC},
	{"makeShort", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeTypeVariable", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC},
	{"makeVoid", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC},
	{"makeWildcard", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/WildcardType;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CoreReflectionFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.factory.CoreReflectionFactory",
	"java.lang.Object",
	"sun.reflect.generics.factory.GenericsFactory",
	_CoreReflectionFactory_FieldInfo_,
	_CoreReflectionFactory_MethodInfo_
};

$Object* allocate$CoreReflectionFactory($Class* clazz) {
	return $of($alloc(CoreReflectionFactory));
}

bool CoreReflectionFactory::$assertionsDisabled = false;

void CoreReflectionFactory::init$($GenericDeclaration* d, $Scope* s) {
	$set(this, decl, d);
	$set(this, scope, s);
}

$GenericDeclaration* CoreReflectionFactory::getDecl() {
	return this->decl;
}

$Scope* CoreReflectionFactory::getScope() {
	return this->scope;
}

$ClassLoader* CoreReflectionFactory::getDeclsLoader() {
	$beforeCallerSensitive();
	if ($instanceOf($Class, this->decl)) {
		return $nc(($cast($Class, this->decl)))->getClassLoader();
	}
	if ($instanceOf($Method, this->decl)) {
		return $nc($nc(($cast($Method, this->decl)))->getDeclaringClass())->getClassLoader();
	}
	if (!CoreReflectionFactory::$assertionsDisabled && !$instanceOf($Constructor, this->decl)) {
		$throwNew($AssertionError, $of("Constructor expected"_s));
	}
	return $nc($nc(($cast($Constructor, this->decl)))->getDeclaringClass())->getClassLoader();
}

CoreReflectionFactory* CoreReflectionFactory::make($GenericDeclaration* d, $Scope* s) {
	$init(CoreReflectionFactory);
	return $new(CoreReflectionFactory, d, s);
}

$TypeVariable* CoreReflectionFactory::makeTypeVariable($String* name, $FieldTypeSignatureArray* bounds) {
	return $TypeVariableImpl::make($(getDecl()), name, bounds, this);
}

$WildcardType* CoreReflectionFactory::makeWildcard($FieldTypeSignatureArray* ubs, $FieldTypeSignatureArray* lbs) {
	return $WildcardTypeImpl::make(ubs, lbs, this);
}

$ParameterizedType* CoreReflectionFactory::makeParameterizedType($Type* declaration, $TypeArray* typeArgs, $Type* owner) {
	return $ParameterizedTypeImpl::make($cast($Class, declaration), typeArgs, owner);
}

$TypeVariable* CoreReflectionFactory::findTypeVariable($String* name) {
	return $nc($(getScope()))->lookup(name);
}

$Type* CoreReflectionFactory::makeNamedType($String* name) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $Class::forName(name, false, $(getDeclsLoader()));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, c, $catch());
		$throwNew($TypeNotPresentException, name, c);
	}
	$shouldNotReachHere();
}

$Type* CoreReflectionFactory::makeArrayType($Type* componentType) {
	if ($instanceOf($Class, componentType)) {
		return $of($($1Array::newInstance($cast($Class, componentType), 0)))->getClass();
	} else {
		return $GenericArrayTypeImpl::make(componentType);
	}
}

$Type* CoreReflectionFactory::makeByte() {
	$init($Byte);
	return $Byte::TYPE;
}

$Type* CoreReflectionFactory::makeBool() {
	$init($Boolean);
	return $Boolean::TYPE;
}

$Type* CoreReflectionFactory::makeShort() {
	$init($Short);
	return $Short::TYPE;
}

$Type* CoreReflectionFactory::makeChar() {
	$init($Character);
	return $Character::TYPE;
}

$Type* CoreReflectionFactory::makeInt() {
	$init($Integer);
	return $Integer::TYPE;
}

$Type* CoreReflectionFactory::makeLong() {
	$init($Long);
	return $Long::TYPE;
}

$Type* CoreReflectionFactory::makeFloat() {
	$init($Float);
	return $Float::TYPE;
}

$Type* CoreReflectionFactory::makeDouble() {
	$init($Double);
	return $Double::TYPE;
}

$Type* CoreReflectionFactory::makeVoid() {
	$init($Void);
	return $Void::TYPE;
}

void clinit$CoreReflectionFactory($Class* class$) {
	CoreReflectionFactory::$assertionsDisabled = !CoreReflectionFactory::class$->desiredAssertionStatus();
}

CoreReflectionFactory::CoreReflectionFactory() {
}

$Class* CoreReflectionFactory::load$($String* name, bool initialize) {
	$loadClass(CoreReflectionFactory, name, initialize, &_CoreReflectionFactory_ClassInfo_, clinit$CoreReflectionFactory, allocate$CoreReflectionFactory);
	return class$;
}

$Class* CoreReflectionFactory::class$ = nullptr;

			} // factory
		} // generics
	} // reflect
} // sun