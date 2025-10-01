#ifndef _java_util_LinkedList$LLSpliterator_h_
#define _java_util_LinkedList$LLSpliterator_h_
//$ class java.util.LinkedList$LLSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {
		class LinkedList;
		class LinkedList$Node;
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

class $import LinkedList$LLSpliterator : public ::java::util::Spliterator {
	$class(LinkedList$LLSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	LinkedList$LLSpliterator();
	void init$(::java::util::LinkedList* list, int32_t est, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	int32_t getEst();
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	static const int32_t BATCH_UNIT = 1024; // 1 << 10
	static const int32_t MAX_BATCH = 33554432; // 1 << 25
	::java::util::LinkedList* list = nullptr;
	::java::util::LinkedList$Node* current = nullptr;
	int32_t est = 0;
	int32_t expectedModCount = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_LinkedList$LLSpliterator_h_