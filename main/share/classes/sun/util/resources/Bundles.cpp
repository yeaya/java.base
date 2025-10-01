#include <sun/util/resources/Bundles.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle.h>
#include <java/util/ServiceLoader.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jdk/internal/access/JavaUtilResourceBundleAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/util/resources/Bundles$1.h>
#include <sun/util/resources/Bundles$2.h>
#include <sun/util/resources/Bundles$BundleReference.h>
#include <sun/util/resources/Bundles$CacheKey.h>
#include <sun/util/resources/Bundles$CacheKeyReference.h>
#include <sun/util/resources/Bundles$Strategy.h>
#include <jcpp.h>

#undef INITIAL_CACHE_SIZE
#undef NONEXISTENT_BUNDLE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Objects = ::java::util::Objects;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $JavaUtilResourceBundleAccess = ::jdk::internal::access::JavaUtilResourceBundleAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Bundles$1 = ::sun::util::resources::Bundles$1;
using $Bundles$2 = ::sun::util::resources::Bundles$2;
using $Bundles$BundleReference = ::sun::util::resources::Bundles$BundleReference;
using $Bundles$CacheKey = ::sun::util::resources::Bundles$CacheKey;
using $Bundles$CacheKeyReference = ::sun::util::resources::Bundles$CacheKeyReference;
using $Bundles$Strategy = ::sun::util::resources::Bundles$Strategy;

namespace sun {
	namespace util {
		namespace resources {

$FieldInfo _Bundles_FieldInfo_[] = {
	{"INITIAL_CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Bundles, INITIAL_CACHE_SIZE)},
	{"NONEXISTENT_BUNDLE", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bundles, NONEXISTENT_BUNDLE)},
	{"bundleAccess", "Ljdk/internal/access/JavaUtilResourceBundleAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bundles, bundleAccess)},
	{"cacheList", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Lsun/util/resources/Bundles$CacheKey;Lsun/util/resources/Bundles$BundleReference;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Bundles, cacheList)},
	{"referenceQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Bundles, referenceQueue)},
	{}
};

$MethodInfo _Bundles_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Bundles::*)()>(&Bundles::init$))},
	{"cleanupCache", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Bundles::cleanupCache))},
	{"findBundleInCache", "(Lsun/util/resources/Bundles$CacheKey;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle*(*)($Bundles$CacheKey*)>(&Bundles::findBundleInCache))},
	{"findBundleOf", "(Lsun/util/resources/Bundles$CacheKey;Lsun/util/resources/Bundles$Strategy;Ljava/lang/String;Ljava/util/List;I)Ljava/util/ResourceBundle;", "(Lsun/util/resources/Bundles$CacheKey;Lsun/util/resources/Bundles$Strategy;Ljava/lang/String;Ljava/util/List<Ljava/util/Locale;>;I)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle*(*)($Bundles$CacheKey*,$Bundles$Strategy*,$String*,$List*,int32_t)>(&Bundles::findBundleOf))},
	{"isValidBundle", "(Ljava/util/ResourceBundle;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ResourceBundle*)>(&Bundles::isValidBundle))},
	{"loadBundleFromProviders", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ServiceLoader;Lsun/util/resources/Bundles$CacheKey;)Ljava/util/ResourceBundle;", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ServiceLoader<Ljava/util/spi/ResourceBundleProvider;>;Lsun/util/resources/Bundles$CacheKey;)Ljava/util/ResourceBundle;", $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle*(*)($String*,$Locale*,$ServiceLoader*,$Bundles$CacheKey*)>(&Bundles::loadBundleFromProviders))},
	{"loadBundleOf", "(Ljava/lang/String;Ljava/util/Locale;Lsun/util/resources/Bundles$Strategy;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle*(*)($String*,$Locale*,$Bundles$Strategy*)>(&Bundles::loadBundleOf))},
	{"of", "(Ljava/lang/String;Ljava/util/Locale;Lsun/util/resources/Bundles$Strategy;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ResourceBundle*(*)($String*,$Locale*,$Bundles$Strategy*)>(&Bundles::of))},
	{"putBundleInCache", "(Lsun/util/resources/Bundles$CacheKey;Ljava/util/ResourceBundle;)Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ResourceBundle*(*)($Bundles$CacheKey*,$ResourceBundle*)>(&Bundles::putBundleInCache))},
	{"throwMissingResourceException", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$Locale*,$Throwable*)>(&Bundles::throwMissingResourceException))},
	{"toOtherBundleName", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*,$Locale*)>(&Bundles::toOtherBundleName))},
	{}
};

