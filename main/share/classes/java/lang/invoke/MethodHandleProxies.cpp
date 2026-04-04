#include <java/lang/invoke/MethodHandleProxies.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <java/lang/invoke/MethodHandleProxies$1.h>
#include <java/lang/invoke/MethodHandleProxies$2.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/security/AccessController.h>
#include <java/util/ArrayList.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jdk/internal/reflect/Reflection.h>
#include <sun/invoke/WrapperInstance.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef IMPL_LOOKUP
#undef TYPE

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;
using $MethodHandleProxies$1 = ::java::lang::invoke::MethodHandleProxies$1;
using $MethodHandleProxies$2 = ::java::lang::invoke::MethodHandleProxies$2;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $AccessController = ::java::security::AccessController;
using $ArrayList = ::java::util::ArrayList;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;
using $Reflection = ::jdk::internal::reflect::Reflection;
using $WrapperInstance = ::sun::invoke::WrapperInstance;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0 : public $Function {
	$class(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0, $NO_CLASS_INIT, $Function)
public:
	void init$($Class* intfc, Object$* self) {
		this->intfc = intfc;
		$set(this, self, self);
	}
	virtual $Object* apply(Object$* mk) override {
		 return MethodHandleProxies::lambda$callDefaultMethod$0(intfc, self, $cast($Method, mk));
	}
	$Class* intfc = nullptr;
	$Object* self = nullptr;
};
$Class* MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"intfc", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0, intfc)},
		{"self", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0, self)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0, init$, void, $Class*, Object$*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.invoke.MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0);
	});
	return class$;
}
$Class* MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0::class$ = nullptr;

bool MethodHandleProxies::$assertionsDisabled = false;

void MethodHandleProxies::init$() {
}

$Object* MethodHandleProxies::asInterfaceInstance($Class* intfc, $MethodHandle* target) {
	$init(MethodHandleProxies);
	$useLocalObjectStack();
	bool var$0 = !$nc(intfc)->isInterface();
	if (var$0 || !$Modifier::isPublic(intfc->getModifiers())) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("not a public interface"_s, $(intfc->getName()))));
	}
	if (intfc->isSealed()) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("a sealed interface"_s, $(intfc->getName()))));
	}
	$var($MethodHandle, mh, nullptr);
	if ($System::getSecurityManager() != nullptr) {
		$Class* caller = $Reflection::getCallerClass();
		$var($ClassLoader, ccl, caller != nullptr ? caller->getClassLoader() : ($ClassLoader*)nullptr);
		$ReflectUtil::checkProxyPackageAccess(ccl, $$new($ClassArray, {intfc}));
		$assign(mh, ccl != nullptr ? bindCaller(target, caller) : target);
	} else {
		$assign(mh, target);
	}
	$var($ClassLoader, proxyLoader, intfc->getClassLoader());
	if (proxyLoader == nullptr) {
		$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
		$assign(proxyLoader, cl != nullptr ? cl : $ClassLoader::getSystemClassLoader());
	}
	$var($MethodArray, methods, getSingleNameMethods(intfc));
	if (methods == nullptr) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("not a single-method interface"_s, $(intfc->getName()))));
	}
	$var($MethodHandleArray, vaTargets, $new($MethodHandleArray, $nc(methods)->length));
	for (int32_t i = 0; i < methods->length; ++i) {
		$var($Method, sm, methods->get(i));
		$Class* var$1 = $nc(sm)->getReturnType();
		$var($MethodType, smMT, $MethodType::methodType(var$1, $(sm->getParameterTypes())));
		$var($MethodHandle, checkTarget, $nc(mh)->asType(smMT));
		$assign(checkTarget, $nc(checkTarget)->asType($($$nc($nc(checkTarget)->type())->changeReturnType($Object::class$))));
		vaTargets->set(i, $($nc(checkTarget)->asSpreader($getClass($ObjectArray), $nc(smMT)->parameterCount())));
	}
	$var($ConcurrentHashMap, defaultMethodMap, hasDefaultMethods(intfc) ? $new($ConcurrentHashMap) : ($ConcurrentHashMap*)nullptr);
	$var($InvocationHandler, ih, $new($MethodHandleProxies$1, target, intfc, methods, vaTargets, defaultMethodMap));
	$var($Object, proxy, nullptr);
	if ($System::getSecurityManager() != nullptr) {
		$var($ClassLoader, loader, proxyLoader);
		$assign(proxy, $AccessController::doPrivileged($$new($MethodHandleProxies$2, loader, intfc, ih)));
	} else {
		$load($WrapperInstance);
		$assign(proxy, $Proxy::newProxyInstance(proxyLoader, $$new($ClassArray, {
			intfc,
			$WrapperInstance::class$
		}), ih));
	}
	return intfc->cast(proxy);
}

