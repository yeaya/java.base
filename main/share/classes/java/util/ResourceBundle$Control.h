#ifndef _java_util_ResourceBundle$Control_h_
#define _java_util_ResourceBundle$Control_h_
//$ class java.util.ResourceBundle$Control
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FORMAT_PROPERTIES")
#undef FORMAT_PROPERTIES
#pragma push_macro("CANDIDATES_CACHE")
#undef CANDIDATES_CACHE
#pragma push_macro("TTL_DONT_CACHE")
#undef TTL_DONT_CACHE
#pragma push_macro("FORMAT_DEFAULT")
#undef FORMAT_DEFAULT
#pragma push_macro("TTL_NO_EXPIRATION_CONTROL")
#undef TTL_NO_EXPIRATION_CONTROL
#pragma push_macro("FORMAT_CLASS")
#undef FORMAT_CLASS
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {
		class ClassLoader;
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Locale;
		class ResourceBundle;
		class ResourceBundle$Control$CandidateListCache;
	}
}

namespace java {
	namespace util {

class $export ResourceBundle$Control : public ::java::lang::Object {
	$class(ResourceBundle$Control, 0, ::java::lang::Object)
public:
	ResourceBundle$Control();
	void init$();
	virtual ::java::util::List* getCandidateLocales($String* baseName, ::java::util::Locale* locale);
	static ::java::util::ResourceBundle$Control* getControl(::java::util::List* formats);
	virtual ::java::util::Locale* getFallbackLocale($String* baseName, ::java::util::Locale* locale);
	virtual ::java::util::List* getFormats($String* baseName);
	static ::java::util::ResourceBundle$Control* getNoFallbackControl(::java::util::List* formats);
	virtual int64_t getTimeToLive($String* baseName, ::java::util::Locale* locale);
	static ::java::lang::Void* lambda$newBundle0$0(::java::lang::reflect::Constructor* ctor);
	virtual bool needsReload($String* baseName, ::java::util::Locale* locale, $String* format, ::java::lang::ClassLoader* loader, ::java::util::ResourceBundle* bundle, int64_t loadTime);
	virtual ::java::util::ResourceBundle* newBundle($String* baseName, ::java::util::Locale* locale, $String* format, ::java::lang::ClassLoader* loader, bool reload);
	::java::util::ResourceBundle* newBundle0($String* bundleName, $String* format, ::java::lang::ClassLoader* loader, bool reload);
	virtual $String* toBundleName($String* baseName, ::java::util::Locale* locale);
	$String* toResourceName($String* bundleName, $String* suffix);
	$String* toResourceName0($String* bundleName, $String* suffix);
	static bool $assertionsDisabled;
	static ::java::util::List* FORMAT_DEFAULT;
	static ::java::util::List* FORMAT_CLASS;
	static ::java::util::List* FORMAT_PROPERTIES;
	static const int64_t TTL_DONT_CACHE = (-1);
	static const int64_t TTL_NO_EXPIRATION_CONTROL = (-2);
	static ::java::util::ResourceBundle$Control* INSTANCE;
	static ::java::util::ResourceBundle$Control$CandidateListCache* CANDIDATES_CACHE;
};

	} // util
} // java

#pragma pop_macro("FORMAT_PROPERTIES")
#pragma pop_macro("CANDIDATES_CACHE")
#pragma pop_macro("TTL_DONT_CACHE")
#pragma pop_macro("FORMAT_DEFAULT")
#pragma pop_macro("TTL_NO_EXPIRATION_CONTROL")
#pragma pop_macro("FORMAT_CLASS")
#pragma pop_macro("INSTANCE")

#endif // _java_util_ResourceBundle$Control_h_