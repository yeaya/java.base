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

void ResourceBundle$4::init$($ServiceLoader* val$providers, $ResourceBundle$CacheKey* val$cacheKey, $String* val$baseName, $Locale* val$locale) {
	$set(this, val$providers, val$providers);
	$set(this, val$cacheKey, val$cacheKey);
	$set(this, val$baseName, val$baseName);
	$set(this, val$locale, val$locale);
}

$Object* ResourceBundle$4::run() {
	$useLocalObjectStack();
	{
		$var($Iterator, itr, $nc(this->val$providers)->iterator());
		for (; $nc(itr)->hasNext();) {
			try {
				$var($ResourceBundleProvider, provider, $cast($ResourceBundleProvider, itr->next()));
				bool var$0 = this->val$cacheKey != nullptr && this->val$cacheKey->callerHasProvider$ == nullptr;
				if (var$0) {
					var$0 = this->val$cacheKey->getModule() == $nc(provider)->getClass()->getModule();
				}
				if (var$0) {
					$set($nc(this->val$cacheKey), callerHasProvider$, $Boolean::TRUE);
				}
				$var($ResourceBundle, bundle, $nc(provider)->getBundle(this->val$baseName, this->val$locale));
				$ResourceBundle::trace("provider %s %s locale: %s bundle: %s%n"_s, $$new($ObjectArray, {
					provider,
					this->val$baseName,
					this->val$locale,
					bundle
				}));
				if (bundle != nullptr) {
					return bundle;
				}
			} catch ($ServiceConfigurationError& e) {
				if (this->val$cacheKey != nullptr) {
					this->val$cacheKey->setCause(e);
				}
			} catch ($SecurityException& e) {
				if (this->val$cacheKey != nullptr) {
					this->val$cacheKey->setCause(e);
				}
			}
		}
	}
	if (this->val$cacheKey != nullptr && this->val$cacheKey->callerHasProvider$ == nullptr) {
		$set(this->val$cacheKey, callerHasProvider$, $Boolean::FALSE);
	}
	return nullptr;
}

ResourceBundle$4::ResourceBundle$4() {
}

$Class* ResourceBundle$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$locale", "Ljava/util/Locale;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$locale)},
		{"val$baseName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$baseName)},
		{"val$cacheKey", "Ljava/util/ResourceBundle$CacheKey;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$cacheKey)},
		{"val$providers", "Ljava/util/ServiceLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$4, val$providers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ServiceLoader;Ljava/util/ResourceBundle$CacheKey;Ljava/lang/String;Ljava/util/Locale;)V", nullptr, 0, $method(ResourceBundle$4, init$, void, $ServiceLoader*, $ResourceBundle$CacheKey*, $String*, $Locale*)},
		{"run", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ResourceBundle",
		"loadBundleFromProviders",
		"(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ServiceLoader;Ljava/util/ResourceBundle$CacheKey;)Ljava/util/ResourceBundle;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$4", nullptr, nullptr, 0},
		{"java.util.ResourceBundle$CacheKey", "java.util.ResourceBundle", "CacheKey", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$4",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ResourceBundle;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$4);
	});
	return class$;
}

$Class* ResourceBundle$4::class$ = nullptr;

	} // util
} // java