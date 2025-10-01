#ifndef _java_nio_CharBufferSpliterator_h_
#define _java_nio_CharBufferSpliterator_h_
//$ class java.nio.CharBufferSpliterator
//$ extends java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>

namespace java {
	namespace nio {
		class CharBuffer;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}

namespace java {
	namespace nio {

class CharBufferSpliterator : public ::java::util::Spliterator$OfInt {
	$class(CharBufferSpliterator, 0, ::java::util::Spliterator$OfInt)
public:
	CharBufferSpliterator();
	using ::java::util::Spliterator$OfInt::forEachRemaining;
	void init$(::java::nio::CharBuffer* buffer);
	void init$(::java::nio::CharBuffer* buffer, int32_t origin, int32_t limit);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	using ::java::util::Spliterator$OfInt::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override;
	static bool $assertionsDisabled;
	::java::nio::CharBuffer* buffer = nullptr;
	int32_t index = 0;
	int32_t limit = 0;
};

	} // nio
} // java

#endif // _java_nio_CharBufferSpliterator_h_