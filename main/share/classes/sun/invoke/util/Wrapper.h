#ifndef _sun_invoke_util_Wrapper_h_
#define _sun_invoke_util_Wrapper_h_
//$ class sun.invoke.util.Wrapper
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("FROM_CHAR")
#undef FROM_CHAR
#pragma push_macro("OBJECT")
#undef OBJECT
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("INT")
#undef INT
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("FROM_PRIM")
#undef FROM_PRIM
#pragma push_macro("FROM_WRAP")
#undef FROM_WRAP
#pragma push_macro("BYTE")
#undef BYTE
#pragma push_macro("FLOAT_ZERO")
#undef FLOAT_ZERO
#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("DOUBLE_ZERO")
#undef DOUBLE_ZERO
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("VOID")
#undef VOID
#pragma push_macro("LONG")
#undef LONG

namespace java {
	namespace lang {
		class ClassCastException;
		class Number;
		class RuntimeException;
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class $export Wrapper : public ::java::lang::Enum {
	$class(Wrapper, 0, ::java::lang::Enum)
public:
	Wrapper();
	static $Array<::sun::invoke::util::Wrapper>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $Class* wtype, $String* wtypeName, $Class* ptype, $String* ptypeName, char16_t tchar, Object$* emptyArray, int32_t format);
	virtual $Class* arrayType();
	static $Class* asPrimitiveType($Class* type);
	static $Class* asWrapperType($Class* type);
	static char16_t basicTypeChar($Class* type);
	virtual char16_t basicTypeChar();
	virtual $String* basicTypeString();
	virtual int32_t bitWidth();
	static bool boolValue(int8_t bits);
	virtual $Object* cast(Object$* x, $Class* type);
	static bool checkConvertibleFrom();
	virtual $Object* convert(Object$* x, $Class* type);
	$Object* convert(Object$* x, $Class* type, bool isCast);
	virtual void copyArrayBoxing(Object$* a, int32_t apos, $ObjectArray* values, int32_t vpos, int32_t length);
	virtual void copyArrayUnboxing($ObjectArray* values, int32_t vpos, Object$* a, int32_t apos, int32_t length);
	virtual $String* detailString();
	static ::sun::invoke::util::Wrapper* findPrimitiveType($Class* type);
	static ::sun::invoke::util::Wrapper* findWrapperType($Class* type);
	static ::sun::invoke::util::Wrapper* forBasicType(char16_t type);
	static ::sun::invoke::util::Wrapper* forBasicType($Class* type);
	static ::sun::invoke::util::Wrapper* forPrimitiveType($Class* type);
	static ::sun::invoke::util::Wrapper* forPrimitiveType(char16_t basicTypeChar);
	static ::sun::invoke::util::Wrapper* forWrapperType($Class* type);
	static $Class* forceType($Class* type, $Class* exampleType);
	static int32_t hashChar(char16_t x);
	static int32_t hashPrim($Class* x);
	static int32_t hashWrap($Class* x);
	virtual bool isConvertibleFrom(::sun::invoke::util::Wrapper* source);
	virtual bool isDoubleWord();
	virtual bool isFloating();
	virtual bool isIntegral();
	virtual bool isNumeric();
	virtual bool isOther();
	static bool isPrimitiveType($Class* type);
	virtual bool isSigned();
	virtual bool isSingleWord();
	virtual bool isSubwordOrInt();
	virtual bool isUnsigned();
	static bool isWrapperType($Class* type);
	virtual $Object* makeArray(int32_t len);
	static ::java::lang::ClassCastException* newClassCastException($Class* actual, $Class* expected);
	static ::java::lang::RuntimeException* newIllegalArgumentException($String* message, Object$* x);
	static ::java::lang::RuntimeException* newIllegalArgumentException($String* message);
	static ::java::lang::Number* numberValue(Object$* x);
	virtual $String* primitiveSimpleName();
	virtual $Class* primitiveType();
	virtual int32_t stackSlots();
	static ::sun::invoke::util::Wrapper* valueOf($String* name);
	static $Array<::sun::invoke::util::Wrapper>* values();
	virtual $Object* wrap(Object$* x);
	virtual $Object* wrap(int32_t x);
	virtual $String* wrapperSimpleName();
	virtual $Class* wrapperType();
	virtual $Class* wrapperType($Class* exampleType);
	virtual $Object* zero();
	virtual $Object* zero($Class* type);
	static bool $assertionsDisabled;
	static ::sun::invoke::util::Wrapper* BOOLEAN;
	static ::sun::invoke::util::Wrapper* BYTE;
	static ::sun::invoke::util::Wrapper* SHORT;
	static ::sun::invoke::util::Wrapper* CHAR;
	static ::sun::invoke::util::Wrapper* INT;
	static ::sun::invoke::util::Wrapper* LONG;
	static ::sun::invoke::util::Wrapper* FLOAT;
	static ::sun::invoke::util::Wrapper* DOUBLE;
	static ::sun::invoke::util::Wrapper* OBJECT;
	static ::sun::invoke::util::Wrapper* VOID;
	static $Array<::sun::invoke::util::Wrapper>* $VALUES;
	static const int32_t COUNT = 10;
	$Class* wrapperType$ = nullptr;
	$Class* primitiveType$ = nullptr;
	char16_t basicTypeChar$ = 0;
	$String* basicTypeString$ = nullptr;
	$Object* emptyArray = nullptr;
	int32_t format = 0;
	$String* wrapperSimpleName$ = nullptr;
	$String* primitiveSimpleName$ = nullptr;
	static $Object* DOUBLE_ZERO;
	static $Object* FLOAT_ZERO;
	static $Array<::sun::invoke::util::Wrapper>* FROM_PRIM;
	static $Array<::sun::invoke::util::Wrapper>* FROM_WRAP;
	static $Array<::sun::invoke::util::Wrapper>* FROM_CHAR;
};

		} // util
	} // invoke
} // sun

#pragma pop_macro("FLOAT")
#pragma pop_macro("CHAR")
#pragma pop_macro("FROM_CHAR")
#pragma pop_macro("OBJECT")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("INT")
#pragma pop_macro("SHORT")
#pragma pop_macro("FROM_PRIM")
#pragma pop_macro("FROM_WRAP")
#pragma pop_macro("BYTE")
#pragma pop_macro("FLOAT_ZERO")
#pragma pop_macro("COUNT")
#pragma pop_macro("DOUBLE_ZERO")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("VOID")
#pragma pop_macro("LONG")

#endif // _sun_invoke_util_Wrapper_h_