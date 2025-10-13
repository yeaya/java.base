#ifndef _java_util_stream_StreamOpFlag_h_
#define _java_util_stream_StreamOpFlag_h_
//$ class java.util.stream.StreamOpFlag
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLEAR_BITS")
#undef CLEAR_BITS
#pragma push_macro("DISTINCT")
#undef DISTINCT
#pragma push_macro("FLAG_MASK")
#undef FLAG_MASK
#pragma push_macro("FLAG_MASK_IS")
#undef FLAG_MASK_IS
#pragma push_macro("FLAG_MASK_NOT")
#undef FLAG_MASK_NOT
#pragma push_macro("INITIAL_OPS_VALUE")
#undef INITIAL_OPS_VALUE
#pragma push_macro("IS_DISTINCT")
#undef IS_DISTINCT
#pragma push_macro("IS_ORDERED")
#undef IS_ORDERED
#pragma push_macro("IS_SHORT_CIRCUIT")
#undef IS_SHORT_CIRCUIT
#pragma push_macro("IS_SIZED")
#undef IS_SIZED
#pragma push_macro("IS_SIZE_ADJUSTING")
#undef IS_SIZE_ADJUSTING
#pragma push_macro("IS_SORTED")
#undef IS_SORTED
#pragma push_macro("NOT_DISTINCT")
#undef NOT_DISTINCT
#pragma push_macro("NOT_ORDERED")
#undef NOT_ORDERED
#pragma push_macro("NOT_SIZED")
#undef NOT_SIZED
#pragma push_macro("NOT_SORTED")
#undef NOT_SORTED
#pragma push_macro("OP_MASK")
#undef OP_MASK
#pragma push_macro("ORDERED")
#undef ORDERED
#pragma push_macro("PRESERVE_BITS")
#undef PRESERVE_BITS
#pragma push_macro("SET_BITS")
#undef SET_BITS
#pragma push_macro("SHORT_CIRCUIT")
#undef SHORT_CIRCUIT
#pragma push_macro("SIZED")
#undef SIZED
#pragma push_macro("SIZE_ADJUSTING")
#undef SIZE_ADJUSTING
#pragma push_macro("SORTED")
#undef SORTED
#pragma push_macro("SPLITERATOR_CHARACTERISTICS_MASK")
#undef SPLITERATOR_CHARACTERISTICS_MASK
#pragma push_macro("STREAM_MASK")
#undef STREAM_MASK
#pragma push_macro("TERMINAL_OP_MASK")
#undef TERMINAL_OP_MASK
#pragma push_macro("UPSTREAM_TERMINAL_OP_MASK")
#undef UPSTREAM_TERMINAL_OP_MASK

namespace java {
	namespace util {
		class Map;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class StreamOpFlag$MaskBuilder;
			class StreamOpFlag$Type;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamOpFlag : public ::java::lang::Enum {
	$class(StreamOpFlag, $PRELOAD, ::java::lang::Enum)
public:
	StreamOpFlag();
	static $Array<::java::util::stream::StreamOpFlag>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t position, ::java::util::stream::StreamOpFlag$MaskBuilder* maskBuilder);
	virtual bool canSet(::java::util::stream::StreamOpFlag$Type* t);
	virtual int32_t clear();
	static int32_t combineOpFlags(int32_t newStreamOrOpFlags, int32_t prevCombOpFlags);
	static int32_t createFlagMask();
	static int32_t createMask(::java::util::stream::StreamOpFlag$Type* t);
	static int32_t fromCharacteristics(::java::util::Spliterator* spliterator);
	static int32_t fromCharacteristics(int32_t characteristics);
	static int32_t getMask(int32_t flags);
	virtual bool isCleared(int32_t flags);
	virtual bool isKnown(int32_t flags);
	virtual bool isPreserved(int32_t flags);
	virtual bool isStreamFlag();
	static ::java::util::stream::StreamOpFlag$MaskBuilder* set(::java::util::stream::StreamOpFlag$Type* t);
	virtual int32_t set();
	static int32_t toCharacteristics(int32_t streamFlags);
	static int32_t toStreamFlags(int32_t combOpFlags);
	static ::java::util::stream::StreamOpFlag* valueOf($String* name);
	static $Array<::java::util::stream::StreamOpFlag>* values();
	static ::java::util::stream::StreamOpFlag* DISTINCT;
	static ::java::util::stream::StreamOpFlag* SORTED;
	static ::java::util::stream::StreamOpFlag* ORDERED;
	static ::java::util::stream::StreamOpFlag* SIZED;
	static ::java::util::stream::StreamOpFlag* SHORT_CIRCUIT;
	static ::java::util::stream::StreamOpFlag* SIZE_ADJUSTING;
	static $Array<::java::util::stream::StreamOpFlag>* $VALUES;
	static const int32_t SET_BITS = 1;
	static const int32_t CLEAR_BITS = 2;
	static const int32_t PRESERVE_BITS = 3;
	::java::util::Map* maskTable = nullptr;
	int32_t bitPosition = 0;
	int32_t set$ = 0;
	int32_t clear$ = 0;
	int32_t preserve = 0;
	static int32_t SPLITERATOR_CHARACTERISTICS_MASK;
	static int32_t STREAM_MASK;
	static int32_t OP_MASK;
	static int32_t TERMINAL_OP_MASK;
	static int32_t UPSTREAM_TERMINAL_OP_MASK;
	static int32_t FLAG_MASK;
	static int32_t FLAG_MASK_IS;
	static int32_t FLAG_MASK_NOT;
	static int32_t INITIAL_OPS_VALUE;
	static int32_t IS_DISTINCT;
	static int32_t NOT_DISTINCT;
	static int32_t IS_SORTED;
	static int32_t NOT_SORTED;
	static int32_t IS_ORDERED;
	static int32_t NOT_ORDERED;
	static int32_t IS_SIZED;
	static int32_t NOT_SIZED;
	static int32_t IS_SHORT_CIRCUIT;
	static int32_t IS_SIZE_ADJUSTING;
};

		} // stream
	} // util
} // java

#pragma pop_macro("CLEAR_BITS")
#pragma pop_macro("DISTINCT")
#pragma pop_macro("FLAG_MASK")
#pragma pop_macro("FLAG_MASK_IS")
#pragma pop_macro("FLAG_MASK_NOT")
#pragma pop_macro("INITIAL_OPS_VALUE")
#pragma pop_macro("IS_DISTINCT")
#pragma pop_macro("IS_ORDERED")
#pragma pop_macro("IS_SHORT_CIRCUIT")
#pragma pop_macro("IS_SIZED")
#pragma pop_macro("IS_SIZE_ADJUSTING")
#pragma pop_macro("IS_SORTED")
#pragma pop_macro("NOT_DISTINCT")
#pragma pop_macro("NOT_ORDERED")
#pragma pop_macro("NOT_SIZED")
#pragma pop_macro("NOT_SORTED")
#pragma pop_macro("OP_MASK")
#pragma pop_macro("ORDERED")
#pragma pop_macro("PRESERVE_BITS")
#pragma pop_macro("SET_BITS")
#pragma pop_macro("SHORT_CIRCUIT")
#pragma pop_macro("SIZED")
#pragma pop_macro("SIZE_ADJUSTING")
#pragma pop_macro("SORTED")
#pragma pop_macro("SPLITERATOR_CHARACTERISTICS_MASK")
#pragma pop_macro("STREAM_MASK")
#pragma pop_macro("TERMINAL_OP_MASK")
#pragma pop_macro("UPSTREAM_TERMINAL_OP_MASK")

#endif // _java_util_stream_StreamOpFlag_h_