#ifndef _jdk_internal_reflect_AccessorGenerator_h_
#define _jdk_internal_reflect_AccessorGenerator_h_
//$ class jdk.internal.reflect.AccessorGenerator
//$ extends jdk.internal.reflect.ClassFileConstants

#include <java/lang/Array.h>
#include <jdk/internal/reflect/ClassFileConstants.h>

#pragma push_macro("NUM_BOXING_CPOOL_ENTRIES")
#undef NUM_BOXING_CPOOL_ENTRIES
#pragma push_macro("NUM_COMMON_CPOOL_ENTRIES")
#undef NUM_COMMON_CPOOL_ENTRIES

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ClassFileAssembler;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class AccessorGenerator : public ::jdk::internal::reflect::ClassFileConstants {
	$class(AccessorGenerator, 0, ::jdk::internal::reflect::ClassFileConstants)
public:
	AccessorGenerator();
	void init$();
	static int16_t add(int16_t s1, int16_t s2);
	virtual int16_t boxingMethodForPrimitiveType($Class* type);
	static bool canWidenTo($Class* type, $Class* otherType);
	virtual void emitBoxingContantPoolEntries();
	virtual void emitCommonConstantPoolEntries();
	virtual void emitConstructor();
	virtual void emitMethod(int16_t nameIdx, int32_t numArgs, ::jdk::internal::reflect::ClassFileAssembler* code, ::jdk::internal::reflect::ClassFileAssembler* exceptionTable, $shorts* checkedExceptionIndices);
	static void emitWideningBytecodeForPrimitiveConversion(::jdk::internal::reflect::ClassFileAssembler* cb, $Class* fromType, $Class* toType);
	static $String* getClassName($Class* c, bool addPrefixAndSuffixForNonPrimitiveTypes);
	virtual ::jdk::internal::reflect::ClassFileAssembler* illegalArgumentCodeBuffer();
	virtual int16_t indexForPrimitiveType($Class* type);
	static $String* internalize($String* className);
	static bool isPrimitive($Class* c);
	virtual bool isPrivate();
	virtual bool isStatic();
	static int16_t sub(int16_t s1, int16_t s2);
	virtual int32_t typeSizeInStackSlots($Class* c);
	virtual int16_t unboxingMethodForPrimitiveType($Class* primType);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int16_t S0 = (int16_t)0;
	static const int16_t S1 = (int16_t)1;
	static const int16_t S2 = (int16_t)2;
	static const int16_t S3 = (int16_t)3;
	static const int16_t S4 = (int16_t)4;
	static const int16_t S5 = (int16_t)5;
	static const int16_t S6 = (int16_t)6;
	::jdk::internal::reflect::ClassFileAssembler* asm$ = nullptr;
	int32_t modifiers = 0;
	int16_t thisClass = 0;
	int16_t superClass = 0;
	int16_t targetClass = 0;
	int16_t throwableClass = 0;
	int16_t classCastClass = 0;
	int16_t nullPointerClass = 0;
	int16_t illegalArgumentClass = 0;
	int16_t invocationTargetClass = 0;
	int16_t initIdx = 0;
	int16_t initNameAndTypeIdx = 0;
	int16_t initStringNameAndTypeIdx = 0;
	int16_t nullPointerCtorIdx = 0;
	int16_t illegalArgumentCtorIdx = 0;
	int16_t illegalArgumentStringCtorIdx = 0;
	int16_t invocationTargetCtorIdx = 0;
	int16_t superCtorIdx = 0;
	int16_t objectClass = 0;
	int16_t toStringIdx = 0;
	int16_t codeIdx = 0;
	int16_t exceptionsIdx = 0;
	int16_t valueOfIdx = 0;
	int16_t booleanIdx = 0;
	int16_t booleanBoxIdx = 0;
	int16_t booleanUnboxIdx = 0;
	int16_t byteIdx = 0;
	int16_t byteBoxIdx = 0;
	int16_t byteUnboxIdx = 0;
	int16_t characterIdx = 0;
	int16_t characterBoxIdx = 0;
	int16_t characterUnboxIdx = 0;
	int16_t doubleIdx = 0;
	int16_t doubleBoxIdx = 0;
	int16_t doubleUnboxIdx = 0;
	int16_t floatIdx = 0;
	int16_t floatBoxIdx = 0;
	int16_t floatUnboxIdx = 0;
	int16_t integerIdx = 0;
	int16_t integerBoxIdx = 0;
	int16_t integerUnboxIdx = 0;
	int16_t longIdx = 0;
	int16_t longBoxIdx = 0;
	int16_t longUnboxIdx = 0;
	int16_t shortIdx = 0;
	int16_t shortBoxIdx = 0;
	int16_t shortUnboxIdx = 0;
	static const int16_t NUM_COMMON_CPOOL_ENTRIES = (int16_t)30;
	static const int16_t NUM_BOXING_CPOOL_ENTRIES = (int16_t)73;
	static $ClassArray* primitiveTypes;
	::jdk::internal::reflect::ClassFileAssembler* illegalArgumentCodeBuffer$ = nullptr;
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("NUM_BOXING_CPOOL_ENTRIES")
#pragma pop_macro("NUM_COMMON_CPOOL_ENTRIES")

#endif // _jdk_internal_reflect_AccessorGenerator_h_