#ifndef _jdk_internal_access_JavaUtilResourceBundleAccess_h_
#define _jdk_internal_access_JavaUtilResourceBundleAccess_h_
//$ interface jdk.internal.access.JavaUtilResourceBundleAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaUtilResourceBundleAccess : public ::java::lang::Object {
	$interface(JavaUtilResourceBundleAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::ResourceBundle* getBundle($String* baseName, ::java::util::Locale* locale, ::java::lang::Module* module) {return nullptr;}
	virtual ::java::util::ResourceBundle* getParent(::java::util::ResourceBundle* bundle) {return nullptr;}
	virtual ::java::util::ResourceBundle* newResourceBundle($Class* bundleClass) {return nullptr;}
	virtual void setLocale(::java::util::ResourceBundle* bundle, ::java::util::Locale* locale) {}
	virtual void setName(::java::util::ResourceBundle* bundle, $String* name) {}
	virtual void setParent(::java::util::ResourceBundle* bundle, ::java::util::ResourceBundle* parent) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaUtilResourceBundleAccess_h_