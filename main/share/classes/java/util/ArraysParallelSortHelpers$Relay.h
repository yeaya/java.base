#ifndef _java_util_ArraysParallelSortHelpers$Relay_h_
#define _java_util_ArraysParallelSortHelpers$Relay_h_
//$ class java.util.ArraysParallelSortHelpers$Relay
//$ extends java.util.concurrent.CountedCompleter

#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {

class ArraysParallelSortHelpers$Relay : public ::java::util::concurrent::CountedCompleter {
	$class(ArraysParallelSortHelpers$Relay, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ArraysParallelSortHelpers$Relay();
	void init$(::java::util::concurrent::CountedCompleter* task);
	virtual void compute() override;
	virtual void onCompletion(::java::util::concurrent::CountedCompleter* t) override;
	static const int64_t serialVersionUID = (int64_t)0x21F3DDCE4497AB4C;
	::java::util::concurrent::CountedCompleter* task = nullptr;
};

	} // util
} // java

#endif // _java_util_ArraysParallelSortHelpers$Relay_h_