$MethodHandle* MethodHandleProxies::bindCaller($MethodHandle* target, $Class* hostClass) {
	$init(MethodHandleProxies);
	return $$nc($MethodHandleImpl::bindCaller(target, hostClass))->withVarargs($nc(target)->isVarargsCollector());
}

bool MethodHandleProxies::isWrapperInstance(Object$* x) {
	$init(MethodHandleProxies);
	return $instanceOf($WrapperInstance, x);
}

$WrapperInstance* MethodHandleProxies::asWrapperInstance(Object$* x) {
	$init(MethodHandleProxies);
	try {
		if (x != nullptr) {
			return $cast($WrapperInstance, x);
		}
	} catch ($ClassCastException& ex) {
	}
	$throw($($MethodHandleStatics::newIllegalArgumentException("not a wrapper instance"_s)));
	$shouldNotReachHere();
}

$MethodHandle* MethodHandleProxies::wrapperInstanceTarget(Object$* x) {
	$init(MethodHandleProxies);
	return $$nc(asWrapperInstance(x))->getWrapperInstanceTarget();
}

$Class* MethodHandleProxies::wrapperInstanceType(Object$* x) {
	$init(MethodHandleProxies);
	return $$nc(asWrapperInstance(x))->getWrapperInstanceType();
}

bool MethodHandleProxies::isObjectMethod($Method* m) {
	$init(MethodHandleProxies);
	$useLocalObjectStack();
	$var($String, s14004$, $nc(m)->getName());
	int32_t tmp14004$ = -1;
	switch ($nc(s14004$)->hashCode()) {
	case (int32_t)0x9616526c:
		if (s14004$->equals("toString"_s)) {
			tmp14004$ = 0;
		}
		break;
	case 0x08cdac1b:
		if (s14004$->equals("hashCode"_s)) {
			tmp14004$ = 1;
		}
		break;
	case (int32_t)0xb2c87fbf:
		if (s14004$->equals("equals"_s)) {
			tmp14004$ = 2;
		}
		break;
	}
	bool var$0 = false;
	switch (tmp14004$) {
	case 0:
		{
			bool var$1 = $nc(m)->getReturnType() == $String::class$;
			var$0 = var$1 && m->getParameterCount() == 0;
			break;
		}
	case 1:
		{
			bool var$2 = $nc(m)->getReturnType() == $Integer::TYPE;
			var$0 = var$2 && m->getParameterCount() == 0;
			break;
		}
	case 2:
		{
			bool var$4 = $nc(m)->getReturnType() == $Boolean::TYPE;
			bool var$3 = var$4 && m->getParameterCount() == 1;
			var$0 = var$3 && $nc($(m->getParameterTypes()))->get(0) == $Object::class$;
			break;
		}
	default:
		var$0 = false;
		break;
	}
	return var$0;
}

