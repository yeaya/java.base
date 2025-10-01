#ifndef _java_lang_reflect_RecordComponent_h_
#define _java_lang_reflect_RecordComponent_h_
//$ class java.lang.reflect.RecordComponent
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
			class Method;
			class Type;
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
				class FieldRepository;
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $import RecordComponent : public ::java::lang::reflect::AnnotatedElement {
	$class(RecordComponent, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedElement)
public:
	RecordComponent();
	void init$();
	::java::util::Map* declaredAnnotations();
	::java::lang::reflect::Method* getAccessor();
	::java::lang::reflect::AnnotatedType* getAnnotatedType();
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	$Class* getDeclaringRecord();
	::sun::reflect::generics::factory::GenericsFactory* getFactory();
	::sun::reflect::generics::repository::FieldRepository* getGenericInfo();
	$String* getGenericSignature();
	::java::lang::reflect::Type* getGenericType();
	$String* getName();
	$Class* getType();
	virtual $String* toString() override;
	$Class* clazz = nullptr;
	$String* name = nullptr;
	$Class* type = nullptr;
	::java::lang::reflect::Method* accessor = nullptr;
	$String* signature = nullptr;
	::sun::reflect::generics::repository::FieldRepository* genericInfo = nullptr;
	$bytes* annotations = nullptr;
	$bytes* typeAnnotations = nullptr;
	::java::lang::reflect::RecordComponent* root = nullptr;
	$volatile(::java::util::Map*) declaredAnnotations$ = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_RecordComponent_h_