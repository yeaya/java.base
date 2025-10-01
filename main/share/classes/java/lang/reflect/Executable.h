#ifndef _java_lang_reflect_Executable_h_
#define _java_lang_reflect_Executable_h_
//$ class java.lang.reflect.Executable
//$ extends java.lang.reflect.AccessibleObject
//$ implements java.lang.reflect.Member,java.lang.reflect.GenericDeclaration

#include <java/lang/Array.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Member.h>

namespace java {
	namespace lang {
		class StringBuilder;
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
	namespace lang {
		namespace reflect {
			class AnnotatedType;
			class Parameter;
			class Type;
			class TypeVariable;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {
				class ConstructorRepository;
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $export Executable : public ::java::lang::reflect::AccessibleObject, public ::java::lang::reflect::Member, public ::java::lang::reflect::GenericDeclaration {
	$class(Executable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::reflect::AccessibleObject, ::java::lang::reflect::Member, ::java::lang::reflect::GenericDeclaration)
public:
	Executable();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotationClass) override;
	virtual $Class* getDeclaringClass() override {return nullptr;}
	virtual int32_t getModifiers() override {return 0;}
	virtual $String* getName() override {return nullptr;}
	virtual $Array<::java::lang::reflect::TypeVariable>* getTypeParameters() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$();
	::java::util::Map* declaredAnnotations();
	virtual bool equalParamTypes($ClassArray* params1, $ClassArray* params2);
	virtual $Array<::java::lang::reflect::Type>* getAllGenericParameterTypes();
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedExceptionTypes();
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedParameterTypes();
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedReceiverType();
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedReturnType() {return nullptr;}
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedReturnType0(::java::lang::reflect::Type* returnType);
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $bytes* getAnnotationBytes() {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $ClassArray* getExceptionTypes() {return nullptr;}
	virtual $Array<::java::lang::reflect::Type>* getGenericExceptionTypes();
	virtual ::sun::reflect::generics::repository::ConstructorRepository* getGenericInfo() {return nullptr;}
	virtual $Array<::java::lang::reflect::Type>* getGenericParameterTypes();
	virtual $Array<::java::lang::annotation::Annotation, 2>* getParameterAnnotations() {return nullptr;}
	virtual int32_t getParameterCount();
	virtual $ClassArray* getParameterTypes() {return nullptr;}
	virtual $Array<::java::lang::reflect::Parameter>* getParameters();
	$Array<::java::lang::reflect::Parameter>* getParameters0();
	virtual $ClassArray* getSharedExceptionTypes() {return nullptr;}
	virtual $ClassArray* getSharedParameterTypes() {return nullptr;}
	virtual $bytes* getTypeAnnotationBytes();
	virtual $bytes* getTypeAnnotationBytes0();
	virtual bool handleParameterNumberMismatch(int32_t resultLength, $ClassArray* parameterTypes) {return false;}
	virtual bool hasGenericInformation() {return false;}
	virtual bool hasRealParameterData();
	virtual bool isAnnotationPresent($Class* annotationClass) override;
	virtual bool isSynthetic() override;
	virtual bool isVarArgs();
	virtual ::java::lang::reflect::Type* parameterize($Class* c);
	virtual $Array<::java::lang::annotation::Annotation, 2>* parseParameterAnnotations($bytes* parameterAnnotations);
	virtual void printModifiersIfNonzero(::java::lang::StringBuilder* sb, int32_t mask, bool isDefault);
	$Array<::java::lang::reflect::Parameter>* privateGetParameters();
	virtual $Array<::java::lang::annotation::Annotation, 2>* sharedGetParameterAnnotations($ClassArray* parameterTypes, $bytes* parameterAnnotations);
	virtual $String* sharedToGenericString(int32_t modifierMask, bool isDefault);
	virtual $String* sharedToString(int32_t modifierMask, bool isDefault, $ClassArray* parameterTypes, $ClassArray* exceptionTypes);
	virtual void specificToGenericStringHeader(::java::lang::StringBuilder* sb) {}
	virtual void specificToStringHeader(::java::lang::StringBuilder* sb) {}
	$Array<::java::lang::reflect::Parameter>* synthesizeAllParams();
	virtual $String* toGenericString() {return nullptr;}
	virtual $String* toString() override;
	static $String* typeVarBounds(::java::lang::reflect::TypeVariable* typeVar);
	void verifyParameters($Array<::java::lang::reflect::Parameter>* parameters);
	$volatile(bool) hasRealParameterData$ = false;
	$volatile($Array<::java::lang::reflect::Parameter>*) parameters = nullptr;
	$volatile(::java::util::Map*) declaredAnnotations$ = nullptr;
	$bytes* typeAnnotation = nullptr;
	void* invokeAddress = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Executable_h_