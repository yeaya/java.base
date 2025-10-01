#ifndef _java_lang_StringUTF16$CodePointsSpliterator_h_
#define _java_lang_StringUTF16$CodePointsSpliterator_h_
//$ class java.lang.StringUTF16$CodePointsSpliterator
//$ extends java.util.Spliterator$OfInt

#include <java/lang/Array.h>
#include <java/util/Spliterator$OfInt.h>

namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
		}
	}
}

namespace java {
	namespace lang {

class StringUTF16$CodePointsSpliterator : public ::java::util::Spliterator$OfInt {
	$class(StringUTF16$CodePointsSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfInt)
public:
	StringUTF16$CodePointsSpliterator();
	using ::java::util::Spliterator$OfInt::forEachRemaining;
	void init$($bytes* array, int32_t acs);
	void init$($bytes* array, int32_t origin, int32_t fence, int32_t acs);
	static int32_t advance($bytes* a, int32_t i, int32_t hi, ::java::util::function::IntConsumer* action);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
	virtual void forEachRemaining(Object$* action) override;
	using ::java::util::Spliterator$OfInt::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator$OfInt* trySplit() override;
	$bytes* array = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t cs = 0;
};

	} // lang
} // java

#endif // _java_lang_StringUTF16$CodePointsSpliterator_h_