#ifndef _java_nio_ByteBufferAsCharBufferRL_h_
#define _java_nio_ByteBufferAsCharBufferRL_h_
//$ class java.nio.ByteBufferAsCharBufferRL
//$ extends java.nio.ByteBufferAsCharBufferL

#include <java/nio/ByteBufferAsCharBufferL.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
		class CharBuffer;
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

namespace java {
	namespace nio {

class ByteBufferAsCharBufferRL : public ::java::nio::ByteBufferAsCharBufferL {
	$class(ByteBufferAsCharBufferRL, 0, ::java::nio::ByteBufferAsCharBufferL)
public:
	ByteBufferAsCharBufferRL();
	using ::java::nio::ByteBufferAsCharBufferL::get;
	using ::java::nio::ByteBufferAsCharBufferL::limit;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::CharBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::ByteOrder* charRegionOrder() override;
	virtual ::java::nio::CharBuffer* compact() override;
	virtual ::java::nio::CharBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ByteBufferAsCharBufferL::put;
	using ::java::nio::ByteBufferAsCharBufferL::position;
	virtual ::java::nio::CharBuffer* put(char16_t x) override;
	virtual ::java::nio::CharBuffer* put(int32_t i, char16_t x) override;
	virtual ::java::nio::CharBuffer* slice() override;
	virtual ::java::nio::CharBuffer* slice(int32_t index, int32_t length) override;
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	using ::java::nio::ByteBufferAsCharBufferL::toString;
	virtual $String* toString(int32_t start, int32_t end) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsCharBufferRL_h_