#ifndef _java_lang_invoke_LambdaFormEditor$TransformKey_h_
#define _java_lang_invoke_LambdaFormEditor$TransformKey_h_
//$ class java.lang.invoke.LambdaFormEditor$TransformKey
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NO_BYTES")
#undef NO_BYTES
#pragma push_macro("PACKED_BYTE_MASK")
#undef PACKED_BYTE_MASK
#pragma push_macro("PACKED_BYTE_MAX_LENGTH")
#undef PACKED_BYTE_MAX_LENGTH
#pragma push_macro("PACKED_BYTE_SIZE")
#undef PACKED_BYTE_SIZE
#pragma push_macro("STRESS_TEST")
#undef STRESS_TEST

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class LambdaFormEditor$Transform;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaFormEditor$TransformKey : public ::java::lang::Object {
	$class(LambdaFormEditor$TransformKey, 0, ::java::lang::Object)
public:
	LambdaFormEditor$TransformKey();
	void init$(int64_t packedBytes);
	void init$($bytes* fullBytes);
	void init$(int64_t packedBytes, $bytes* fullBytes);
	static int8_t bval(int32_t b);
	virtual bool equals(Object$* obj) override;
	bool equals(::java::lang::invoke::LambdaFormEditor$TransformKey* that);
	bool equals(::java::lang::invoke::LambdaFormEditor$Transform* that);
	static $bytes* fullBytes($ints* byteValues);
	virtual int32_t hashCode() override;
	static bool inRange(int32_t bitset);
	static ::java::lang::invoke::LambdaFormEditor$TransformKey* of(int8_t k, int32_t b1);
	static ::java::lang::invoke::LambdaFormEditor$TransformKey* of(int8_t b0, int32_t b1, int32_t b2);
	static ::java::lang::invoke::LambdaFormEditor$TransformKey* of(int8_t b0, int32_t b1, int32_t b2, int32_t b3);
	static ::java::lang::invoke::LambdaFormEditor$TransformKey* of(int8_t kind, $ints* b123);
	static ::java::lang::invoke::LambdaFormEditor$TransformKey* of(int8_t kind, int32_t b1, $ints* b23456);
	static ::java::lang::invoke::LambdaFormEditor$TransformKey* of(int8_t kind, int32_t b1, int32_t b2, $bytes* b345);
	static ::java::lang::invoke::LambdaFormEditor$TransformKey* ofBothArrays(int8_t kind, $ints* b123, $bytes* b456);
	static int64_t packedBytes($bytes* bytes);
	static int64_t packedBytes(int32_t b0, int32_t b1);
	static int64_t packedBytes(int32_t b0, int32_t b1, int32_t b2);
	static int64_t packedBytes(int32_t b0, int32_t b1, int32_t b2, int32_t b3);
	virtual $String* toString() override;
	::java::lang::invoke::LambdaFormEditor$Transform* withResult(::java::lang::invoke::LambdaForm* result);
	static bool $assertionsDisabled;
	int64_t packedBytes$ = 0;
	$bytes* fullBytes$ = nullptr;
	static $bytes* NO_BYTES;
	static const bool STRESS_TEST = false;
	static const int32_t PACKED_BYTE_SIZE = 4;
	static const int32_t PACKED_BYTE_MASK = 15; // (1 << PACKED_BYTE_SIZE) - 1
	static const int32_t PACKED_BYTE_MAX_LENGTH = 16; // 64 / PACKED_BYTE_SIZE
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("NO_BYTES")
#pragma pop_macro("PACKED_BYTE_MASK")
#pragma pop_macro("PACKED_BYTE_MAX_LENGTH")
#pragma pop_macro("PACKED_BYTE_SIZE")
#pragma pop_macro("STRESS_TEST")

#endif // _java_lang_invoke_LambdaFormEditor$TransformKey_h_