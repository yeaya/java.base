#ifndef _sun_invoke_util_Wrapper$Format_h_
#define _sun_invoke_util_Wrapper$Format_h_
//$ class sun.invoke.util.Wrapper$Format
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("FLOATING")
#undef FLOATING
#pragma push_macro("INT")
#undef INT
#pragma push_macro("KIND_SHIFT")
#undef KIND_SHIFT
#pragma push_macro("NUM_MASK")
#undef NUM_MASK
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("SIGNED")
#undef SIGNED
#pragma push_macro("SIZE_MASK")
#undef SIZE_MASK
#pragma push_macro("SIZE_SHIFT")
#undef SIZE_SHIFT
#pragma push_macro("SLOT_MASK")
#undef SLOT_MASK
#pragma push_macro("SLOT_SHIFT")
#undef SLOT_SHIFT
#pragma push_macro("UNSIGNED")
#undef UNSIGNED
#pragma push_macro("VOID")
#undef VOID

namespace sun {
	namespace invoke {
		namespace util {

class Wrapper$Format : public ::java::lang::Object {
	$class(Wrapper$Format, 0, ::java::lang::Object)
public:
	Wrapper$Format();
	void init$();
	static int32_t floating(int32_t size);
	static int32_t format(int32_t kind, int32_t size, int32_t slots);
	static int32_t other(int32_t slots);
	static int32_t signed$(int32_t size);
	static int32_t unsigned$(int32_t size);
	static bool $assertionsDisabled;
	static const int32_t SLOT_SHIFT = 0;
	static const int32_t SIZE_SHIFT = 2;
	static const int32_t KIND_SHIFT = 12;
	static const int32_t SIGNED = -4096; // (int32_t)((uint32_t)((-1)) << KIND_SHIFT)
	static const int32_t UNSIGNED = 0; // 0 << KIND_SHIFT
	static const int32_t FLOATING = 4096; // 1 << KIND_SHIFT
	static const int32_t SLOT_MASK = ((1 << (SIZE_SHIFT - SLOT_SHIFT)) - 1);
	static const int32_t SIZE_MASK = ((1 << (KIND_SHIFT - SIZE_SHIFT)) - 1);
	static const int32_t INT = -3967; // SIGNED | (32 << SIZE_SHIFT) | (1 << SLOT_SHIFT)
	static const int32_t SHORT = -4031; // SIGNED | (16 << SIZE_SHIFT) | (1 << SLOT_SHIFT)
	static const int32_t BOOLEAN = 5; // UNSIGNED | (1 << SIZE_SHIFT) | (1 << SLOT_SHIFT)
	static const int32_t CHAR = 65; // UNSIGNED | (16 << SIZE_SHIFT) | (1 << SLOT_SHIFT)
	static const int32_t FLOAT = 4225; // FLOATING | (32 << SIZE_SHIFT) | (1 << SLOT_SHIFT)
	static const int32_t VOID = 0; // UNSIGNED | (0 << SIZE_SHIFT) | (0 << SLOT_SHIFT)
	static const int32_t NUM_MASK = -4; // (int32_t)((uint32_t)((-1)) << SIZE_SHIFT)
};

		} // util
	} // invoke
} // sun

#pragma pop_macro("BOOLEAN")
#pragma pop_macro("CHAR")
#pragma pop_macro("FLOAT")
#pragma pop_macro("FLOATING")
#pragma pop_macro("INT")
#pragma pop_macro("KIND_SHIFT")
#pragma pop_macro("NUM_MASK")
#pragma pop_macro("SHORT")
#pragma pop_macro("SIGNED")
#pragma pop_macro("SIZE_MASK")
#pragma pop_macro("SIZE_SHIFT")
#pragma pop_macro("SLOT_MASK")
#pragma pop_macro("SLOT_SHIFT")
#pragma pop_macro("UNSIGNED")
#pragma pop_macro("VOID")

#endif // _sun_invoke_util_Wrapper$Format_h_