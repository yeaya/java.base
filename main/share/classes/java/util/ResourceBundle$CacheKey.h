#ifndef _java_util_ResourceBundle$CacheKey_h_
#define _java_util_ResourceBundle$CacheKey_h_
//$ class java.util.ResourceBundle$CacheKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Boolean;
		class Module;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Locale;
		class ResourceBundle$KeyElementReference;
		class ServiceLoader;
	}
}

namespace java {
	namespace util {

class ResourceBundle$CacheKey : public ::java::lang::Object {
	$class(ResourceBundle$CacheKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResourceBundle$CacheKey();
	void init$($String* baseName, ::java::util::Locale* locale, ::java::lang::Module* module, ::java::lang::Module* caller);
	void init$(::java::util::ResourceBundle$CacheKey* src);
	bool callerHasProvider();
	virtual bool equals(Object$* other) override;
	::java::lang::Module* getCallerModule();
	$Throwable* getCause();
	$String* getFormat();
	::java::util::Locale* getLocale();
	::java::lang::Module* getModule();
	$String* getName();
	::java::util::ServiceLoader* getProviders();
	bool hasProviders();
	virtual int32_t hashCode() override;
	void setCause($Throwable* cause);
	void setFormat($String* format);
	::java::util::ResourceBundle$CacheKey* setLocale(::java::util::Locale* locale);
	virtual $String* toString() override;
	$String* name = nullptr;
	$volatile(::java::util::Locale*) locale = nullptr;
	::java::util::ResourceBundle$KeyElementReference* moduleRef = nullptr;
	::java::util::ResourceBundle$KeyElementReference* callerRef = nullptr;
	int32_t modulesHash = 0;
	$volatile($String*) format = nullptr;
	$volatile(int64_t) loadTime = 0;
	$volatile(int64_t) expirationTime = 0;
	$volatile($Throwable*) cause = nullptr;
	$volatile(::java::util::ServiceLoader*) providers = nullptr;
	$volatile(bool) providersChecked = false;
	$volatile(::java::lang::Boolean*) callerHasProvider$ = nullptr;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$CacheKey_h_