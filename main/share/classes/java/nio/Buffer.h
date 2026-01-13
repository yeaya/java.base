#ifndef _java_nio_Buffer_h_
#define _java_nio_Buffer_h_
//$ class java.nio.Buffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SCOPED_MEMORY_ACCESS")
#undef SCOPED_MEMORY_ACCESS
#pragma push_macro("SPLITERATOR_CHARACTERISTICS")
#undef SPLITERATOR_CHARACTERISTICS
#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace lang {
		class IllegalArgumentException;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {
				class MemorySegmentProxy;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess;
			class ScopedMemoryAccess$Scope;
			class Unsafe;
		}
	}
}

namespace java {
	namespace nio {

class $export Buffer : public ::java::lang::Object {
	$class(Buffer, $PRELOAD, ::java::lang::Object)
public:
	Buffer();
	void init$(int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual $Object* array() {return nullptr;}
	virtual int32_t arrayOffset() {return 0;}
	virtual $Object* base() {return nullptr;}
	int32_t capacity();
	int32_t checkIndex(int32_t i);
	int32_t checkIndex(int32_t i, int32_t nb);
	void checkScope();
	virtual ::java::nio::Buffer* clear();
	static ::java::lang::IllegalArgumentException* createCapacityException(int32_t capacity);
	::java::lang::IllegalArgumentException* createLimitException(int32_t newLimit);
	::java::lang::IllegalArgumentException* createPositionException(int32_t newPosition);
	static ::java::lang::IllegalArgumentException* createSameBufferException();
	void discardMark();
	virtual ::java::nio::Buffer* duplicate() {return nullptr;}
	virtual ::java::nio::Buffer* flip();
	virtual bool hasArray() {return false;}
	bool hasRemaining();
	virtual bool isDirect() {return false;}
	virtual bool isReadOnly() {return false;}
	int32_t limit();
	virtual ::java::nio::Buffer* limit(int32_t newLimit);
	virtual ::java::nio::Buffer* mark();
	int32_t markValue();
	int32_t nextGetIndex();
	int32_t nextGetIndex(int32_t nb);
	int32_t nextPutIndex();
	int32_t nextPutIndex(int32_t nb);
	int32_t position();
	virtual ::java::nio::Buffer* position(int32_t newPosition);
	int32_t remaining();
	virtual ::java::nio::Buffer* reset();
	virtual ::java::nio::Buffer* rewind();
	::jdk::internal::misc::ScopedMemoryAccess$Scope* scope();
	virtual ::java::nio::Buffer* slice() {return nullptr;}
	virtual ::java::nio::Buffer* slice(int32_t index, int32_t length) {return nullptr;}
	static bool $assertionsDisabled;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
	static const int32_t SPLITERATOR_CHARACTERISTICS = 16464; // Spliterator.SIZED | Spliterator.SUBSIZED | Spliterator.ORDERED
	int32_t mark$ = 0;
	int32_t position$ = 0;
	int32_t limit$ = 0;
	int32_t capacity$ = 0;
	int64_t address = 0;
	::jdk::internal::access::foreign::MemorySegmentProxy* segment = nullptr;
};

	} // nio
} // java

#pragma pop_macro("SCOPED_MEMORY_ACCESS")
#pragma pop_macro("SPLITERATOR_CHARACTERISTICS")
#pragma pop_macro("UNSAFE")

#endif // _java_nio_Buffer_h_