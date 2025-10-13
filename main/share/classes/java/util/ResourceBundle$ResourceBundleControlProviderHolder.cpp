#include <java/util/ResourceBundle$ResourceBundleControlProviderHolder.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/ResourceBundle$Control.h>
#include <java/util/ResourceBundle.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/function/Function.h>
#include <java/util/spi/ResourceBundleControlProvider.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CONTROL_PROVIDERS
#undef INSTANCE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Function = ::java::util::function::Function;
using $ResourceBundleControlProvider = ::java::util::spi::ResourceBundleControlProvider;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {

class ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(ResourceBundle$ResourceBundleControlProviderHolder::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::*)()>(&ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::class$ = nullptr;

class ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1 : public $Function {
	$class(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$($String* baseName) {
		$set(this, baseName, baseName);
	}
	virtual $Object* apply(Object$* provider) override {
		 return $of(ResourceBundle$ResourceBundleControlProviderHolder::lambda$getControl$1(baseName, $cast($ResourceBundleControlProvider, provider)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1>());
	}
	$String* baseName = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::fieldInfos[2] = {
	{"baseName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, baseName)},
	{}
};
$MethodInfo ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::*)($String*)>(&ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::class$ = nullptr;

class ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2 : public $Function {
	$class(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($ServiceLoader$Provider, inst$)->get();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::*)()>(&ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::class$ = nullptr;

$FieldInfo _ResourceBundle$ResourceBundleControlProviderHolder_FieldInfo_[] = {
	{"pa", "Ljava/security/PrivilegedAction;", "Ljava/security/PrivilegedAction<Ljava/util/List<Ljava/util/spi/ResourceBundleControlProvider;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$ResourceBundleControlProviderHolder, pa)},
	{"CONTROL_PROVIDERS", "Ljava/util/List;", "Ljava/util/List<Ljava/util/spi/ResourceBundleControlProvider;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$ResourceBundleControlProviderHolder, CONTROL_PROVIDERS)},
	{}
};

$MethodInfo _ResourceBundle$ResourceBundleControlProviderHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ResourceBundle$ResourceBundleControlProviderHolder::*)()>(&ResourceBundle$ResourceBundleControlProviderHolder::init$))},
	{"getControl", "(Ljava/lang/String;)Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle$Control*(*)($String*)>(&ResourceBundle$ResourceBundleControlProviderHolder::getControl))},
	{"lambda$getControl$1", "(Ljava/lang/String;Ljava/util/spi/ResourceBundleControlProvider;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($String*,$ResourceBundleControlProvider*)>(&ResourceBundle$ResourceBundleControlProviderHolder::lambda$getControl$1))},
	{"lambda$static$0", "()Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$List*(*)()>(&ResourceBundle$ResourceBundleControlProviderHolder::lambda$static$0))},
	{}
};

$InnerClassInfo _ResourceBundle$ResourceBundleControlProviderHolder_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$ResourceBundleControlProviderHolder", "java.util.ResourceBundle", "ResourceBundleControlProviderHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ResourceBundle$ResourceBundleControlProviderHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$ResourceBundleControlProviderHolder",
	"java.lang.Object",
	nullptr,
	_ResourceBundle$ResourceBundleControlProviderHolder_FieldInfo_,
	_ResourceBundle$ResourceBundleControlProviderHolder_MethodInfo_,
	nullptr,
	nullptr,
	_ResourceBundle$ResourceBundleControlProviderHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$ResourceBundleControlProviderHolder($Class* clazz) {
	return $of($alloc(ResourceBundle$ResourceBundleControlProviderHolder));
}

$PrivilegedAction* ResourceBundle$ResourceBundleControlProviderHolder::pa = nullptr;
$List* ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS = nullptr;

void ResourceBundle$ResourceBundleControlProviderHolder::init$() {
}

$ResourceBundle$Control* ResourceBundle$ResourceBundleControlProviderHolder::getControl($String* baseName) {
	$init(ResourceBundle$ResourceBundleControlProviderHolder);
	$init($ResourceBundle$Control);
	return $nc(ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS)->isEmpty() ? $ResourceBundle$Control::INSTANCE : $cast($ResourceBundle$Control, $nc($($nc($($nc($($nc(ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS)->stream()))->flatMap(static_cast<$Function*>($$new(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, baseName)))))->findFirst()))->orElse($ResourceBundle$Control::INSTANCE));
}

$Stream* ResourceBundle$ResourceBundleControlProviderHolder::lambda$getControl$1($String* baseName, $ResourceBundleControlProvider* provider) {
	$init(ResourceBundle$ResourceBundleControlProviderHolder);
	return $Stream::ofNullable($($nc(provider)->getControl(baseName)));
}

$List* ResourceBundle$ResourceBundleControlProviderHolder::lambda$static$0() {
	$init(ResourceBundle$ResourceBundleControlProviderHolder);
	$beforeCallerSensitive();
	$load($ResourceBundleControlProvider);
	return $nc($($nc($($nc($($ServiceLoader::load($ResourceBundleControlProvider::class$, $($ClassLoader::getSystemClassLoader()))))->stream()))->map(static_cast<$Function*>($$new(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2)))))->toList();
}

void clinit$ResourceBundle$ResourceBundleControlProviderHolder($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(ResourceBundle$ResourceBundleControlProviderHolder::pa, static_cast<$PrivilegedAction*>($new(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0)));
	$assignStatic(ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS, $cast($List, $AccessController::doPrivileged(ResourceBundle$ResourceBundleControlProviderHolder::pa)));
}

ResourceBundle$ResourceBundleControlProviderHolder::ResourceBundle$ResourceBundleControlProviderHolder() {
}

$Class* ResourceBundle$ResourceBundleControlProviderHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::classInfo$.name)) {
			return ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::classInfo$.name)) {
			return ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::load$(name, initialize);
		}
		if (name->equals(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::classInfo$.name)) {
			return ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::load$(name, initialize);
		}
	}
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder, name, initialize, &_ResourceBundle$ResourceBundleControlProviderHolder_ClassInfo_, clinit$ResourceBundle$ResourceBundleControlProviderHolder, allocate$ResourceBundle$ResourceBundleControlProviderHolder);
	return class$;
}

$Class* ResourceBundle$ResourceBundleControlProviderHolder::class$ = nullptr;

	} // util
} // java