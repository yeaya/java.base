#ifndef _TypeCheckMicroBenchmark$2_h_
#define _TypeCheckMicroBenchmark$2_h_
//$ class TypeCheckMicroBenchmark$2
//$ extends TypeCheckMicroBenchmark$Job

#include <TypeCheckMicroBenchmark$Job.h>

namespace java {
	namespace util {
		class List;
	}
}

class TypeCheckMicroBenchmark$2 : public ::TypeCheckMicroBenchmark$Job {
	$class(TypeCheckMicroBenchmark$2, $NO_CLASS_INIT, ::TypeCheckMicroBenchmark$Job)
public:
	TypeCheckMicroBenchmark$2();
	void init$($String* name, int32_t val$iterations, ::java::util::List* val$list);
	virtual void work() override;
	::java::util::List* val$list = nullptr;
	int32_t val$iterations = 0;
};

#endif // _TypeCheckMicroBenchmark$2_h_