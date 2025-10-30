#include <java/lang/invoke/LambdaProxyClassArchive.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $CDS = ::jdk::internal::misc::CDS;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _LambdaProxyClassArchive_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LambdaProxyClassArchive::*)()>(&LambdaProxyClassArchive::init$))},
	{"addToArchive", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MemberName;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MemberName;Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*,$String*,$MethodType*,$MethodType*,$MemberName*,$MethodType*,$Class*)>(&LambdaProxyClassArchive::addToArchive))},
	{"find", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Z[Ljava/lang/Class;[Ljava/lang/invoke/MethodType;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Z[Ljava/lang/Class<*>;[Ljava/lang/invoke/MethodType;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($Class*,$String*,$MethodType*,$MethodType*,$MethodHandle*,$MethodType*,bool,$ClassArray*,$MethodTypeArray*)>(&LambdaProxyClassArchive::find))},
	{"findFromArchive", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MemberName;Ljava/lang/invoke/MethodType;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MemberName;Ljava/lang/invoke/MethodType;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Class*(*)($Class*,$String*,$MethodType*,$MethodType*,$MemberName*,$MethodType*)>(&LambdaProxyClassArchive::findFromArchive))},
	{"loadedByBuiltinLoader", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*)>(&LambdaProxyClassArchive::loadedByBuiltinLoader))},
	{"register", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Z[Ljava/lang/Class;[Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;Z[Ljava/lang/Class<*>;[Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$String*,$MethodType*,$MethodType*,$MethodHandle*,$MethodType*,bool,$ClassArray*,$MethodTypeArray*,$Class*)>(&LambdaProxyClassArchive::register$))},
	{}
};

#define _METHOD_INDEX_addToArchive 1
#define _METHOD_INDEX_findFromArchive 3

$ClassInfo _LambdaProxyClassArchive_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.LambdaProxyClassArchive",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LambdaProxyClassArchive_MethodInfo_
};

$Object* allocate$LambdaProxyClassArchive($Class* clazz) {
	return $of($alloc(LambdaProxyClassArchive));
}

void LambdaProxyClassArchive::init$() {
}

bool LambdaProxyClassArchive::loadedByBuiltinLoader($Class* cls) {
	$load(LambdaProxyClassArchive);
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $nc(cls)->getClassLoader());
	return (cl == nullptr || ($instanceOf($BuiltinClassLoader, cl))) ? true : false;
}

void LambdaProxyClassArchive::addToArchive($Class* caller, $String* interfaceMethodName, $MethodType* factoryType, $MethodType* interfaceMethodType, $MemberName* implementationMember, $MethodType* dynamicMethodType, $Class* lambdaProxyClass) {
	$init(LambdaProxyClassArchive);
	$prepareNativeStatic(LambdaProxyClassArchive, addToArchive, void, $Class* caller, $String* interfaceMethodName, $MethodType* factoryType, $MethodType* interfaceMethodType, $MemberName* implementationMember, $MethodType* dynamicMethodType, $Class* lambdaProxyClass);
	$invokeNativeStatic(LambdaProxyClassArchive, addToArchive, caller, interfaceMethodName, factoryType, interfaceMethodType, implementationMember, dynamicMethodType, lambdaProxyClass);
	$finishNativeStatic();
}

$Class* LambdaProxyClassArchive::findFromArchive($Class* caller, $String* interfaceMethodName, $MethodType* factoryType, $MethodType* interfaceMethodType, $MemberName* implementationMember, $MethodType* dynamicMethodType) {
	$init(LambdaProxyClassArchive);
	$var($Class, $ret, nullptr);
	$prepareNativeStatic(LambdaProxyClassArchive, findFromArchive, $Class*, $Class* caller, $String* interfaceMethodName, $MethodType* factoryType, $MethodType* interfaceMethodType, $MemberName* implementationMember, $MethodType* dynamicMethodType);
	$assign($ret, $invokeNativeStatic(LambdaProxyClassArchive, findFromArchive, caller, interfaceMethodName, factoryType, interfaceMethodType, implementationMember, dynamicMethodType));
	$finishNativeStatic();
	return $ret;
}

bool LambdaProxyClassArchive::register$($Class* caller, $String* interfaceMethodName, $MethodType* factoryType, $MethodType* interfaceMethodType, $MethodHandle* implementation, $MethodType* dynamicMethodType, bool isSerializable, $ClassArray* altInterfaces, $MethodTypeArray* altMethods, $Class* lambdaProxyClass) {
	if (!$CDS::isDumpingArchive()) {
		$throwNew($IllegalStateException, "should only register lambda proxy class at dump time"_s);
	}
	if (loadedByBuiltinLoader(caller) && !isSerializable && $nc(altInterfaces)->length == 0 && $nc(altMethods)->length == 0) {
		addToArchive(caller, interfaceMethodName, factoryType, interfaceMethodType, $($nc(implementation)->internalMemberName()), dynamicMethodType, lambdaProxyClass);
		return true;
	}
	return false;
}

$Class* LambdaProxyClassArchive::find($Class* caller, $String* interfaceMethodName, $MethodType* factoryType, $MethodType* interfaceMethodType, $MethodHandle* implementation, $MethodType* dynamicMethodType, bool isSerializable, $ClassArray* altInterfaces, $MethodTypeArray* altMethods) {
	if ($CDS::isDumpingArchive()) {
		$throwNew($IllegalStateException, "cannot load class from CDS archive at dump time"_s);
	}
	bool var$0 = !loadedByBuiltinLoader(caller);
	if (var$0 || !$CDS::isSharingEnabled() || isSerializable || $nc(altInterfaces)->length > 0 || $nc(altMethods)->length > 0) {
		return nullptr;
	}
	return findFromArchive(caller, interfaceMethodName, factoryType, interfaceMethodType, $($nc(implementation)->internalMemberName()), dynamicMethodType);
}

LambdaProxyClassArchive::LambdaProxyClassArchive() {
}

$Class* LambdaProxyClassArchive::load$($String* name, bool initialize) {
	$loadClass(LambdaProxyClassArchive, name, initialize, &_LambdaProxyClassArchive_ClassInfo_, allocate$LambdaProxyClassArchive);
	return class$;
}

$Class* LambdaProxyClassArchive::class$ = nullptr;

		} // invoke
	} // lang
} // java