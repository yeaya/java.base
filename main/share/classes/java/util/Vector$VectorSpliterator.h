#ifndef _java_util_Vector$VectorSpliterator_h_
#define _java_util_Vector$VectorSpliterator_h_
//$ class java.util.Vector$VectorSpliterator
//$ extends java.util.Spliterator

#include <java/lang/Array.h>
#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class Vector;
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

class $export Vector$VectorSpliterator : public ::java::util::Spliterator {
	$class(Vector$VectorSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Vector$VectorSpliterator();
	void init$(::java::util::Vector* this$0, $ObjectArray* array, int32_t origin, int32_t fence, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t getFence();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::Vector* this$0 = nullptr;
	$ObjectArray* array = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_Vector$VectorSpliterator_h_