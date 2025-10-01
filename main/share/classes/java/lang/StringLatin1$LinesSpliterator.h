#ifndef _java_lang_StringLatin1$LinesSpliterator_h_
#define _java_lang_StringLatin1$LinesSpliterator_h_
//$ class java.lang.StringLatin1$LinesSpliterator
//$ extends java.util.Spliterator

#include <java/lang/Array.h>
#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace lang {

class StringLatin1$LinesSpliterator : public ::java::util::Spliterator {
	$class(StringLatin1$LinesSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	StringLatin1$LinesSpliterator();
	void init$($bytes* value, int32_t start, int32_t length);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t indexOfLineSeparator(int32_t start);
	$String* next();
	int32_t skipLineSeparator(int32_t start);
	static ::java::lang::StringLatin1$LinesSpliterator* spliterator($bytes* value);
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	$bytes* value = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
};

	} // lang
} // java

#endif // _java_lang_StringLatin1$LinesSpliterator_h_