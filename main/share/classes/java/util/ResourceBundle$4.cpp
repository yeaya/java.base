#include <java/util/ResourceBundle$4.h>

#include <java/lang/Module.h>
#include <java/lang/SecurityException.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle$CacheKey.h>
#include <java/util/ResourceBundle.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/spi/ResourceBundleProvider.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ResourceBundle$CacheKey = ::java::util::ResourceBundle$CacheKey;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ResourceBundleProvider = ::java::util::spi::ResourceBundleProvider;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$4_FieldInfo_[] = {
	{"val$locale", "Ljava/util/Locale;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$locale)},
	{"val$baseName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$baseName)},
	{"val$cacheKey", "Ljava/util/ResourceBundle$CacheKey;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$cacheKey)},
	{"val$providers", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$providers)},
	{}
};

$MethodInfo _ResourceBundle$4_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ServiceLoader;Ljava/util/ResourceBundle$CacheKey;Ljava/lang/String;Ljava/util/Locale;)V", nullptr, 0, $method(static_cast<void(ResourceBundle$4::*)($ServiceLoader*,$ResourceBundle$CacheKey*,$String*,$Locale*)>(&ResourceBundle$4::init$))},
	{"run", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ResourceBundle$4_EnclosingMethodInfo_ = {
	"java.util.ResourceBundle",
	"loadBundleFromProviders",
	"(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ServiceLoader;Ljava/util/ResourceBundle$CacheKey;)Ljava/util/ResourceBundle;"
};

$InnerClassInfo _ResourceBundle$4_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$4", nullptr, nullptr, 0},
	{"java.util.ResourceBundle$CacheKey", "java.util.ResourceBundle", "CacheKey", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ResourceBundle$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ResourceBundle$4_FieldInfo_,
	_ResourceBundle$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ResourceBundle;>;",
	&_ResourceBundle$4_EnclosingMethodInfo_,
	_ResourceBundle$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$4($Class* clazz) {
	return $of($alloc(ResourceBundle$4));
}

void ResourceBundle$4::init$($ServiceLoader* val$providers, $ResourceBundle$CacheKey* val$cacheKey, $String* val$baseName, $Locale* val$locale) {
	$set(this, val$providers, val$providers);
	$set(this, val$cacheKey, val$cacheKey);
	$set(this, val$baseName, val$baseName);
	$set(this, val$locale, val$locale);
}

$Object* ResourceBundle$4::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, itr, $nc(this->val$providers)->iterator());
		for (; $nc(itr)->hasNext();) {
			try {
				$var($ResourceBundleProvider, provider, $cast($ResourceBundleProvider, itr->next()));
				bool var$0 = this->val$cacheKey != nullptr && $nc(this->val$cacheKey)->callerHasProvider$ == nullptr;
				if (var$0) {
					var$0 = $nc(this->val$cacheKey)->getModule() == $nc($of(provider))->getClass()->getModule();
				}
				if (var$0) {
					$init($Boolean);
					$set($nc(this->val$cacheKey), callerHasProvider$, $Boolean::TRUE);
				}
				$var($ResourceBundle, bundle, $nc(provider)->getBundle(this->val$baseName, this->val$locale));
				$ResourceBundle::trace("provider %s %s locale: %s bundle: %s%n"_s, $$new($ObjectArray, {
					$of(provider),
					$of(this->val$baseName),
					$of(this->val$locale),
					$of(bundle)
				}));
				if (bundle != nullptr) {
					return $of(bundle);
				}
			} catch ($ServiceConfigurationError& e) {
				if (this->val$cacheKey != nullptr) {
					$nc(this->val$cacheKey)->setCause(e);
				}
			} catch ($SecurityException& e) {
				if (this->val$cacheKey != nullptr) {
					$nc(this->val$cacheKey)->setCause(e);
				}
			}
		}
	}
	if (this->val$cacheKey != nullptr && $nc(this->val$cacheKey)->callerHasProvider$ == nullptr) {
		$init($Boolean);
		$set($nc(this->val$cacheKey), callerHasProvider$, $Boolean::FALSE);
	}
	return $of(nullptr);
}

ResourceBundle$4::ResourceBundle$4() {
}

$Class* ResourceBundle$4::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$4, name, initialize, &_ResourceBundle$4_ClassInfo_, allocate$ResourceBundle$4);
	return class$;
}

$Class* ResourceBundle$4::class$ = nullptr;

	} // util
} // java