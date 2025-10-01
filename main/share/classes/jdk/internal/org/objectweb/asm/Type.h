#ifndef _jdk_internal_org_objectweb_asm$_Type_h_
#define _jdk_internal_org_objectweb_asm$_Type_h_
//$ class jdk.internal.org.objectweb.asm.Type
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHAR_TYPE")
#undef CHAR_TYPE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("DOUBLE_TYPE")
#undef DOUBLE_TYPE
#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("LONG_TYPE")
#undef LONG_TYPE
#pragma push_macro("BYTE_TYPE")
#undef BYTE_TYPE
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("VOID_TYPE")
#undef VOID_TYPE
#pragma push_macro("OBJECT")
#undef OBJECT
#pragma push_macro("PRIMITIVE_DESCRIPTORS")
#undef PRIMITIVE_DESCRIPTORS
#pragma push_macro("BOOLEAN_TYPE")
#undef BOOLEAN_TYPE
#pragma push_macro("FLOAT_TYPE")
#undef FLOAT_TYPE
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("INT")
#undef INT
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("INTERNAL")
#undef INTERNAL
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("SHORT_TYPE")
#undef SHORT_TYPE
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("VOID")
#undef VOID
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("INT_TYPE")
#undef INT_TYPE

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $export Type : public ::java::lang::Object {
	$class(Type, 0, ::java::lang::Object)
public:
	Type();
	void init$(int32_t sort, $String* valueBuffer, int32_t valueBegin, int32_t valueEnd);
	void appendDescriptor(::java::lang::StringBuilder* stringBuilder);
	static void appendDescriptor($Class* clazz, ::java::lang::StringBuilder* stringBuilder);
	virtual bool equals(Object$* object) override;
	$Array<::jdk::internal::org::objectweb::asm$::Type>* getArgumentTypes();
	static $Array<::jdk::internal::org::objectweb::asm$::Type>* getArgumentTypes($String* methodDescriptor);
	static $Array<::jdk::internal::org::objectweb::asm$::Type>* getArgumentTypes(::java::lang::reflect::Method* method);
	int32_t getArgumentsAndReturnSizes();
	static int32_t getArgumentsAndReturnSizes($String* methodDescriptor);
	$String* getClassName();
	static $String* getConstructorDescriptor(::java::lang::reflect::Constructor* constructor);
	$String* getDescriptor();
	static $String* getDescriptor($Class* clazz);
	int32_t getDimensions();
	::jdk::internal::org::objectweb::asm$::Type* getElementType();
	$String* getInternalName();
	static $String* getInternalName($Class* clazz);
	static $String* getMethodDescriptor(::jdk::internal::org::objectweb::asm$::Type* returnType, $Array<::jdk::internal::org::objectweb::asm$::Type>* argumentTypes);
	static $String* getMethodDescriptor(::java::lang::reflect::Method* method);
	static ::jdk::internal::org::objectweb::asm$::Type* getMethodType($String* methodDescriptor);
	static ::jdk::internal::org::objectweb::asm$::Type* getMethodType(::jdk::internal::org::objectweb::asm$::Type* returnType, $Array<::jdk::internal::org::objectweb::asm$::Type>* argumentTypes);
	static ::jdk::internal::org::objectweb::asm$::Type* getObjectType($String* internalName);
	int32_t getOpcode(int32_t opcode);
	::jdk::internal::org::objectweb::asm$::Type* getReturnType();
	static ::jdk::internal::org::objectweb::asm$::Type* getReturnType($String* methodDescriptor);
	static ::jdk::internal::org::objectweb::asm$::Type* getReturnType(::java::lang::reflect::Method* method);
	static int32_t getReturnTypeOffset($String* methodDescriptor);
	int32_t getSize();
	int32_t getSort();
	static ::jdk::internal::org::objectweb::asm$::Type* getType($String* typeDescriptor);
	static ::jdk::internal::org::objectweb::asm$::Type* getType($Class* clazz);
	static ::jdk::internal::org::objectweb::asm$::Type* getType(::java::lang::reflect::Constructor* constructor);
	static ::jdk::internal::org::objectweb::asm$::Type* getType(::java::lang::reflect::Method* method);
	static ::jdk::internal::org::objectweb::asm$::Type* getTypeInternal($String* descriptorBuffer, int32_t descriptorBegin, int32_t descriptorEnd);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t VOID = 0;
	static const int32_t BOOLEAN = 1;
	static const int32_t CHAR = 2;
	static const int32_t BYTE = 3;
	static const int32_t SHORT = 4;
	static const int32_t INT = 5;
	static const int32_t FLOAT = 6;
	static const int32_t LONG = 7;
	static const int32_t DOUBLE = 8;
	static const int32_t ARRAY = 9;
	static const int32_t OBJECT = 10;
	static const int32_t METHOD = 11;
	static const int32_t INTERNAL = 12;
	static $String* PRIMITIVE_DESCRIPTORS;
	static ::jdk::internal::org::objectweb::asm$::Type* VOID_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* BOOLEAN_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* CHAR_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* BYTE_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* SHORT_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* INT_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* FLOAT_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* LONG_TYPE;
	static ::jdk::internal::org::objectweb::asm$::Type* DOUBLE_TYPE;
	int32_t sort = 0;
	$String* valueBuffer = nullptr;
	int32_t valueBegin = 0;
	int32_t valueEnd = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("CHAR_TYPE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("DOUBLE_TYPE")
#pragma pop_macro("ARRAY")
#pragma pop_macro("LONG_TYPE")
#pragma pop_macro("BYTE_TYPE")
#pragma pop_macro("CHAR")
#pragma pop_macro("VOID_TYPE")
#pragma pop_macro("OBJECT")
#pragma pop_macro("PRIMITIVE_DESCRIPTORS")
#pragma pop_macro("BOOLEAN_TYPE")
#pragma pop_macro("FLOAT_TYPE")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("INT")
#pragma pop_macro("SHORT")
#pragma pop_macro("BYTE")
#pragma pop_macro("INTERNAL")
#pragma pop_macro("METHOD")
#pragma pop_macro("SHORT_TYPE")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("VOID")
#pragma pop_macro("LONG")
#pragma pop_macro("INT_TYPE")

#endif // _jdk_internal_org_objectweb_asm$_Type_h_