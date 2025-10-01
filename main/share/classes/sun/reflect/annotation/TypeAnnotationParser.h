#ifndef _sun_reflect_annotation_TypeAnnotationParser_h_
#define _sun_reflect_annotation_TypeAnnotationParser_h_
//$ class sun.reflect.annotation.TypeAnnotationParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CAST")
#undef CAST
#pragma push_macro("RESOURCE_VARIABLE")
#undef RESOURCE_VARIABLE
#pragma push_macro("INSTANCEOF")
#undef INSTANCEOF
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("LOCAL_VARIABLE")
#undef LOCAL_VARIABLE
#pragma push_macro("METHOD_REFERENCE")
#undef METHOD_REFERENCE
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("METHOD_RECEIVER")
#undef METHOD_RECEIVER
#pragma push_macro("EMPTY_TYPE_ANNOTATION_ARRAY")
#undef EMPTY_TYPE_ANNOTATION_ARRAY
#pragma push_macro("METHOD_RETURN")
#undef METHOD_RETURN
#pragma push_macro("CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT")
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#pragma push_macro("CLASS_EXTENDS")
#undef CLASS_EXTENDS
#pragma push_macro("CLASS_TYPE_PARAMETER_BOUND")
#undef CLASS_TYPE_PARAMETER_BOUND
#pragma push_macro("CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT")
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#pragma push_macro("CONSTRUCTOR_REFERENCE")
#undef CONSTRUCTOR_REFERENCE
#pragma push_macro("METHOD_TYPE_PARAMETER")
#undef METHOD_TYPE_PARAMETER
#pragma push_macro("METHOD_REFERENCE_TYPE_ARGUMENT")
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("METHOD_FORMAL_PARAMETER")
#undef METHOD_FORMAL_PARAMETER
#pragma push_macro("CLASS_TYPE_PARAMETER")
#undef CLASS_TYPE_PARAMETER
#pragma push_macro("EXCEPTION_PARAMETER")
#undef EXCEPTION_PARAMETER
#pragma push_macro("METHOD_INVOCATION_TYPE_ARGUMENT")
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#pragma push_macro("METHOD_TYPE_PARAMETER_BOUND")
#undef METHOD_TYPE_PARAMETER_BOUND

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
			class AnnotatedElement;
			class AnnotatedType;
			class GenericDeclaration;
			class Type;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstantPool;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace annotation {
			class TypeAnnotation;
			class TypeAnnotation$LocationInfo;
			class TypeAnnotation$TypeAnnotationTarget;
			class TypeAnnotation$TypeAnnotationTargetInfo;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $export TypeAnnotationParser : public ::java::lang::Object {
	$class(TypeAnnotationParser, 0, ::java::lang::Object)
public:
	TypeAnnotationParser();
	void init$();
	static $Array<::java::lang::reflect::AnnotatedType>* buildAnnotatedInterfaces($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* cp, $Class* decl);
	static ::java::lang::reflect::AnnotatedType* buildAnnotatedSuperclass($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* cp, $Class* decl);
	static ::java::lang::reflect::AnnotatedType* buildAnnotatedType($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* cp, ::java::lang::reflect::AnnotatedElement* decl, $Class* container, ::java::lang::reflect::Type* type, ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* filter);
	static $Array<::java::lang::reflect::AnnotatedType>* buildAnnotatedTypes($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* cp, ::java::lang::reflect::AnnotatedElement* decl, $Class* container, $Array<::java::lang::reflect::Type>* types, ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* filter);
	static ::java::util::List* fetchBounds(::java::lang::reflect::GenericDeclaration* decl);
	static ::java::util::Map* mapTypeAnnotations($Array<::sun::reflect::annotation::TypeAnnotation>* typeAnnos);
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTargetInfo* parse2ByteTarget(::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* target, ::java::nio::ByteBuffer* buf);
	static $Array<::sun::reflect::annotation::TypeAnnotation>* parseAllTypeAnnotations(::java::lang::reflect::AnnotatedElement* decl);
	static $Array<::java::lang::reflect::AnnotatedType>* parseAnnotatedBounds($Array<::java::lang::reflect::Type>* bounds, ::java::lang::reflect::GenericDeclaration* decl, int32_t typeVarIndex);
	static $Array<::java::lang::reflect::AnnotatedType>* parseAnnotatedBounds($Array<::java::lang::reflect::Type>* bounds, ::java::lang::reflect::GenericDeclaration* decl, int32_t typeVarIndex, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* loc);
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTargetInfo* parseShortTarget(::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* target, ::java::nio::ByteBuffer* buf);
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTargetInfo* parseTargetInfo(::java::nio::ByteBuffer* buf);
	static ::sun::reflect::annotation::TypeAnnotation* parseTypeAnnotation(::java::nio::ByteBuffer* buf, ::jdk::internal::reflect::ConstantPool* cp, ::java::lang::reflect::AnnotatedElement* baseDecl, $Class* container);
	static $Array<::sun::reflect::annotation::TypeAnnotation>* parseTypeAnnotations($bytes* rawAnnotations, ::jdk::internal::reflect::ConstantPool* cp, ::java::lang::reflect::AnnotatedElement* baseDecl, $Class* container);
	static $Array<::java::lang::annotation::Annotation>* parseTypeVariableAnnotations(::java::lang::reflect::GenericDeclaration* genericDecl, int32_t typeVarIndex);
	static $Array<::sun::reflect::annotation::TypeAnnotation>* EMPTY_TYPE_ANNOTATION_ARRAY;
	static const int8_t CLASS_TYPE_PARAMETER = 0;
	static const int8_t METHOD_TYPE_PARAMETER = 1;
	static const int8_t CLASS_EXTENDS = 16;
	static const int8_t CLASS_TYPE_PARAMETER_BOUND = 17;
	static const int8_t METHOD_TYPE_PARAMETER_BOUND = 18;
	static const int8_t FIELD = 19;
	static const int8_t METHOD_RETURN = 20;
	static const int8_t METHOD_RECEIVER = 21;
	static const int8_t METHOD_FORMAL_PARAMETER = 22;
	static const int8_t THROWS = 23;
	static const int8_t LOCAL_VARIABLE = (int8_t)64;
	static const int8_t RESOURCE_VARIABLE = (int8_t)65;
	static const int8_t EXCEPTION_PARAMETER = (int8_t)66;
	static const int8_t INSTANCEOF = (int8_t)67;
	static const int8_t NEW = (int8_t)68;
	static const int8_t CONSTRUCTOR_REFERENCE = (int8_t)69;
	static const int8_t METHOD_REFERENCE = (int8_t)70;
	static const int8_t CAST = (int8_t)71;
	static const int8_t CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT = (int8_t)72;
	static const int8_t METHOD_INVOCATION_TYPE_ARGUMENT = (int8_t)73;
	static const int8_t CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT = (int8_t)74;
	static const int8_t METHOD_REFERENCE_TYPE_ARGUMENT = (int8_t)75;
};

		} // annotation
	} // reflect
} // sun

