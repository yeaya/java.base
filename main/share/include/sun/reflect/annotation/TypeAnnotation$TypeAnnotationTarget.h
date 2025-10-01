#ifndef _sun_reflect_annotation_TypeAnnotation$TypeAnnotationTarget_h_
#define _sun_reflect_annotation_TypeAnnotation$TypeAnnotationTarget_h_
//$ class sun.reflect.annotation.TypeAnnotation$TypeAnnotationTarget
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("METHOD_RETURN")
#undef METHOD_RETURN
#pragma push_macro("CLASS_EXTENDS")
#undef CLASS_EXTENDS
#pragma push_macro("CLASS_TYPE_PARAMETER_BOUND")
#undef CLASS_TYPE_PARAMETER_BOUND
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("METHOD_TYPE_PARAMETER")
#undef METHOD_TYPE_PARAMETER
#pragma push_macro("THROWS")
#undef THROWS
#pragma push_macro("RECORD_COMPONENT")
#undef RECORD_COMPONENT
#pragma push_macro("CLASS_IMPLEMENTS")
#undef CLASS_IMPLEMENTS
#pragma push_macro("METHOD_RECEIVER")
#undef METHOD_RECEIVER
#pragma push_macro("METHOD_FORMAL_PARAMETER")
#undef METHOD_FORMAL_PARAMETER
#pragma push_macro("CLASS_TYPE_PARAMETER")
#undef CLASS_TYPE_PARAMETER
#pragma push_macro("METHOD_TYPE_PARAMETER_BOUND")
#undef METHOD_TYPE_PARAMETER_BOUND

namespace sun {
	namespace reflect {
		namespace annotation {

class $import TypeAnnotation$TypeAnnotationTarget : public ::java::lang::Enum {
	$class(TypeAnnotation$TypeAnnotationTarget, 0, ::java::lang::Enum)
public:
	TypeAnnotation$TypeAnnotationTarget();
	static $Array<::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* valueOf($String* name);
	static $Array<::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget>* values();
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* CLASS_TYPE_PARAMETER;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* METHOD_TYPE_PARAMETER;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* CLASS_EXTENDS;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* CLASS_IMPLEMENTS;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* CLASS_TYPE_PARAMETER_BOUND;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* METHOD_TYPE_PARAMETER_BOUND;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* FIELD;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* METHOD_RETURN;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* METHOD_RECEIVER;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* METHOD_FORMAL_PARAMETER;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* THROWS;
	static ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* RECORD_COMPONENT;
	static $Array<::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget>* $VALUES;
};

		} // annotation
	} // reflect
} // sun

#pragma pop_macro("METHOD_RETURN")
#pragma pop_macro("CLASS_EXTENDS")
#pragma pop_macro("CLASS_TYPE_PARAMETER_BOUND")
#pragma pop_macro("FIELD")
#pragma pop_macro("METHOD_TYPE_PARAMETER")
#pragma pop_macro("THROWS")
#pragma pop_macro("RECORD_COMPONENT")
#pragma pop_macro("CLASS_IMPLEMENTS")
#pragma pop_macro("METHOD_RECEIVER")
#pragma pop_macro("METHOD_FORMAL_PARAMETER")
#pragma pop_macro("CLASS_TYPE_PARAMETER")
#pragma pop_macro("METHOD_TYPE_PARAMETER_BOUND")

#endif // _sun_reflect_annotation_TypeAnnotation$TypeAnnotationTarget_h_