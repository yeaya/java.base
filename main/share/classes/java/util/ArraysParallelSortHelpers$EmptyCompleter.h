#ifndef _java_util_ArraysParallelSortHelpers$EmptyCompleter_h_
#define _java_util_ArraysParallelSortHelpers$EmptyCompleter_h_
//$ class java.util.ArraysParallelSortHelpers$EmptyCompleter
//$ extends java.util.concurrent.CountedCompleter

#include <java/util/concurrent/CountedCompleter.h>

namespace java {
	namespace util {

class ArraysParallelSortHelpers$EmptyCompleter : public ::java::util::concurrent::CountedCompleter {
	$class(ArraysParallelSortHelpers$EmptyCompleter, $NO_CLASS_INIT, ::java::util::concurrent::CountedCompleter)
public:
	ArraysParallelSortHelpers$EmptyCompleter();
	void init$(::java::util::concurrent::CountedCompleter* p);
	virtual void compute() override;
	static const int64_t serialVersionUID = (int64_t)0x21F3DDCE4497AB4C;
};

	} // util
} // java

#endif // _java_util_ArraysParallelSortHelpers$EmptyCompleter_h_