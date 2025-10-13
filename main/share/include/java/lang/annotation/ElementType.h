#ifndef _java_lang_annotation_ElementType_h_
#define _java_lang_annotation_ElementType_h_
//$ class java.lang.annotation.ElementType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANNOTATION_TYPE")
#undef ANNOTATION_TYPE
#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("LOCAL_VARIABLE")
#undef LOCAL_VARIABLE
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("PARAMETER")
#undef PARAMETER
#pragma push_macro("RECORD_COMPONENT")
#undef RECORD_COMPONENT
#pragma push_macro("TYPE")
#undef TYPE
#pragma push_macro("TYPE_PARAMETER")
#undef TYPE_PARAMETER
#pragma push_macro("TYPE_USE")
#undef TYPE_USE

namespace java {
	namespace lang {
		namespace annotation {

class $import ElementType : public ::java::lang::Enum {
	$class(ElementType, 0, ::java::lang::Enum)
public:
	ElementType();
	static $Array<::java::lang::annotation::ElementType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::annotation::ElementType* valueOf($String* name);
	static $Array<::java::lang::annotation::ElementType>* values();
	static ::java::lang::annotation::ElementType* TYPE;
	static ::java::lang::annotation::ElementType* FIELD;
	static ::java::lang::annotation::ElementType* METHOD;
	static ::java::lang::annotation::ElementType* PARAMETER;
	static ::java::lang::annotation::ElementType* CONSTRUCTOR;
	static ::java::lang::annotation::ElementType* LOCAL_VARIABLE;
	static ::java::lang::annotation::ElementType* ANNOTATION_TYPE;
	static ::java::lang::annotation::ElementType* PACKAGE;
	static ::java::lang::annotation::ElementType* TYPE_PARAMETER;
	static ::java::lang::annotation::ElementType* TYPE_USE;
	static ::java::lang::annotation::ElementType* MODULE;
	static ::java::lang::annotation::ElementType* RECORD_COMPONENT;
	static $Array<::java::lang::annotation::ElementType>* $VALUES;
};

		} // annotation
	} // lang
} // java

#pragma pop_macro("ANNOTATION_TYPE")
#pragma pop_macro("CONSTRUCTOR")
#pragma pop_macro("FIELD")
#pragma pop_macro("LOCAL_VARIABLE")
#pragma pop_macro("METHOD")
#pragma pop_macro("MODULE")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("PARAMETER")
#pragma pop_macro("RECORD_COMPONENT")
#pragma pop_macro("TYPE")
#pragma pop_macro("TYPE_PARAMETER")
#pragma pop_macro("TYPE_USE")

#endif // _java_lang_annotation_ElementType_h_