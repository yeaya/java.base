#ifndef _java_lang_constant_ConstantUtils_h_
#define _java_lang_constant_ConstantUtils_h_
//$ class java.lang.constant.ConstantUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JVM_SIGNATURE_SHORT")
#undef JVM_SIGNATURE_SHORT
#pragma push_macro("JVM_SIGNATURE_CLASS")
#undef JVM_SIGNATURE_CLASS
#pragma push_macro("JVM_SIGNATURE_VOID")
#undef JVM_SIGNATURE_VOID
#pragma push_macro("JVM_SIGNATURE_ENDFUNC")
#undef JVM_SIGNATURE_ENDFUNC
#pragma push_macro("JVM_SIGNATURE_ARRAY")
#undef JVM_SIGNATURE_ARRAY
#pragma push_macro("EMPTY_CONSTANTDESC")
#undef EMPTY_CONSTANTDESC
#pragma push_macro("JVM_SIGNATURE_ENDCLASS")
#undef JVM_SIGNATURE_ENDCLASS
#pragma push_macro("JVM_SIGNATURE_CHAR")
#undef JVM_SIGNATURE_CHAR
#pragma push_macro("EMPTY_CONSTABLE")
#undef EMPTY_CONSTABLE
#pragma push_macro("JVM_SIGNATURE_DOUBLE")
#undef JVM_SIGNATURE_DOUBLE
#pragma push_macro("JVM_SIGNATURE_ENUM")
#undef JVM_SIGNATURE_ENUM
#pragma push_macro("MAX_ARRAY_TYPE_DESC_DIMENSIONS")
#undef MAX_ARRAY_TYPE_DESC_DIMENSIONS
#pragma push_macro("JVM_SIGNATURE_FLOAT")
#undef JVM_SIGNATURE_FLOAT
#pragma push_macro("JVM_SIGNATURE_INT")
#undef JVM_SIGNATURE_INT
#pragma push_macro("JVM_SIGNATURE_BYTE")
#undef JVM_SIGNATURE_BYTE
#pragma push_macro("JVM_SIGNATURE_LONG")
#undef JVM_SIGNATURE_LONG
#pragma push_macro("JVM_SIGNATURE_FUNC")
#undef JVM_SIGNATURE_FUNC
#pragma push_macro("JVM_SIGNATURE_BOOLEAN")
#undef JVM_SIGNATURE_BOOLEAN

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class Constable;
			class ConstantDesc;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

namespace java {
	namespace lang {
		namespace constant {

class ConstantUtils : public ::java::lang::Object {
	$class(ConstantUtils, 0, ::java::lang::Object)
public:
	ConstantUtils();
	void init$();
	static int32_t arrayDepth($String* descriptorString);
	static $String* binaryToInternal($String* name);
	static $String* dropFirstAndLastChar($String* s);
	static $String* dropLastChar($String* s);
	static $String* internalToBinary($String* name);
	static ::java::util::List* parseMethodDescriptor($String* descriptor);
	static int32_t skipOverFieldSignature($String* descriptor, int32_t start, int32_t end, bool voidOK);
	static $String* validateBinaryClassName($String* name);
	static void validateClassOrInterface(::java::lang::constant::ClassDesc* classDesc);
	static $String* validateMemberName($String* name, bool method);
	static bool verifyUnqualifiedClassName($String* name);
	static $Array<::java::lang::constant::ConstantDesc>* EMPTY_CONSTANTDESC;
	static $Array<::java::lang::constant::Constable>* EMPTY_CONSTABLE;
	static const int32_t MAX_ARRAY_TYPE_DESC_DIMENSIONS = 255;
	static ::java::util::Set* pointyNames;
	static const char16_t JVM_SIGNATURE_ARRAY = ((char16_t)91);
	static const char16_t JVM_SIGNATURE_BYTE = ((char16_t)66);
	static const char16_t JVM_SIGNATURE_CHAR = ((char16_t)67);
	static const char16_t JVM_SIGNATURE_CLASS = ((char16_t)76);
	static const char16_t JVM_SIGNATURE_ENDCLASS = ((char16_t)59);
	static const char16_t JVM_SIGNATURE_ENUM = ((char16_t)69);
	static const char16_t JVM_SIGNATURE_FLOAT = ((char16_t)70);
	static const char16_t JVM_SIGNATURE_DOUBLE = ((char16_t)68);
	static const char16_t JVM_SIGNATURE_FUNC = ((char16_t)40);
	static const char16_t JVM_SIGNATURE_ENDFUNC = ((char16_t)41);
	static const char16_t JVM_SIGNATURE_INT = ((char16_t)73);
	static const char16_t JVM_SIGNATURE_LONG = ((char16_t)74);
	static const char16_t JVM_SIGNATURE_SHORT = ((char16_t)83);
	static const char16_t JVM_SIGNATURE_VOID = ((char16_t)86);
	static const char16_t JVM_SIGNATURE_BOOLEAN = ((char16_t)90);
};

		} // constant
	} // lang
} // java

#pragma pop_macro("JVM_SIGNATURE_SHORT")
#pragma pop_macro("JVM_SIGNATURE_CLASS")
#pragma pop_macro("JVM_SIGNATURE_VOID")
#pragma pop_macro("JVM_SIGNATURE_ENDFUNC")
#pragma pop_macro("JVM_SIGNATURE_ARRAY")
#pragma pop_macro("EMPTY_CONSTANTDESC")
#pragma pop_macro("JVM_SIGNATURE_ENDCLASS")
#pragma pop_macro("JVM_SIGNATURE_CHAR")
#pragma pop_macro("EMPTY_CONSTABLE")
#pragma pop_macro("JVM_SIGNATURE_DOUBLE")
#pragma pop_macro("JVM_SIGNATURE_ENUM")
#pragma pop_macro("MAX_ARRAY_TYPE_DESC_DIMENSIONS")
#pragma pop_macro("JVM_SIGNATURE_FLOAT")
#pragma pop_macro("JVM_SIGNATURE_INT")
#pragma pop_macro("JVM_SIGNATURE_BYTE")
#pragma pop_macro("JVM_SIGNATURE_LONG")
#pragma pop_macro("JVM_SIGNATURE_FUNC")
#pragma pop_macro("JVM_SIGNATURE_BOOLEAN")

#endif // _java_lang_constant_ConstantUtils_h_