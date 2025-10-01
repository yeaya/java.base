#ifndef _sun_reflect_annotation_AnnotatedTypeFactory_h_
#define _sun_reflect_annotation_AnnotatedTypeFactory_h_
//$ class sun.reflect.annotation.AnnotatedTypeFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_ANNOTATED_TYPE_ARRAY")
#undef EMPTY_ANNOTATED_TYPE_ARRAY
#pragma push_macro("EMPTY_ANNOTATED_TYPE")
#undef EMPTY_ANNOTATED_TYPE
#pragma push_macro("EMPTY_TYPE_ANNOTATION_ARRAY")
#undef EMPTY_TYPE_ANNOTATION_ARRAY

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
			class AnnotatedType;
			class Type;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace annotation {
			class TypeAnnotation;
			class TypeAnnotation$LocationInfo;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $export AnnotatedTypeFactory : public ::java::lang::Object {
	$class(AnnotatedTypeFactory, 0, ::java::lang::Object)
public:
	AnnotatedTypeFactory();
	void init$();
	static ::java::lang::reflect::AnnotatedType* buildAnnotatedType(::java::lang::reflect::Type* type, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* currentLoc, $Array<::sun::reflect::annotation::TypeAnnotation>* actualTypeAnnos, $Array<::sun::reflect::annotation::TypeAnnotation>* allOnSameTarget, ::java::lang::reflect::AnnotatedElement* decl);
	static bool isArray(::java::lang::reflect::Type* t);
	static ::sun::reflect::annotation::TypeAnnotation$LocationInfo* nestingForType(::java::lang::reflect::Type* type, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* addTo);
	static $Array<::sun::reflect::annotation::TypeAnnotation>* EMPTY_TYPE_ANNOTATION_ARRAY;
	static ::java::lang::reflect::AnnotatedType* EMPTY_ANNOTATED_TYPE;
	static $Array<::java::lang::reflect::AnnotatedType>* EMPTY_ANNOTATED_TYPE_ARRAY;
};

		} // annotation
	} // reflect
} // sun

#pragma pop_macro("EMPTY_ANNOTATED_TYPE_ARRAY")
#pragma pop_macro("EMPTY_ANNOTATED_TYPE")
#pragma pop_macro("EMPTY_TYPE_ANNOTATION_ARRAY")

#endif // _sun_reflect_annotation_AnnotatedTypeFactory_h_