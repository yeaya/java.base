#ifndef _java_util_Spliterators$ArraySpliterator_h_
#define _java_util_Spliterators$ArraySpliterator_h_
//$ class java.util.Spliterators$ArraySpliterator
//$ extends java.util.Spliterator

#include <java/lang/Array.h>
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

class $export Spliterators$ArraySpliterator : public ::java::util::Spliterator {
	$class(Spliterators$ArraySpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Spliterators$ArraySpliterator();
	void init$($ObjectArray* array, int32_t additionalCharacteristics);
	void init$($ObjectArray* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	$ObjectArray* array = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t characteristics$ = 0;
};

	} // util
} // java

#endif // _java_util_Spliterators$ArraySpliterator_h_