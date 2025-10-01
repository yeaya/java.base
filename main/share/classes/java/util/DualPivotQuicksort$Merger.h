#ifndef _java_util_DualPivotQuicksort$Merger_h_
#define _java_util_DualPivotQuicksort$Merger_h_
//$ class java.util.DualPivotQuicksort$Merger
//$ extends java.util.concurrent.CountedCompleter

#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {

class DualPivotQuicksort$Merger : public ::java::util::concurrent::CountedCompleter {
	$class(DualPivotQuicksort$Merger, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	DualPivotQuicksort$Merger();
	void init$(::java::util::concurrent::CountedCompleter* parent, Object$* dst, int32_t k, Object$* a1, int32_t lo1, int32_t hi1, Object$* a2, int32_t lo2, int32_t hi2);
	virtual void compute() override;
	void forkMerger(Object$* dst, int32_t k, Object$* a1, int32_t lo1, int32_t hi1, Object$* a2, int32_t lo2, int32_t hi2);
	static const int64_t serialVersionUID = (int64_t)20180818;
	$Object* dst = nullptr;
	$Object* a1 = nullptr;
	$Object* a2 = nullptr;
	int32_t k = 0;
	int32_t lo1 = 0;
	int32_t hi1 = 0;
	int32_t lo2 = 0;
	int32_t hi2 = 0;
};

	} // util
} // java

#endif // _java_util_DualPivotQuicksort$Merger_h_