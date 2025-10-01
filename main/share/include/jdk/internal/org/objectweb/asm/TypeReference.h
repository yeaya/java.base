#ifndef _jdk_internal_org_objectweb_asm$_TypeReference_h_
#define _jdk_internal_org_objectweb_asm$_TypeReference_h_
//$ class jdk.internal.org.objectweb.asm.TypeReference
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $import TypeReference : public ::java::lang::Object {
	$class(TypeReference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeReference();
	void init$(int32_t typeRef);
	virtual int32_t getExceptionIndex();
	virtual int32_t getFormalParameterIndex();
	virtual int32_t getSort();
	virtual int32_t getSuperTypeIndex();
	virtual int32_t getTryCatchBlockIndex();
	virtual int32_t getTypeArgumentIndex();
	virtual int32_t getTypeParameterBoundIndex();
	virtual int32_t getTypeParameterIndex();
	virtual int32_t getValue();
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newExceptionReference(int32_t exceptionIndex);
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newFormalParameterReference(int32_t paramIndex);
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newSuperTypeReference(int32_t itfIndex);
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newTryCatchReference(int32_t tryCatchBlockIndex);
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newTypeArgumentReference(int32_t sort, int32_t argIndex);
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newTypeParameterBoundReference(int32_t sort, int32_t paramIndex, int32_t boundIndex);
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newTypeParameterReference(int32_t sort, int32_t paramIndex);
	static ::jdk::internal::org::objectweb::asm$::TypeReference* newTypeReference(int32_t sort);
	static void putTarget(int32_t targetTypeAndInfo, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	static const int32_t CLASS_TYPE_PARAMETER = 0;
	static const int32_t METHOD_TYPE_PARAMETER = 1;
	static const int32_t CLASS_EXTENDS = 16;
	static const int32_t CLASS_TYPE_PARAMETER_BOUND = 17;
	static const int32_t METHOD_TYPE_PARAMETER_BOUND = 18;
	static const int32_t FIELD = 19;
	static const int32_t METHOD_RETURN = 20;
	static const int32_t METHOD_RECEIVER = 21;
	static const int32_t METHOD_FORMAL_PARAMETER = 22;
	static const int32_t THROWS = 23;
	static const int32_t LOCAL_VARIABLE = 64;
	static const int32_t RESOURCE_VARIABLE = 65;
	static const int32_t EXCEPTION_PARAMETER = 66;
	static const int32_t INSTANCEOF = 67;
	static const int32_t NEW = 68;
	static const int32_t CONSTRUCTOR_REFERENCE = 69;
	static const int32_t METHOD_REFERENCE = 70;
	static const int32_t CAST = 71;
	static const int32_t CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT = 72;
	static const int32_t METHOD_INVOCATION_TYPE_ARGUMENT = 73;
	static const int32_t CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT = 74;
	static const int32_t METHOD_REFERENCE_TYPE_ARGUMENT = 75;
	int32_t targetTypeAndInfo = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("CAST")
#pragma pop_macro("RESOURCE_VARIABLE")
#pragma pop_macro("INSTANCEOF")
#pragma pop_macro("NEW")
#pragma pop_macro("LOCAL_VARIABLE")
#pragma pop_macro("METHOD_REFERENCE")
#pragma pop_macro("FIELD")
#pragma pop_macro("METHOD_RECEIVER")
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

#endif // _jdk_internal_org_objectweb_asm$_TypeReference_h_