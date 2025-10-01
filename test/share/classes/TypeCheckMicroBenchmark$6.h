#ifndef _TypeCheckMicroBenchmark$6_h_
#define _TypeCheckMicroBenchmark$6_h_
//$ class TypeCheckMicroBenchmark$6
//$ extends TypeCheckMicroBenchmark$Job

#include <TypeCheckMicroBenchmark$Job.h>

namespace java {
	namespace util {
		class List;
	}
}

class TypeCheckMicroBenchmark$6 : public ::TypeCheckMicroBenchmark$Job {
	$class(TypeCheckMicroBenchmark$6, $NO_CLASS_INIT, ::TypeCheckMicroBenchmark$Job)
public:
	TypeCheckMicroBenchmark$6();
	void init$($String* name, int32_t val$iterations, ::java::util::List* val$list, $Class* val$klazz);
	virtual void work() override;
	$Class* val$klazz = nullptr;
	::java::util::List* val$list = nullptr;
	int32_t val$iterations = 0;
};

#endif // _TypeCheckMicroBenchmark$6_h_