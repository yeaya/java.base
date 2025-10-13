#ifndef _jdk_internal_reflect_MethodAccessorGenerator_h_
#define _jdk_internal_reflect_MethodAccessorGenerator_h_
//$ class jdk.internal.reflect.MethodAccessorGenerator
//$ extends jdk.internal.reflect.AccessorGenerator

#include <java/lang/Array.h>
#include <jdk/internal/reflect/AccessorGenerator.h>

#pragma push_macro("NUM_BASE_CPOOL_ENTRIES")
#undef NUM_BASE_CPOOL_ENTRIES
#pragma push_macro("NUM_METHODS")
#undef NUM_METHODS
#pragma push_macro("NUM_SERIALIZATION_CPOOL_ENTRIES")
#undef NUM_SERIALIZATION_CPOOL_ENTRIES

namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstructorAccessor;
			class MagicAccessorImpl;
			class MethodAccessor;
			class SerializationConstructorAccessorImpl;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class MethodAccessorGenerator : public ::jdk::internal::reflect::AccessorGenerator {
	$class(MethodAccessorGenerator, $NO_CLASS_INIT, ::jdk::internal::reflect::AccessorGenerator)
public:
	MethodAccessorGenerator();
	void init$();
	$String* buildInternalSignature();
	void emitInvoke();
	::jdk::internal::reflect::MagicAccessorImpl* generate($Class* declaringClass, $String* name, $ClassArray* parameterTypes, $Class* returnType, $ClassArray* checkedExceptions, int32_t modifiers, bool isConstructor, bool forSerialization, $Class* serializationTargetClass);
	virtual ::jdk::internal::reflect::ConstructorAccessor* generateConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers);
	virtual ::jdk::internal::reflect::MethodAccessor* generateMethod($Class* declaringClass, $String* name, $ClassArray* parameterTypes, $Class* returnType, $ClassArray* checkedExceptions, int32_t modifiers);
	static $String* generateName(bool isConstructor, bool forSerialization);
	virtual ::jdk::internal::reflect::SerializationConstructorAccessorImpl* generateSerializationConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers, $Class* targetConstructorClass);
	bool isInterface();
	int32_t numNonPrimitiveParameterTypes();
	bool usesPrimitiveTypes();
	static const int16_t NUM_BASE_CPOOL_ENTRIES = (int16_t)12;
	static const int16_t NUM_METHODS = (int16_t)2;
	static const int16_t NUM_SERIALIZATION_CPOOL_ENTRIES = (int16_t)2;
	static $volatile(int32_t) methodSymnum;
	static $volatile(int32_t) constructorSymnum;
	static $volatile(int32_t) serializationConstructorSymnum;
	$Class* declaringClass = nullptr;
	$ClassArray* parameterTypes = nullptr;
	$Class* returnType = nullptr;
	bool isConstructor = false;
	bool forSerialization = false;
	int16_t targetMethodRef = 0;
	int16_t invokeIdx = 0;
	int16_t invokeDescriptorIdx = 0;
	int16_t nonPrimitiveParametersBaseIdx = 0;
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("NUM_BASE_CPOOL_ENTRIES")
#pragma pop_macro("NUM_METHODS")
#pragma pop_macro("NUM_SERIALIZATION_CPOOL_ENTRIES")

#endif // _jdk_internal_reflect_MethodAccessorGenerator_h_