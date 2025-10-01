#include <sun/security/util/ResourcesMgr.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
		 return $of($ResourceBundle::getBundle($cast($String, baseName)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourcesMgr$$Lambda$getBundle>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ResourcesMgr$$Lambda$getBundle::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourcesMgr$$Lambda$getBundle::*)()>(&ResourcesMgr$$Lambda$getBundle::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourcesMgr$$Lambda$getBundle::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.util.ResourcesMgr$$Lambda$getBundle",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ResourcesMgr$$Lambda$getBundle::load$($String* name, bool initialize) {
	$loadClass(ResourcesMgr$$Lambda$getBundle, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourcesMgr$$Lambda$getBundle::class$ = nullptr;

$FieldInfo _ResourcesMgr_FieldInfo_[] = {
	{"bundles", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/ResourceBundle;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourcesMgr, bundles)},
	{}
};

$MethodInfo _ResourcesMgr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourcesMgr::*)()>(&ResourcesMgr::init$))},
	{"getAuthResourceString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ResourcesMgr::getAuthResourceString))},
	{"getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle*(*)($String*)>(&ResourcesMgr::getBundle))},
	{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ResourcesMgr::getString))},
	{}
};

$ClassInfo _ResourcesMgr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ResourcesMgr",
	"java.lang.Object",
	nullptr,
	_ResourcesMgr_FieldInfo_,
	_ResourcesMgr_MethodInfo_
};

$Object* allocate$ResourcesMgr($Class* clazz) {
	return $of($alloc(ResourcesMgr));
}

$Map* ResourcesMgr::bundles = nullptr;

void ResourcesMgr::init$() {
}

$String* ResourcesMgr::getString($String* s) {
	$init(ResourcesMgr);
	return $nc($(getBundle("sun.security.util.Resources"_s)))->getString(s);
}

$String* ResourcesMgr::getAuthResourceString($String* s) {
	$init(ResourcesMgr);
	return $nc($(getBundle("sun.security.util.AuthResources"_s)))->getString(s);
}

$ResourceBundle* ResourcesMgr::getBundle($String* bundleName) {
	$init(ResourcesMgr);
	if (!$VM::isBooted()) {
		$throwNew($InternalError, "Expected to use ResourceBundle only after booted"_s);
	}
	return $cast($ResourceBundle, $nc(ResourcesMgr::bundles)->computeIfAbsent(bundleName, static_cast<$Function*>($$new(ResourcesMgr$$Lambda$getBundle))));
}

void clinit$ResourcesMgr($Class* class$) {
	$assignStatic(ResourcesMgr::bundles, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

ResourcesMgr::ResourcesMgr() {
}

$Class* ResourcesMgr::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ResourcesMgr$$Lambda$getBundle::classInfo$.name)) {
			return ResourcesMgr$$Lambda$getBundle::load$(name, initialize);
		}
	}
	$loadClass(ResourcesMgr, name, initialize, &_ResourcesMgr_ClassInfo_, clinit$ResourcesMgr, allocate$ResourcesMgr);
	return class$;
}

$Class* ResourcesMgr::class$ = nullptr;

		} // util
	} // security
} // sun