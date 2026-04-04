#include <sun/security/util/ResourcesMgr.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;
using $VM = ::jdk::internal::misc::VM;

namespace sun {
	namespace security {
		namespace util {

class ResourcesMgr$$Lambda$getBundle : public $Function {
	$class(ResourcesMgr$$Lambda$getBundle, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* baseName) override {
		 return $ResourceBundle::getBundle($cast($String, baseName));
	}
};
$Class* ResourcesMgr$$Lambda$getBundle::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResourcesMgr$$Lambda$getBundle, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResourcesMgr$$Lambda$getBundle, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.util.ResourcesMgr$$Lambda$getBundle",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ResourcesMgr$$Lambda$getBundle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourcesMgr$$Lambda$getBundle);
	});
	return class$;
}
$Class* ResourcesMgr$$Lambda$getBundle::class$ = nullptr;

$Map* ResourcesMgr::bundles = nullptr;

void ResourcesMgr::init$() {
}

$String* ResourcesMgr::getString($String* s) {
	$init(ResourcesMgr);
	return $$nc(getBundle("sun.security.util.Resources"_s))->getString(s);
}

$String* ResourcesMgr::getAuthResourceString($String* s) {
	$init(ResourcesMgr);
	return $$nc(getBundle("sun.security.util.AuthResources"_s))->getString(s);
}

$ResourceBundle* ResourcesMgr::getBundle($String* bundleName) {
	$init(ResourcesMgr);
	if (!$VM::isBooted()) {
		$throwNew($InternalError, "Expected to use ResourceBundle only after booted"_s);
	}
	return $cast($ResourceBundle, ResourcesMgr::bundles->computeIfAbsent(bundleName, $$new(ResourcesMgr$$Lambda$getBundle)));
}

void ResourcesMgr::clinit$($Class* clazz) {
	$assignStatic(ResourcesMgr::bundles, $cast($AbstractMap, $new($ConcurrentHashMap)));
}

ResourcesMgr::ResourcesMgr() {
}

$Class* ResourcesMgr::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.util.ResourcesMgr$$Lambda$getBundle")) {
			return ResourcesMgr$$Lambda$getBundle::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"bundles", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/ResourceBundle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourcesMgr, bundles)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResourcesMgr, init$, void)},
		{"getAuthResourceString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourcesMgr, getAuthResourceString, $String*, $String*)},
		{"getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticMethod(ResourcesMgr, getBundle, $ResourceBundle*, $String*)},
		{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourcesMgr, getString, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.util.ResourcesMgr",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResourcesMgr, name, initialize, &classInfo$$, ResourcesMgr::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResourcesMgr);
	});
	return class$;
}

$Class* ResourcesMgr::class$ = nullptr;

		} // util
	} // security
} // sun