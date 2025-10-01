#ifndef _java_nio_Bits_h_
#define _java_nio_Bits_h_
//$ class java.nio.Bits
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MEMORY_LIMIT_SET")
#undef MEMORY_LIMIT_SET
#pragma push_macro("MAX_SLEEPS")
#undef MAX_SLEEPS
#pragma push_macro("BUFFER_POOL")
#undef BUFFER_POOL
#pragma push_macro("JNI_COPY_TO_ARRAY_THRESHOLD")
#undef JNI_COPY_TO_ARRAY_THRESHOLD
#pragma push_macro("PAGE_SIZE")
#undef PAGE_SIZE
#pragma push_macro("MAX_MEMORY")
#undef MAX_MEMORY
#pragma push_macro("RESERVED_MEMORY")
#undef RESERVED_MEMORY
#pragma push_macro("COUNT")
#undef COUNT
#pragma push_macro("UNSAFE")
#undef UNSAFE
#pragma push_macro("UNALIGNED")
#undef UNALIGNED
#pragma push_macro("TOTAL_CAPACITY")
#undef TOTAL_CAPACITY
#pragma push_macro("JNI_COPY_FROM_ARRAY_THRESHOLD")
#undef JNI_COPY_FROM_ARRAY_THRESHOLD

namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
			class VM$BufferPool;
		}
	}
}

namespace java {
	namespace nio {

class Bits : public ::java::lang::Object {
	$class(Bits, 0, ::java::lang::Object)
public:
	Bits();
	void init$();
	static int64_t pageCount(int64_t size);
	static int32_t pageSize();
	static void reserveMemory(int64_t size, int64_t cap);
	static int16_t swap(int16_t x);
	static char16_t swap(char16_t x);
	static int32_t swap(int32_t x);
	static int64_t swap(int64_t x);
	static bool tryReserveMemory(int64_t size, int64_t cap);
	static bool unaligned();
	static void unreserveMemory(int64_t size, int64_t cap);
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static int32_t PAGE_SIZE;
	static bool UNALIGNED;
	static $volatile(int64_t) MAX_MEMORY;
	static ::java::util::concurrent::atomic::AtomicLong* RESERVED_MEMORY;
	static ::java::util::concurrent::atomic::AtomicLong* TOTAL_CAPACITY;
	static ::java::util::concurrent::atomic::AtomicLong* COUNT;
	static $volatile(bool) MEMORY_LIMIT_SET;
	static const int32_t MAX_SLEEPS = 9;
	static ::jdk::internal::misc::VM$BufferPool* BUFFER_POOL;
	static const int32_t JNI_COPY_TO_ARRAY_THRESHOLD = 6;
	static const int32_t JNI_COPY_FROM_ARRAY_THRESHOLD = 6;
};

	} // nio
} // java

#pragma pop_macro("MEMORY_LIMIT_SET")
#pragma pop_macro("MAX_SLEEPS")
#pragma pop_macro("BUFFER_POOL")
#pragma pop_macro("JNI_COPY_TO_ARRAY_THRESHOLD")
#pragma pop_macro("PAGE_SIZE")
#pragma pop_macro("MAX_MEMORY")
#pragma pop_macro("RESERVED_MEMORY")
#pragma pop_macro("COUNT")
#pragma pop_macro("UNSAFE")
#pragma pop_macro("UNALIGNED")
#pragma pop_macro("TOTAL_CAPACITY")
#pragma pop_macro("JNI_COPY_FROM_ARRAY_THRESHOLD")

#endif // _java_nio_Bits_h_