#ifndef _sun_reflect_generics_reflectiveObjects_TypeVariableImpl_h_
#define _sun_reflect_generics_reflectiveObjects_TypeVariableImpl_h_
//$ class sun.reflect.generics.reflectiveObjects.TypeVariableImpl
//$ extends sun.reflect.generics.reflectiveObjects.LazyReflectiveObjectGenerator
//$ implements java.lang.reflect.TypeVariable

#include <java/lang/Array.h>
#include <java/lang/reflect/TypeVariable.h>
#include <sun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator.h>

#pragma push_macro("EMPTY_ANNOTATION_ARRAY")
#undef EMPTY_ANNOTATION_ARRAY

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
			class GenericDeclaration;
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
			namespace tree {
				class FieldTypeSignature;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

class $export TypeVariableImpl : public ::sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator, public ::java::lang::reflect::TypeVariable {
	$class(TypeVariableImpl, 0, ::sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator, ::java::lang::reflect::TypeVariable)
public:
	TypeVariableImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::lang::reflect::GenericDeclaration* decl, $String* n, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* bs, ::sun::reflect::generics::factory::GenericsFactory* f);
	virtual bool equals(Object$* o) override;
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedBounds() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationClass) override;
	virtual $Array<::java::lang::reflect::Type>* getBounds() override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotationClass) override;
	virtual ::java::lang::reflect::GenericDeclaration* getGenericDeclaration() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	static ::sun::reflect::generics::reflectiveObjects::TypeVariableImpl* make(::java::lang::reflect::GenericDeclaration* decl, $String* name, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* bs, ::sun::reflect::generics::factory::GenericsFactory* f);
	static ::java::util::Map* mapAnnotations($Array<::java::lang::annotation::Annotation>* annos);
	virtual $String* toString() override;
	int32_t typeVarIndex();
	::java::lang::reflect::GenericDeclaration* genericDeclaration = nullptr;
	$String* name = nullptr;
	$volatile($ObjectArray*) bounds = nullptr;
	static $Array<::java::lang::annotation::Annotation>* EMPTY_ANNOTATION_ARRAY;
};

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun

#pragma pop_macro("EMPTY_ANNOTATION_ARRAY")

#endif // _sun_reflect_generics_reflectiveObjects_TypeVariableImpl_h_