$Object* MethodHandleProxies::callObjectMethod(Object$* self, $Method* m, $ObjectArray* args) {
	$init(MethodHandleProxies);
	$useLocalObjectStack();
	if (!MethodHandleProxies::$assertionsDisabled && !(isObjectMethod(m))) {
		$throwNew($AssertionError, m);
	}
	$var($String, s14666$, $nc(m)->getName());
	int32_t tmp14666$ = -1;
	switch ($nc(s14666$)->hashCode()) {
	case (int32_t)0x9616526c:
		if (s14666$->equals("toString"_s)) {
			tmp14666$ = 0;
		}
		break;
	case 0x08cdac1b:
		if (s14666$->equals("hashCode"_s)) {
			tmp14666$ = 1;
		}
		break;
	case (int32_t)0xb2c87fbf:
		if (s14666$->equals("equals"_s)) {
			tmp14666$ = 2;
		}
		break;
	}
	$var($Object, var$0, nullptr);
	switch (tmp14666$) {
	case 0:
		{
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append($($nc($of(self))->getClass()->getName()));
			var$1->append("@"_s);
			var$1->append($($Integer::toHexString($of(self)->hashCode())));
			$assign(var$0, $str(var$1));
			break;
		}
	case 1:
		$assign(var$0, $Integer::valueOf($System::identityHashCode(self)));
		break;
	case 2:
		$assign(var$0, $Boolean::valueOf(($equals(self, $nc(args)->get(0)))));
		break;
	default:
		$assign(var$0, nullptr);
		break;
	}
	return var$0;
}

$MethodArray* MethodHandleProxies::getSingleNameMethods($Class* intfc) {
	$init(MethodHandleProxies);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ArrayList, methods, $new($ArrayList));
	$var($String, uniqueName, nullptr);
	{
		$var($MethodArray, arr$, $nc(intfc)->getMethods());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				if (isObjectMethod(m)) {
					continue;
				}
				if (!$Modifier::isAbstract($nc(m)->getModifiers())) {
					continue;
				}
				$var($String, mname, m->getName());
				if (uniqueName == nullptr) {
					$assign(uniqueName, mname);
				} else if (!uniqueName->equals(mname)) {
					return nullptr;
				}
				methods->add(m);
			}
		}
	}
	if (uniqueName == nullptr) {
		return nullptr;
	}
	return $cast($MethodArray, methods->toArray($$new($MethodArray, methods->size())));
}

bool MethodHandleProxies::isDefaultMethod($Method* m) {
	$init(MethodHandleProxies);
	return !$Modifier::isAbstract($nc(m)->getModifiers());
}

bool MethodHandleProxies::hasDefaultMethods($Class* intfc) {
	$init(MethodHandleProxies);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($MethodArray, arr$, $nc(intfc)->getMethods());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Method, m, arr$->get(i$));
		{
			bool var$0 = !isObjectMethod(m);
			if (var$0 && !$Modifier::isAbstract($nc(m)->getModifiers())) {
				return true;
			}
		}
	}
	return false;
}

$Object* MethodHandleProxies::callDefaultMethod($ConcurrentHashMap* defaultMethodMap, Object$* self, $Class* intfc, $Method* m, $ObjectArray* args) {
	$init(MethodHandleProxies);
	$useLocalObjectStack();
	bool var$0 = !MethodHandleProxies::$assertionsDisabled;
	if (var$0) {
		bool var$1 = isDefaultMethod(m);
		var$0 = !(var$1 && !isObjectMethod(m));
	}
	if (var$0) {
		$throwNew($AssertionError, m);
	}
	$var($MethodHandle, dmh, $cast($MethodHandle, $nc(defaultMethodMap)->computeIfAbsent(m, $$new(MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0, intfc, self))));
	return $nc(dmh)->invoke($$new($ObjectArray, {self, args}));
}

