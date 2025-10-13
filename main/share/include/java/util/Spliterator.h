#ifndef _java_util_Spliterator_h_
#define _java_util_Spliterator_h_
//$ interface java.util.Spliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONCURRENT")
#undef CONCURRENT
#pragma push_macro("DISTINCT")
#undef DISTINCT
#pragma push_macro("IMMUTABLE")
#undef IMMUTABLE
#pragma push_macro("NONNULL")
#undef NONNULL
#pragma push_macro("ORDERED")
#undef ORDERED
#pragma push_macro("SIZED")
#undef SIZED
#pragma push_macro("SORTED")
#undef SORTED
#pragma push_macro("SUBSIZED")
#undef SUBSIZED

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class $import Spliterator : public ::java::lang::Object {
	$interface(Spliterator, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t characteristics() {return 0;}
	virtual int64_t estimateSize() {return 0;}
	virtual void forEachRemaining(::java::util::function::Consumer* action);
	virtual ::java::util::Comparator* getComparator();
	virtual int64_t getExactSizeIfKnown();
	virtual bool hasCharacteristics(int32_t characteristics);
	virtual bool tryAdvance(::java::util::function::Consumer* action) {return false;}
	virtual ::java::util::Spliterator* trySplit() {return nullptr;}
	static const int32_t ORDERED = 16;
	static const int32_t DISTINCT = 1;
	static const int32_t SORTED = 4;
	static const int32_t SIZED = 64;
	static const int32_t NONNULL = 256;
	static const int32_t IMMUTABLE = 1024;
	static const int32_t CONCURRENT = 4096;
	static const int32_t SUBSIZED = 16384;
};

	} // util
} // java

#pragma pop_macro("CONCURRENT")
#pragma pop_macro("DISTINCT")
#pragma pop_macro("IMMUTABLE")
#pragma pop_macro("NONNULL")
#pragma pop_macro("ORDERED")
#pragma pop_macro("SIZED")
#pragma pop_macro("SORTED")
#pragma pop_macro("SUBSIZED")

#endif // _java_util_Spliterator_h_