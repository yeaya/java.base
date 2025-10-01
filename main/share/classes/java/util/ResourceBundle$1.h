#ifndef _java_util_ResourceBundle$1_h_
#define _java_util_ResourceBundle$1_h_
//$ class java.util.ResourceBundle$1
//$ extends jdk.internal.access.JavaUtilResourceBundleAccess

#include <jdk/internal/access/JavaUtilResourceBundleAccess.h>

namespace java {
	namespace lang {
		class Module;
	}
}
namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace java {
	namespace util {

class ResourceBundle$1 : public ::jdk::internal::access::JavaUtilResourceBundleAccess {
	$class(ResourceBundle$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaUtilResourceBundleAccess)
public:
	ResourceBundle$1();
	void init$();
	virtual ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale, ::java::lang::Module* module) override;
	virtual ::java::util::ResourceBundle* getParent(::java::util::ResourceBundle* bundle) override;
	virtual ::java::util::ResourceBundle* newResourceBundle($Class* bundleClass) override;
	virtual void setLocale(::java::util::ResourceBundle* bundle, ::java::util::Locale* locale) override;
	virtual void setName(::java::util::ResourceBundle* bundle, $String* name) override;
	virtual void setParent(::java::util::ResourceBundle* bundle, ::java::util::ResourceBundle* parent) override;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$1_h_