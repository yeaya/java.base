#ifndef _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_h_
#define _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_h_
//$ class java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

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

class Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator : public ::java::util::Spliterator {
	$class(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator();
	void init$(::java::util::Spliterator* s);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::Spliterator* s = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator_h_