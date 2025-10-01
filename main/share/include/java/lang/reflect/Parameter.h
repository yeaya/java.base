#ifndef _java_lang_reflect_Parameter_h_
#define _java_lang_reflect_Parameter_h_
//$ class java.lang.reflect.Parameter
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
namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedType;
			class Executable;
			class Type;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $import Parameter : public ::java::lang::reflect::AnnotatedElement {
	$class(Parameter, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedElement)
public:
	Parameter();
	void init$($String* name, int32_t modifiers, ::java::lang::reflect::Executable* executable, int32_t index);
	::java::util::Map* declaredAnnotations();
	virtual bool equals(Object$* obj) override;
	::java::lang::reflect::AnnotatedType* getAnnotatedType();
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationClass) override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotationClass) override;
	::java::lang::reflect::Executable* getDeclaringExecutable();
	int32_t getModifiers();
	$String* getName();
	::java::lang::reflect::Type* getParameterizedType();
	$String* getRealName();
	$Class* getType();
	virtual int32_t hashCode() override;
	bool isImplicit();
	bool isNamePresent();
	bool isSynthetic();
	bool isVarArgs();
	virtual $String* toString() override;
	$String* name = nullptr;
	int32_t modifiers = 0;
	::java::lang::reflect::Executable* executable = nullptr;
	int32_t index = 0;
	$volatile(::java::lang::reflect::Type*) parameterTypeCache = nullptr;
	$volatile($Class*) parameterClassCache = nullptr;
	::java::util::Map* declaredAnnotations$ = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Parameter_h_