$InnerClassInfo _Bundles_InnerClassesInfo_[] = {
	{"sun.util.resources.Bundles$CacheKey", "sun.util.resources.Bundles", "CacheKey", $PRIVATE | $STATIC},
	{"sun.util.resources.Bundles$BundleReference", "sun.util.resources.Bundles", "BundleReference", $PRIVATE | $STATIC},
	{"sun.util.resources.Bundles$CacheKeyReference", "sun.util.resources.Bundles", "CacheKeyReference", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.resources.Bundles$Strategy", "sun.util.resources.Bundles", "Strategy", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.resources.Bundles$2", nullptr, nullptr, 0},
	{"sun.util.resources.Bundles$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Bundles_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.resources.Bundles",
	"java.lang.Object",
	nullptr,
	_Bundles_FieldInfo_,
	_Bundles_MethodInfo_,
	nullptr,
	nullptr,
	_Bundles_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.resources.Bundles$CacheKey,sun.util.resources.Bundles$BundleReference,sun.util.resources.Bundles$CacheKeyReference,sun.util.resources.Bundles$Strategy,sun.util.resources.Bundles$2,sun.util.resources.Bundles$1"
};

$Object* allocate$Bundles($Class* clazz) {
	return $of($alloc(Bundles));
}


$ResourceBundle* Bundles::NONEXISTENT_BUNDLE = nullptr;
$JavaUtilResourceBundleAccess* Bundles::bundleAccess = nullptr;

$ConcurrentMap* Bundles::cacheList = nullptr;

$ReferenceQueue* Bundles::referenceQueue = nullptr;

void Bundles::init$() {
}

$ResourceBundle* Bundles::of($String* baseName, $Locale* locale, $Bundles$Strategy* strategy) {
	$init(Bundles);
	return loadBundleOf(baseName, locale, strategy);
}

$ResourceBundle* Bundles::loadBundleOf($String* baseName, $Locale* targetLocale, $Bundles$Strategy* strategy) {
	$init(Bundles);
	$beforeCallerSensitive();
	$Objects::requireNonNull(baseName);
	$Objects::requireNonNull(targetLocale);
	$Objects::requireNonNull(strategy);
	$var($Bundles$CacheKey, cacheKey, $new($Bundles$CacheKey, baseName, targetLocale));
	$var($ResourceBundle, bundle, nullptr);
	$var($Bundles$BundleReference, bundleRef, $cast($Bundles$BundleReference, $nc(Bundles::cacheList)->get(cacheKey)));
	if (bundleRef != nullptr) {
		$assign(bundle, $cast($ResourceBundle, bundleRef->get()));
	}
	if (isValidBundle(bundle)) {
		return bundle;
	}
	$Class* type = strategy->getResourceBundleProviderType(baseName, targetLocale);
	if (type != nullptr) {
		$var($ServiceLoader, providers, $ServiceLoader::loadInstalled(type));
		cacheKey->setProviders(providers);
	}
	$var($List, candidateLocales, strategy->getCandidateLocales(baseName, targetLocale));
	$assign(bundle, findBundleOf(cacheKey, strategy, baseName, candidateLocales, 0));
	if (bundle == nullptr) {
		throwMissingResourceException(baseName, targetLocale, $(cacheKey->getCause()));
	}
	return bundle;
}

$ResourceBundle* Bundles::findBundleOf($Bundles$CacheKey* cacheKey, $Bundles$Strategy* strategy, $String* baseName, $List* candidateLocales, int32_t index) {
	$init(Bundles);
	$beforeCallerSensitive();
	$var($ResourceBundle, parent, nullptr);
	$var($Locale, targetLocale, $cast($Locale, $nc(candidateLocales)->get(index)));
	if (index != candidateLocales->size() - 1) {
		$assign(parent, findBundleOf(cacheKey, strategy, baseName, candidateLocales, index + 1));
	}
	cleanupCache();
	$nc(cacheKey)->setLocale(targetLocale);
	$var($ResourceBundle, bundle, findBundleInCache(cacheKey));
	if (bundle != nullptr) {
		if (bundle == Bundles::NONEXISTENT_BUNDLE) {
			return parent;
		}
		if ($nc(Bundles::bundleAccess)->getParent(bundle) == parent) {
			return bundle;
		}
		$var($Bundles$BundleReference, bundleRef, $cast($Bundles$BundleReference, $nc(Bundles::cacheList)->get(cacheKey)));
		if (bundleRef != nullptr && $equals(bundleRef->get(), bundle)) {
			$nc(Bundles::cacheList)->remove(cacheKey, bundleRef);
		}
	}
	$var($ServiceLoader, providers, cacheKey->getProviders());
	if (providers != nullptr) {
		if ($nc(strategy)->getResourceBundleProviderType(baseName, targetLocale) == nullptr) {
			$assign(providers, nullptr);
		}
	}
	$var($Bundles$CacheKey, constKey, $cast($Bundles$CacheKey, cacheKey->clone()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (providers != nullptr) {
				$assign(bundle, loadBundleFromProviders(baseName, targetLocale, providers, cacheKey));
			} else {
				try {
					$var($String, bundleName, $nc(strategy)->toBundleName(baseName, targetLocale));
					$Class* c = $Class::forName($(Bundles::class$->getModule()), bundleName);
					$load($ResourceBundle);
					if (c != nullptr && $ResourceBundle::class$->isAssignableFrom(c)) {
						$Class* bundleClass = c;
						$assign(bundle, $nc(Bundles::bundleAccess)->newResourceBundle(bundleClass));
					}
					if (bundle == nullptr) {
						$var($String, otherBundleName, toOtherBundleName(baseName, bundleName, targetLocale));
						if (!$nc(bundleName)->equals(otherBundleName)) {
							c = $Class::forName($(Bundles::class$->getModule()), otherBundleName);
							if (c != nullptr && $ResourceBundle::class$->isAssignableFrom(c)) {
								$Class* bundleClass = c;
								$assign(bundle, $nc(Bundles::bundleAccess)->newResourceBundle(bundleClass));
							}
						}
					}
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					cacheKey->setCause(e);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if ($instanceOf($InterruptedException, $($nc(constKey)->getCause()))) {
				$($Thread::currentThread())->interrupt();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (bundle == nullptr) {
		putBundleInCache(cacheKey, Bundles::NONEXISTENT_BUNDLE);
		return parent;
	}
	if (parent != nullptr && $nc(Bundles::bundleAccess)->getParent(bundle) == nullptr) {
		$nc(Bundles::bundleAccess)->setParent(bundle, parent);
	}
	$nc(Bundles::bundleAccess)->setLocale(bundle, targetLocale);
	$nc(Bundles::bundleAccess)->setName(bundle, baseName);
	$assign(bundle, putBundleInCache(cacheKey, bundle));
	return bundle;
}

void Bundles::cleanupCache() {
	$init(Bundles);
	$var($Object, ref, nullptr);
	while (($assign(ref, $nc(Bundles::referenceQueue)->poll())) != nullptr) {
		$nc(Bundles::cacheList)->remove($($nc(($cast($Bundles$CacheKeyReference, ref)))->getCacheKey()));
	}
}

$ResourceBundle* Bundles::loadBundleFromProviders($String* baseName, $Locale* locale, $ServiceLoader* providers, $Bundles$CacheKey* cacheKey) {
	$init(Bundles);
	$beforeCallerSensitive();
	return $cast($ResourceBundle, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Bundles$2, providers, baseName, locale, cacheKey))));
}

bool Bundles::isValidBundle($ResourceBundle* bundle) {
	$init(Bundles);
	return bundle != nullptr && bundle != Bundles::NONEXISTENT_BUNDLE;
}

void Bundles::throwMissingResourceException($String* baseName, $Locale* locale, $Throwable* cause$renamed) {
	$init(Bundles);
	$var($Throwable, cause, cause$renamed);
	if ($instanceOf($MissingResourceException, cause)) {
		$assign(cause, nullptr);
	}
	$var($MissingResourceException, e, nullptr);
	$var($String, var$0, $str({"Can\'t find bundle for base name "_s, baseName, ", locale "_s, locale}));
	$assign(e, $new($MissingResourceException, var$0, $$str({baseName, "_"_s, locale}), ""_s));
	e->initCause(cause);
	$throw(e);
}

$ResourceBundle* Bundles::findBundleInCache($Bundles$CacheKey* cacheKey) {
	$init(Bundles);
	$var($Bundles$BundleReference, bundleRef, $cast($Bundles$BundleReference, $nc(Bundles::cacheList)->get(cacheKey)));
	if (bundleRef == nullptr) {
		return nullptr;
	}
	return $cast($ResourceBundle, $nc(bundleRef)->get());
}

$ResourceBundle* Bundles::putBundleInCache($Bundles$CacheKey* cacheKey, $ResourceBundle* bundle$renamed) {
	$init(Bundles);
	$var($ResourceBundle, bundle, bundle$renamed);
	$var($Bundles$CacheKey, key, $cast($Bundles$CacheKey, $nc(cacheKey)->clone()));
	$var($Bundles$BundleReference, bundleRef, $new($Bundles$BundleReference, bundle, Bundles::referenceQueue, key));
	$var($Bundles$BundleReference, result, $cast($Bundles$BundleReference, $nc(Bundles::cacheList)->putIfAbsent(key, bundleRef)));
	if (result != nullptr) {
		$var($ResourceBundle, rb, $cast($ResourceBundle, result->get()));
		if (rb != nullptr) {
			$assign(bundle, rb);
			bundleRef->clear();
		} else {
			$nc(Bundles::cacheList)->put(key, bundleRef);
		}
	}
	return bundle;
}

$String* Bundles::toOtherBundleName($String* baseName, $String* bundleName, $Locale* locale) {
	$init(Bundles);
	$var($String, simpleName, $nc(baseName)->substring(baseName->lastIndexOf((int32_t)u'.') + 1));
	int32_t var$0 = bundleName->lastIndexOf(simpleName);
	$var($String, suffix, $nc(bundleName)->substring(var$0 + simpleName->length()));
	$var($String, s15580$, $nc(locale)->getLanguage());
	int32_t tmp15580$ = -1;
	switch ($nc(s15580$)->hashCode()) {
	case 3325:
		{
			if (s15580$->equals("he"_s)) {
				tmp15580$ = 0;
			}
			break;
		}
	case 3355:
		{
			if (s15580$->equals("id"_s)) {
				tmp15580$ = 1;
			}
			break;
		}
	case 3856:
		{
			if (s15580$->equals("yi"_s)) {
				tmp15580$ = 2;
			}
			break;
		}
	case 3374:
		{
			if (s15580$->equals("iw"_s)) {
				tmp15580$ = 3;
			}
			break;
		}
	case 3365:
		{
			if (s15580$->equals("in"_s)) {
				tmp15580$ = 4;
			}
			break;
		}
	case 3391:
		{
			if (s15580$->equals("ji"_s)) {
				tmp15580$ = 5;
			}
			break;
		}
	}

	$var($String, var$1, nullptr)
	switch (tmp15580$) {
	case 0:
		{
			$assign(var$1, suffix->replaceFirst("^_he(_.*)?$"_s, "_iw$1"_s));
			break;
		}
	case 1:
		{
			$assign(var$1, suffix->replaceFirst("^_id(_.*)?$"_s, "_in$1"_s));
			break;
		}
	case 2:
		{
			$assign(var$1, suffix->replaceFirst("^_yi(_.*)?$"_s, "_ji$1"_s));
			break;
		}
	case 3:
		{
			$assign(var$1, suffix->replaceFirst("^_iw(_.*)?$"_s, "_he$1"_s));
			break;
		}
	case 4:
		{
			$assign(var$1, suffix->replaceFirst("^_in(_.*)?$"_s, "_id$1"_s));
			break;
		}
	case 5:
		{
			$assign(var$1, suffix->replaceFirst("^_ji(_.*)?$"_s, "_yi$1"_s));
			break;
		}
	default:
		{
			$assign(var$1, suffix);
			break;
		}
	}
	$var($String, otherSuffix, var$1);
	if (suffix->equals(otherSuffix)) {
		return bundleName;
	} else {
		return $str({$(bundleName->substring(0, bundleName->lastIndexOf(suffix))), otherSuffix});
	}
}

void clinit$Bundles($Class* class$) {
	$assignStatic(Bundles::NONEXISTENT_BUNDLE, $new($Bundles$1));
	$assignStatic(Bundles::bundleAccess, $SharedSecrets::getJavaUtilResourceBundleAccess());
	$assignStatic(Bundles::cacheList, $new($ConcurrentHashMap, Bundles::INITIAL_CACHE_SIZE));
	$assignStatic(Bundles::referenceQueue, $new($ReferenceQueue));
}

Bundles::Bundles() {
}

$Class* Bundles::load$($String* name, bool initialize) {
	$loadClass(Bundles, name, initialize, &_Bundles_ClassInfo_, clinit$Bundles, allocate$Bundles);
	return class$;
}

$Class* Bundles::class$ = nullptr;

		} // resources
	} // util
} // sun