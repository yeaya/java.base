#ifndef _java_util_ArraysParallelSortHelpers$FJObject$Merger_h_
#define _java_util_ArraysParallelSortHelpers$FJObject$Merger_h_
//$ class java.util.ArraysParallelSortHelpers$FJObject$Merger
//$ extends java.util.concurrent.CountedCompleter

#include <java/lang/Array.h>
#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace util {

class ArraysParallelSortHelpers$FJObject$Merger : public ::java::util::concurrent::CountedCompleter {
	$class(ArraysParallelSortHelpers$FJObject$Merger, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ArraysParallelSortHelpers$FJObject$Merger();
	void init$(::java::util::concurrent::CountedCompleter* par, $ObjectArray* a, $ObjectArray* w, int32_t lbase, int32_t lsize, int32_t rbase, int32_t rsize, int32_t wbase, int32_t gran, ::java::util::Comparator* comparator);
	virtual void compute() override;
	static const int64_t serialVersionUID = (int64_t)0x21F3DDCE4497AB4C;
	$ObjectArray* a = nullptr;
	$ObjectArray* w = nullptr;
	int32_t lbase = 0;
	int32_t lsize = 0;
	int32_t rbase = 0;
	int32_t rsize = 0;
	int32_t wbase = 0;
	int32_t gran = 0;
	::java::util::Comparator* comparator = nullptr;
};

	} // util
} // java

#endif // _java_util_ArraysParallelSortHelpers$FJObject$Merger_h_