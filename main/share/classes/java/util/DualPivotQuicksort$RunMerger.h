#ifndef _java_util_DualPivotQuicksort$RunMerger_h_
#define _java_util_DualPivotQuicksort$RunMerger_h_
//$ class java.util.DualPivotQuicksort$RunMerger
//$ extends java.util.concurrent.RecursiveTask

#include <java/lang/Array.h>
#include <java/util/concurrent/RecursiveTask.h>

namespace java {
	namespace util {

class DualPivotQuicksort$RunMerger : public ::java::util::concurrent::RecursiveTask {
	$class(DualPivotQuicksort$RunMerger, $NO_CLASS_INIT, ::java::util::concurrent::RecursiveTask)
public:
	DualPivotQuicksort$RunMerger();
	void init$(Object$* a, Object$* b, int32_t offset, int32_t aim, $ints* run, int32_t lo, int32_t hi);
	virtual $Object* compute() override;
	::java::util::DualPivotQuicksort$RunMerger* forkMe();
	$Object* getDestination();
	static const int64_t serialVersionUID = (int64_t)20180818;
	$Object* a = nullptr;
	$Object* b = nullptr;
	$ints* run = nullptr;
	int32_t offset = 0;
	int32_t aim = 0;
	int32_t lo = 0;
	int32_t hi = 0;
};

	} // util
} // java

#endif // _java_util_DualPivotQuicksort$RunMerger_h_