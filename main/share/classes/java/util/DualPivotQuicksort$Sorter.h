#ifndef _java_util_DualPivotQuicksort$Sorter_h_
#define _java_util_DualPivotQuicksort$Sorter_h_
//$ class java.util.DualPivotQuicksort$Sorter
//$ extends java.util.concurrent.CountedCompleter

#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {

class DualPivotQuicksort$Sorter : public ::java::util::concurrent::CountedCompleter {
	$class(DualPivotQuicksort$Sorter, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	DualPivotQuicksort$Sorter();
	void init$(::java::util::concurrent::CountedCompleter* parent, Object$* a, Object$* b, int32_t low, int32_t size, int32_t offset, int32_t depth);
	virtual void compute() override;
	void forkSorter(int32_t depth, int32_t low, int32_t high);
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* caller) override;
	static const int64_t serialVersionUID = (int64_t)20180818;
	$Object* a = nullptr;
	$Object* b = nullptr;
	int32_t low = 0;
	int32_t size = 0;
	int32_t offset = 0;
	int32_t depth = 0;
};

	} // util
} // java

#endif // _java_util_DualPivotQuicksort$Sorter_h_