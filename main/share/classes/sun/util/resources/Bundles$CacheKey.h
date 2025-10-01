#ifndef _sun_util_resources_Bundles$CacheKey_h_
#define _sun_util_resources_Bundles$CacheKey_h_
//$ class sun.util.resources.Bundles$CacheKey
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Locale;
		class ServiceLoader;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class Bundles$CacheKey : public ::java::lang::Cloneable {
	$class(Bundles$CacheKey, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	Bundles$CacheKey();
	void init$($String* baseName, ::java::util::Locale* locale);
	void calculateHashCode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	$Throwable* getCause();
	virtual ::java::util::Locale* getLocale();
	virtual $String* getName();
	virtual ::java::util::ServiceLoader* getProviders();
	virtual int32_t hashCode() override;
	void setCause($Throwable* cause);
	virtual ::sun::util::resources::Bundles$CacheKey* setLocale(::java::util::Locale* locale);
	virtual ::sun::util::resources::Bundles$CacheKey* setName($String* baseName);
	virtual void setProviders(::java::util::ServiceLoader* providers);
	virtual $String* toString() override;
	$String* name = nullptr;
	::java::util::Locale* locale = nullptr;
	$Throwable* cause = nullptr;
	int32_t hashCodeCache = 0;
	::java::util::ServiceLoader* providers = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_Bundles$CacheKey_h_