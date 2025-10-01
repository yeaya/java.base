#ifndef _java_util_Collections$2_h_
#define _java_util_Collections$2_h_
//$ class java.util.Collections$2
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class Collections$2 : public ::java::util::Spliterator {
	$class(Collections$2, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Collections$2();
	void init$(Object$* val$element);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	$Object* val$element = nullptr;
	int64_t est = 0;
};

	} // util
} // java

#endif // _java_util_Collections$2_h_