#include <java/util/ResourceBundle$ResourceBundleControlProviderHolder.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $List = ::java::util::List;
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
		 return ResourceBundle$ResourceBundleControlProviderHolder::lambda$static$0();
	}
};
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0);
	});
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
		 return ResourceBundle$ResourceBundleControlProviderHolder::lambda$getControl$1(baseName, $cast($ResourceBundleControlProvider, provider));
	}
	$String* baseName = nullptr;
};
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"baseName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, baseName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1);
	});
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
};
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2);
	});
	return class$;
}
$Class* ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::class$ = nullptr;

$PrivilegedAction* ResourceBundle$ResourceBundleControlProviderHolder::pa = nullptr;
$List* ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS = nullptr;

void ResourceBundle$ResourceBundleControlProviderHolder::init$() {
}

$ResourceBundle$Control* ResourceBundle$ResourceBundleControlProviderHolder::getControl($String* baseName) {
	$init(ResourceBundle$ResourceBundleControlProviderHolder);
	$useLocalObjectStack();
	$init($ResourceBundle$Control);
	return $nc(ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS)->isEmpty() ? $ResourceBundle$Control::INSTANCE : $cast($ResourceBundle$Control, $$nc($$nc($$nc(ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS->stream())->flatMap($$new(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1, baseName)))->findFirst())->orElse($ResourceBundle$Control::INSTANCE));
}

$Stream* ResourceBundle$ResourceBundleControlProviderHolder::lambda$getControl$1($String* baseName, $ResourceBundleControlProvider* provider) {
	$init(ResourceBundle$ResourceBundleControlProviderHolder);
	return $Stream::ofNullable($($nc(provider)->getControl(baseName)));
}

$List* ResourceBundle$ResourceBundleControlProviderHolder::lambda$static$0() {
	$init(ResourceBundle$ResourceBundleControlProviderHolder);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($ResourceBundleControlProvider);
	return $$nc($$nc($$nc($ServiceLoader::load($ResourceBundleControlProvider::class$, $($ClassLoader::getSystemClassLoader())))->stream())->map($$new(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2)))->toList();
}

void ResourceBundle$ResourceBundleControlProviderHolder::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(ResourceBundle$ResourceBundleControlProviderHolder::pa, $new(ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0));
	$assignStatic(ResourceBundle$ResourceBundleControlProviderHolder::CONTROL_PROVIDERS, $cast($List, $AccessController::doPrivileged(ResourceBundle$ResourceBundleControlProviderHolder::pa)));
}

ResourceBundle$ResourceBundleControlProviderHolder::ResourceBundle$ResourceBundleControlProviderHolder() {
}

$Class* ResourceBundle$ResourceBundleControlProviderHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0")) {
			return ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals("java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1")) {
			return ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$lambda$getControl$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2")) {
			return ResourceBundle$ResourceBundleControlProviderHolder$$Lambda$get$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"pa", "Ljava/security/PrivilegedAction;", "Ljava/security/PrivilegedAction<Ljava/util/List<Ljava/util/spi/ResourceBundleControlProvider;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$ResourceBundleControlProviderHolder, pa)},
		{"CONTROL_PROVIDERS", "Ljava/util/List;", "Ljava/util/List<Ljava/util/spi/ResourceBundleControlProvider;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceBundle$ResourceBundleControlProviderHolder, CONTROL_PROVIDERS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ResourceBundle$ResourceBundleControlProviderHolder, init$, void)},
		{"getControl", "(Ljava/lang/String;)Ljava/util/ResourceBundle$Control;", nullptr, $PRIVATE | $STATIC, $staticMethod(ResourceBundle$ResourceBundleControlProviderHolder, getControl, $ResourceBundle$Control*, $String*)},
		{"lambda$getControl$1", "(Ljava/lang/String;Ljava/util/spi/ResourceBundleControlProvider;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ResourceBundle$ResourceBundleControlProviderHolder, lambda$getControl$1, $Stream*, $String*, $ResourceBundleControlProvider*)},
		{"lambda$static$0", "()Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ResourceBundle$ResourceBundleControlProviderHolder, lambda$static$0, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$ResourceBundleControlProviderHolder", "java.util.ResourceBundle", "ResourceBundleControlProviderHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$ResourceBundleControlProviderHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$ResourceBundleControlProviderHolder, name, initialize, &classInfo$$, ResourceBundle$ResourceBundleControlProviderHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$ResourceBundleControlProviderHolder);
	});
	return class$;
}

$Class* ResourceBundle$ResourceBundleControlProviderHolder::class$ = nullptr;

	} // util
} // java