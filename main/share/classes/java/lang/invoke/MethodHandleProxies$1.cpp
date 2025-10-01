#include <java/lang/invoke/MethodHandleProxies$1.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleProxies.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/invoke/WrapperInstance.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleProxies = ::java::lang::invoke::MethodHandleProxies;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $WrapperInstance = ::sun::invoke::WrapperInstance;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleProxies$1_FieldInfo_[] = {
	{"val$defaultMethodMap", "Ljava/util/concurrent/ConcurrentHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$1, val$defaultMethodMap)},
	{"val$vaTargets", "[Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$1, val$vaTargets)},
	{"val$methods", "[Ljava/lang/reflect/Method;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$1, val$methods)},
	{"val$intfc", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$1, val$intfc)},
	{"val$target", "Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL | $SYNTHETIC, $field(MethodHandleProxies$1, val$target)},
	{}
};

$MethodInfo _MethodHandleProxies$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;[Ljava/lang/reflect/Method;[Ljava/lang/invoke/MethodHandle;Ljava/util/concurrent/ConcurrentHashMap;)V", "()V", 0, $method(static_cast<void(MethodHandleProxies$1::*)($MethodHandle*,$Class*,$MethodArray*,$MethodHandleArray*,$ConcurrentHashMap*)>(&MethodHandleProxies$1::init$))},
	{"getArg", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(MethodHandleProxies$1::*)($String*)>(&MethodHandleProxies$1::getArg))},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$EnclosingMethodInfo _MethodHandleProxies$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleProxies",
	"asInterfaceInstance",
	"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/Object;"
};

$InnerClassInfo _MethodHandleProxies$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleProxies$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleProxies$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleProxies$1",
	"java.lang.Object",
	"java.lang.reflect.InvocationHandler",
	_MethodHandleProxies$1_FieldInfo_,
	_MethodHandleProxies$1_MethodInfo_,
	nullptr,
	&_MethodHandleProxies$1_EnclosingMethodInfo_,
	_MethodHandleProxies$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleProxies"
};

$Object* allocate$MethodHandleProxies$1($Class* clazz) {
	return $of($alloc(MethodHandleProxies$1));
}

void MethodHandleProxies$1::init$($MethodHandle* val$target, $Class* val$intfc, $MethodArray* val$methods, $MethodHandleArray* val$vaTargets, $ConcurrentHashMap* val$defaultMethodMap) {
	$set(this, val$target, val$target);
	$set(this, val$intfc, val$intfc);
	$set(this, val$methods, val$methods);
	$set(this, val$vaTargets, val$vaTargets);
	$set(this, val$defaultMethodMap, val$defaultMethodMap);
}

$Object* MethodHandleProxies$1::getArg($String* name) {
	if ($equals($of(name), "getWrapperInstanceTarget"_s)) {
		return $of(this->val$target);
	}
	if ($equals($of(name), "getWrapperInstanceType"_s)) {
		return $of(this->val$intfc);
	}
	$throwNew($AssertionError);
}

$Object* MethodHandleProxies$1::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	for (int32_t i = 0; i < $nc(this->val$methods)->length; ++i) {
		if ($nc(method)->equals($nc(this->val$methods)->get(i))) {
			return $of($nc($nc(this->val$vaTargets)->get(i))->invokeExact(args));
		}
	}
	$load($WrapperInstance);
	if ($nc(method)->getDeclaringClass() == $WrapperInstance::class$) {
		return $of(getArg($(method->getName())));
	}
	if ($MethodHandleProxies::isObjectMethod(method)) {
		return $of($MethodHandleProxies::callObjectMethod(proxy, method, args));
	}
	if ($MethodHandleProxies::isDefaultMethod(method)) {
		return $of($MethodHandleProxies::callDefaultMethod(this->val$defaultMethodMap, proxy, this->val$intfc, method, args));
	}
	$throw($($MethodHandleStatics::newInternalError($$str({"bad proxy method: "_s, method}))));
}

MethodHandleProxies$1::MethodHandleProxies$1() {
}

$Class* MethodHandleProxies$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandleProxies$1, name, initialize, &_MethodHandleProxies$1_ClassInfo_, allocate$MethodHandleProxies$1);
	return class$;
}

$Class* MethodHandleProxies$1::class$ = nullptr;

		} // invoke
	} // lang
} // java