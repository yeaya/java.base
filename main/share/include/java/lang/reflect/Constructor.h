#ifndef _java_lang_reflect_Constructor_h_
#define _java_lang_reflect_Constructor_h_
//$ class java.lang.reflect.Constructor
//$ extends java.lang.reflect.Executable

#include <java/lang/Array.h>
#include <java/lang/reflect/Executable.h>

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
			class Type;
			class TypeVariable;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstructorAccessor;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace factory {
				class GenericsFactory;
			}
		}
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

class $import Constructor : public ::java::lang::reflect::Executable {
	$class(Constructor, $PRELOAD | $NO_CLASS_INIT, ::java::lang::reflect::Executable)
public:
	Constructor();
	using ::java::lang::reflect::Executable::checkCanSetAccessible;
	void init$($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers, int32_t slot, $String* signature, $bytes* annotations, $bytes* parameterAnnotations);
	::jdk::internal::reflect::ConstructorAccessor* acquireConstructorAccessor();
	virtual void checkCanSetAccessible($Class* caller) override;
	::java::lang::reflect::Constructor* copy();
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedReceiverType() override;
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedReturnType() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $bytes* getAnnotationBytes() override;
	::jdk::internal::reflect::ConstructorAccessor* getConstructorAccessor();
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Class* getDeclaringClass() override;
	virtual $ClassArray* getExceptionTypes() override;
	::sun::reflect::generics::factory::GenericsFactory* getFactory();
	virtual $Array<::java::lang::reflect::Type>* getGenericExceptionTypes() override;
	virtual ::sun::reflect::generics::repository::ConstructorRepository* getGenericInfo() override;
	virtual $Array<::java::lang::reflect::Type>* getGenericParameterTypes() override;
	virtual int32_t getModifiers() override;
	virtual $String* getName() override;
	virtual $Array<::java::lang::annotation::Annotation, 2>* getParameterAnnotations() override;
	virtual int32_t getParameterCount() override;
	virtual $ClassArray* getParameterTypes() override;
	$bytes* getRawAnnotations();
	$bytes* getRawParameterAnnotations();
	virtual ::java::lang::reflect::Constructor* getRoot() override;
	virtual $ClassArray* getSharedExceptionTypes() override;
	virtual $ClassArray* getSharedParameterTypes() override;
	$String* getSignature();
	int32_t getSlot();
	virtual $Array<::java::lang::reflect::TypeVariable>* getTypeParameters() override;
	virtual bool handleParameterNumberMismatch(int32_t resultLength, $ClassArray* parameterTypes) override;
	virtual bool hasGenericInformation() override;
	virtual int32_t hashCode() override;
	virtual bool isSynthetic() override;
	virtual bool isVarArgs() override;
	$Object* newInstance($ObjectArray* initargs);
	$Object* newInstanceWithCaller($ObjectArray* args, bool checkAccess, $Class* caller);
	virtual void setAccessible(bool flag) override;
	void setConstructorAccessor(::jdk::internal::reflect::ConstructorAccessor* accessor);
	virtual void specificToGenericStringHeader(::java::lang::StringBuilder* sb) override;
	virtual void specificToStringHeader(::java::lang::StringBuilder* sb) override;
	virtual $String* toGenericString() override;
	virtual $String* toShortString() override;
	virtual $String* toString() override;
	$Class* clazz = nullptr;
	int32_t slot = 0;
	$ClassArray* parameterTypes = nullptr;
	$ClassArray* exceptionTypes = nullptr;
	int32_t modifiers = 0;
	$String* signature = nullptr;
	::sun::reflect::generics::repository::ConstructorRepository* genericInfo = nullptr;
	$bytes* annotations = nullptr;
	$bytes* parameterAnnotations = nullptr;
	$volatile(::jdk::internal::reflect::ConstructorAccessor*) constructorAccessor = nullptr;
	::java::lang::reflect::Constructor* root = nullptr;
	bool isStatic();
	$String* getDescriptor();
	void initInstance(Object$* instance, $ObjectArray* initargs);
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Constructor_h_