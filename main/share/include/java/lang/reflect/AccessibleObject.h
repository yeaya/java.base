#ifndef _java_lang_reflect_AccessibleObject_h_
#define _java_lang_reflect_AccessibleObject_h_
//$ class java.lang.reflect.AccessibleObject
//$ extends java.lang.reflect.AnnotatedElement

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedElement.h>

namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ReflectionFactory;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $import AccessibleObject : public ::java::lang::reflect::AnnotatedElement {
	$class(AccessibleObject, $PRELOAD, ::java::lang::reflect::AnnotatedElement)
public:
	AccessibleObject();
	void init$();
	bool canAccess(Object$* obj);
	void checkAccess($Class* caller, $Class* memberClass, $Class* targetClass, int32_t modifiers);
	virtual void checkCanSetAccessible($Class* caller);
	void checkCanSetAccessible($Class* caller, $Class* declaringClass);
	bool checkCanSetAccessible($Class* caller, $Class* declaringClass, bool throwExceptionIfDenied);
	static void checkPermission();
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationClass) override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotationClass) override;
	virtual ::java::lang::reflect::AccessibleObject* getRoot();
	bool isAccessChecked($Class* caller, $Class* targetClass);
	bool isAccessChecked($Class* caller);
	virtual bool isAccessible();
	virtual bool isAnnotationPresent($Class* annotationClass) override;
	bool isSubclassOf($Class* queryClass, $Class* ofClass);
	static bool printStackTraceWhenAccessFails();
	static void setAccessible($Array<::java::lang::reflect::AccessibleObject>* array, bool flag);
	virtual void setAccessible(bool flag);
	virtual bool setAccessible0(bool flag);
	bool slowVerifyAccess($Class* caller, $Class* memberClass, $Class* targetClass, int32_t modifiers);
	virtual $String* toShortString();
	bool trySetAccessible();
	bool verifyAccess($Class* caller, $Class* memberClass, $Class* targetClass, int32_t modifiers);
	bool override$ = false;
	static ::jdk::internal::reflect::ReflectionFactory* reflectionFactory;
	$volatile($Object*) accessCheckCache = nullptr;
	static $volatile(bool) printStackWhenAccessFails;
	static $volatile(bool) printStackPropertiesSet;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_AccessibleObject_h_