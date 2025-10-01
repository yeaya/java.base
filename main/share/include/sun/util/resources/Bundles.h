#ifndef _sun_util_resources_Bundles_h_
#define _sun_util_resources_Bundles_h_
//$ class sun.util.resources.Bundles
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INITIAL_CACHE_SIZE")
#undef INITIAL_CACHE_SIZE
#pragma push_macro("NONEXISTENT_BUNDLE")
#undef NONEXISTENT_BUNDLE

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
		class ResourceBundle;
		class ServiceLoader;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaUtilResourceBundleAccess;
		}
	}
}
namespace sun {
	namespace util {
		namespace resources {
			class Bundles$CacheKey;
			class Bundles$Strategy;
		}
	}
}

namespace sun {
	namespace util {
		namespace resources {

class $import Bundles : public ::java::lang::Object {
	$class(Bundles, 0, ::java::lang::Object)
public:
	Bundles();
	void init$();
	static void cleanupCache();
	static ::java::util::ResourceBundle* findBundleInCache(::sun::util::resources::Bundles$CacheKey* cacheKey);
	static ::java::util::ResourceBundle* findBundleOf(::sun::util::resources::Bundles$CacheKey* cacheKey, ::sun::util::resources::Bundles$Strategy* strategy, $String* baseName, ::java::util::List* candidateLocales, int32_t index);
	static bool isValidBundle(::java::util::ResourceBundle* bundle);
	static ::java::util::ResourceBundle* loadBundleFromProviders($String* baseName, ::java::util::Locale* locale, ::java::util::ServiceLoader* providers, ::sun::util::resources::Bundles$CacheKey* cacheKey);
	static ::java::util::ResourceBundle* loadBundleOf($String* baseName, ::java::util::Locale* targetLocale, ::sun::util::resources::Bundles$Strategy* strategy);
	static ::java::util::ResourceBundle* of($String* baseName, ::java::util::Locale* locale, ::sun::util::resources::Bundles$Strategy* strategy);
	static ::java::util::ResourceBundle* putBundleInCache(::sun::util::resources::Bundles$CacheKey* cacheKey, ::java::util::ResourceBundle* bundle);
	static void throwMissingResourceException($String* baseName, ::java::util::Locale* locale, $Throwable* cause);
	static $String* toOtherBundleName($String* baseName, $String* bundleName, ::java::util::Locale* locale);
	static const int32_t INITIAL_CACHE_SIZE = 32;
	static ::java::util::ResourceBundle* NONEXISTENT_BUNDLE;
	static ::jdk::internal::access::JavaUtilResourceBundleAccess* bundleAccess;
	static ::java::util::concurrent::ConcurrentMap* cacheList;
	static ::java::lang::ref::ReferenceQueue* referenceQueue;
};

		} // resources
	} // util
} // sun

#pragma pop_macro("INITIAL_CACHE_SIZE")
#pragma pop_macro("NONEXISTENT_BUNDLE")

#endif // _sun_util_resources_Bundles_h_