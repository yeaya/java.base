#ifndef _java_util_ResourceBundle_h_
#define _java_util_ResourceBundle_h_
//$ class java.util.ResourceBundle
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_CACHE_SIZE")
#undef INITIAL_CACHE_SIZE
#pragma push_macro("NONEXISTENT_BUNDLE")
#undef NONEXISTENT_BUNDLE
#pragma push_macro("TRACE_ON")
#undef TRACE_ON
#pragma push_macro("UNKNOWN_FORMAT")
#undef UNKNOWN_FORMAT

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
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
		class Enumeration;
		class List;
		class Locale;
		class ResourceBundle$CacheKey;
		class ResourceBundle$Control;
		class ServiceLoader;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace util {

class $import ResourceBundle : public ::java::lang::Object {
	$class(ResourceBundle, 0, ::java::lang::Object)
public:
	ResourceBundle();
	void init$();
	static bool checkList(::java::util::List* a);
	static void checkNamedModule($Class* caller);
	static void clearCache();
	static void clearCache(::java::lang::ClassLoader* loader);
	virtual bool containsKey($String* key);
	static ::java::util::ResourceBundle* findBundle(::java::lang::Module* callerModule, ::java::lang::Module* module, ::java::util::ResourceBundle$CacheKey* cacheKey, ::java::util::List* candidateLocales, ::java::util::List* formats, int32_t index, ::java::util::ResourceBundle$Control* control, ::java::util::ResourceBundle* baseBundle);
	static ::java::util::ResourceBundle* findBundleInCache(::java::util::ResourceBundle$CacheKey* cacheKey, ::java::util::ResourceBundle$Control* control);
	virtual $String* getBaseBundleName();
	static ::java::util::ResourceBundle* getBundle($String* baseName);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::ResourceBundle$Control* control);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::lang::Module* module);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* targetLocale, ::java::lang::Module* module);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* targetLocale, ::java::util::ResourceBundle$Control* control);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale, ::java::lang::ClassLoader* loader);
	static ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* targetLocale, ::java::lang::ClassLoader* loader, ::java::util::ResourceBundle$Control* control);
	static ::java::util::ResourceBundle* getBundleFromModule($Class* caller, ::java::lang::Module* module, $String* baseName, ::java::util::Locale* locale, ::java::util::ResourceBundle$Control* control);
	static ::java::util::ResourceBundle* getBundleImpl($String* baseName, ::java::util::Locale* locale, $Class* caller, ::java::util::ResourceBundle$Control* control);
	static ::java::util::ResourceBundle* getBundleImpl($String* baseName, ::java::util::Locale* locale, $Class* caller, ::java::lang::ClassLoader* loader, ::java::util::ResourceBundle$Control* control);
	static ::java::util::ResourceBundle* getBundleImpl(::java::lang::Module* callerModule, ::java::lang::Module* module, $String* baseName, ::java::util::Locale* locale, ::java::util::ResourceBundle$Control* control);
	static ::java::util::ResourceBundle$Control* getDefaultControl($Class* caller, $String* baseName);
	static ::java::util::ResourceBundle$Control* getDefaultControl(::java::lang::Module* targetModule, $String* baseName);
	virtual ::java::util::Enumeration* getKeys() {return nullptr;}
	static ::java::lang::ClassLoader* getLoader(::java::lang::Module* module);
	static ::java::lang::ClassLoader* getLoaderForControl(::java::lang::Module* module);
	virtual ::java::util::Locale* getLocale();
	$Object* getObject($String* key);
	static $Class* getResourceBundleProviderType($String* baseName, ::java::lang::ClassLoader* loader);
	static ::java::util::ServiceLoader* getServiceLoader(::java::lang::Module* module, $String* baseName);
	$String* getString($String* key);
	$StringArray* getStringArray($String* key);
	virtual $Object* handleGetObject($String* key) {return nullptr;}
	virtual ::java::util::Set* handleKeySet();
	static bool hasValidParentChain(::java::util::ResourceBundle* bundle);
	static bool isValidBundle(::java::util::ResourceBundle* bundle);
	virtual ::java::util::Set* keySet();
	static bool lambda$clearCache$0($Class* caller, ::java::util::ResourceBundle$CacheKey* key);
	static bool lambda$clearCache$1(::java::lang::ClassLoader* loader, ::java::util::ResourceBundle$CacheKey* key);
	static ::java::util::ResourceBundle* loadBundle(::java::util::ResourceBundle$CacheKey* cacheKey, ::java::util::List* formats, ::java::util::ResourceBundle$Control* control, ::java::lang::Module* module, ::java::lang::Module* callerModule);
	static ::java::util::ResourceBundle* loadBundle(::java::util::ResourceBundle$CacheKey* cacheKey, ::java::util::List* formats, ::java::util::ResourceBundle$Control* control, bool reload);
	static ::java::util::ResourceBundle* loadBundleFromProviders($String* baseName, ::java::util::Locale* locale, ::java::util::ServiceLoader* providers, ::java::util::ResourceBundle$CacheKey* cacheKey);
	static ::java::util::ResourceBundle* putBundleInCache(::java::util::ResourceBundle$CacheKey* cacheKey, ::java::util::ResourceBundle* bundle, ::java::util::ResourceBundle$Control* control);
	static void setExpirationTime(::java::util::ResourceBundle$CacheKey* cacheKey, ::java::util::ResourceBundle$Control* control);
	virtual void setParent(::java::util::ResourceBundle* parent);
	static void throwMissingResourceException($String* baseName, ::java::util::Locale* locale, $Throwable* cause);
	static void trace($String* format, $ObjectArray* params);
	static void uncheckedThrow($Throwable* t);
	static bool $assertionsDisabled;
	static const int32_t INITIAL_CACHE_SIZE = 32;
	static ::java::util::ResourceBundle* NONEXISTENT_BUNDLE;
	static ::java::util::concurrent::ConcurrentMap* cacheList;
	static ::java::lang::ref::ReferenceQueue* referenceQueue;
	::java::util::ResourceBundle* parent = nullptr;
	::java::util::Locale* locale = nullptr;
	$String* name = nullptr;
	$volatile(bool) expired = false;
	$volatile(::java::util::ResourceBundle$CacheKey*) cacheKey = nullptr;
	$volatile(::java::util::Set*) keySet$ = nullptr;
	static $String* UNKNOWN_FORMAT;
	static bool TRACE_ON;
};

	} // util
} // java

#pragma pop_macro("INITIAL_CACHE_SIZE")
#pragma pop_macro("NONEXISTENT_BUNDLE")
#pragma pop_macro("TRACE_ON")
#pragma pop_macro("UNKNOWN_FORMAT")

#endif // _java_util_ResourceBundle_h_