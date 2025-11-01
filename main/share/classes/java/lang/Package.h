#ifndef _java_lang_Package_h_
#define _java_lang_Package_h_
//$ class java.lang.Package
//$ extends java.lang.NamedPackage
//$ implements java.lang.reflect.AnnotatedElement

#include <java/lang/Array.h>
#include <java/lang/NamedPackage.h>
#include <java/lang/reflect/AnnotatedElement.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
		class Package$VersionInfo;
	}
}
namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace java {
	namespace lang {

class $export Package : public ::java::lang::NamedPackage, public ::java::lang::reflect::AnnotatedElement {
	$class(Package, $NO_CLASS_INIT, ::java::lang::NamedPackage, ::java::lang::reflect::AnnotatedElement)
public:
	Package();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	void init$($String* name, $String* spectitle, $String* specversion, $String* specvendor, $String* impltitle, $String* implversion, $String* implvendor, ::java::net::URL* sealbase, ::java::lang::ClassLoader* loader);
	void init$($String* name, ::java::lang::Module* module);
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationClass) override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotationClass) override;
	virtual $String* getImplementationTitle();
	virtual $String* getImplementationVendor();
	virtual $String* getImplementationVersion();
	virtual $String* getName();
	static ::java::lang::Package* getPackage($String* name);
	$Class* getPackageInfo();
	static $Array<::java::lang::Package>* getPackages();
	virtual $String* getSpecificationTitle();
	virtual $String* getSpecificationVendor();
	virtual $String* getSpecificationVersion();
	virtual int32_t hashCode() override;
	virtual bool isAnnotationPresent($Class* annotationClass) override;
	virtual bool isCompatibleWith($String* desired);
	virtual bool isSealed();
	virtual bool isSealed(::java::net::URL* url);
	static $Array<::java::lang::Package>* lambda$getPackages$0(int32_t x$0);
	virtual $String* toString() override;
	::java::lang::Package$VersionInfo* versionInfo = nullptr;
	$Class* packageInfo = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Package_h_