#pragma pop_macro("CAST")
#pragma pop_macro("RESOURCE_VARIABLE")
#pragma pop_macro("INSTANCEOF")
#pragma pop_macro("NEW")
#pragma pop_macro("LOCAL_VARIABLE")
#pragma pop_macro("METHOD_REFERENCE")
#pragma pop_macro("FIELD")
#pragma pop_macro("METHOD_RECEIVER")
#pragma pop_macro("EMPTY_TYPE_ANNOTATION_ARRAY")
#pragma pop_macro("METHOD_RETURN")
#pragma pop_macro("CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT")
#pragma pop_macro("CLASS_EXTENDS")
#pragma pop_macro("CLASS_TYPE_PARAMETER_BOUND")
#pragma pop_macro("CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT")
#pragma pop_macro("CONSTRUCTOR_REFERENCE")
#pragma pop_macro("METHOD_TYPE_PARAMETER")
#pragma pop_macro("METHOD_REFERENCE_TYPE_ARGUMENT")
#pragma pop_macro("THROWS")
#pragma pop_macro("METHOD_FORMAL_PARAMETER")
#pragma pop_macro("CLASS_TYPE_PARAMETER")
#pragma pop_macro("EXCEPTION_PARAMETER")
#pragma pop_macro("METHOD_INVOCATION_TYPE_ARGUMENT")
#pragma pop_macro("METHOD_TYPE_PARAMETER_BOUND")

#endif // _sun_reflect_annotation_TypeAnnotationParser_h_