#ifndef _TypeCheckMicroBenchmark$5_h_
#define _TypeCheckMicroBenchmark$5_h_
//$ class TypeCheckMicroBenchmark$5
//$ extends TypeCheckMicroBenchmark$Job

#include <TypeCheckMicroBenchmark$Job.h>

namespace java {
	namespace util {
		class List;
	}
}

class TypeCheckMicroBenchmark$5 : public ::TypeCheckMicroBenchmark$Job {
	$class(TypeCheckMicroBenchmark$5, $NO_CLASS_INIT, ::TypeCheckMicroBenchmark$Job)
public:
	TypeCheckMicroBenchmark$5();
	void init$($String* name, int32_t val$iterations, ::java::util::List* val$list);
	virtual void work() override;
	::java::util::List* val$list = nullptr;
	int32_t val$iterations = 0;
};

#endif // _TypeCheckMicroBenchmark$5_h_