$MethodHandle* MethodHandleProxies::lambda$callDefaultMethod$0($Class* intfc, Object$* self, $Method* mk) {
	$init(MethodHandleProxies);
	$useLocalObjectStack();
	try {
		$init($MethodHandles$Lookup);
		$var($String, var$0, $nc(mk)->getName());
		$Class* var$2 = mk->getReturnType();
		$var($MethodType, var$1, $MethodType::methodType(var$2, $(mk->getParameterTypes())));
		$var($MethodHandle, mh, $nc($MethodHandles$Lookup::IMPL_LOOKUP)->findSpecial(intfc, var$0, var$1, $nc($of(self))->getClass()));
		return $nc(mh)->asSpreader($getClass($ObjectArray), mk->getParameterCount());
	} catch ($NoSuchMethodException& e) {
		$throwNew($InternalError, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

void MethodHandleProxies::clinit$($Class* clazz) {
	MethodHandleProxies::$assertionsDisabled = !MethodHandleProxies::class$->desiredAssertionStatus();
}

MethodHandleProxies::MethodHandleProxies() {
}

$Class* MethodHandleProxies::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.invoke.MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0")) {
			return MethodHandleProxies$$Lambda$lambda$callDefaultMethod$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleProxies, $assertionsDisabled)},
		{}
	};
	$CompoundAttribute asInterfaceInstancemethodAnnotations$$[] = {
		{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MethodHandleProxies, init$, void)},
		{"asInterfaceInstance", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/invoke/MethodHandle;)TT;", $PUBLIC | $STATIC, $staticMethod(MethodHandleProxies, asInterfaceInstance, $Object*, $Class*, $MethodHandle*), nullptr, nullptr, asInterfaceInstancemethodAnnotations$$},
		{"asWrapperInstance", "(Ljava/lang/Object;)Lsun/invoke/WrapperInstance;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, asWrapperInstance, $WrapperInstance*, Object$*)},
		{"bindCaller", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, bindCaller, $MethodHandle*, $MethodHandle*, $Class*)},
		{"callDefaultMethod", "(Ljava/util/concurrent/ConcurrentHashMap;Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/reflect/Method;Ljava/lang/invoke/MethodHandle;>;Ljava/lang/Object;Ljava/lang/Class<*>;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, callDefaultMethod, $Object*, $ConcurrentHashMap*, Object$*, $Class*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{"callObjectMethod", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, callObjectMethod, $Object*, Object$*, $Method*, $ObjectArray*)},
		{"getSingleNameMethods", "(Ljava/lang/Class;)[Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;)[Ljava/lang/reflect/Method;", $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, getSingleNameMethods, $MethodArray*, $Class*)},
		{"hasDefaultMethods", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, hasDefaultMethods, bool, $Class*)},
		{"isDefaultMethod", "(Ljava/lang/reflect/Method;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, isDefaultMethod, bool, $Method*)},
		{"isObjectMethod", "(Ljava/lang/reflect/Method;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodHandleProxies, isObjectMethod, bool, $Method*)},
		{"isWrapperInstance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodHandleProxies, isWrapperInstance, bool, Object$*)},
		{"lambda$callDefaultMethod$0", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/reflect/Method;)Ljava/lang/invoke/MethodHandle;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MethodHandleProxies, lambda$callDefaultMethod$0, $MethodHandle*, $Class*, Object$*, $Method*)},
		{"wrapperInstanceTarget", "(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodHandleProxies, wrapperInstanceTarget, $MethodHandle*, Object$*)},
		{"wrapperInstanceType", "(Ljava/lang/Object;)Ljava/lang/Class;", "(Ljava/lang/Object;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticMethod(MethodHandleProxies, wrapperInstanceType, $Class*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodHandleProxies$2", nullptr, nullptr, 0},
		{"java.lang.invoke.MethodHandleProxies$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.invoke.MethodHandleProxies",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodHandleProxies$2,java.lang.invoke.MethodHandleProxies$1"
	};
	$loadClass(MethodHandleProxies, name, initialize, &classInfo$$, MethodHandleProxies::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleProxies);
	});
	return class$;
}

$Class* MethodHandleProxies::class$ = nullptr;

		} // invoke
	} // lang
} // java