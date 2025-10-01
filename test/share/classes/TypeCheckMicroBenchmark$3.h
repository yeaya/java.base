#ifndef _TypeCheckMicroBenchmark$3_h_
#define _TypeCheckMicroBenchmark$3_h_
//$ class TypeCheckMicroBenchmark$3
//$ extends TypeCheckMicroBenchmark$Job

#include <TypeCheckMicroBenchmark$Job.h>

namespace java {
	namespace util {
		class List;
	}
}

class TypeCheckMicroBenchmark$3 : public ::TypeCheckMicroBenchmark$Job {
	$class(TypeCheckMicroBenchmark$3, $NO_CLASS_INIT, ::TypeCheckMicroBenchmark$Job)
public:
	TypeCheckMicroBenchmark$3();
	void init$($String* name, int32_t val$iterations, ::java::util::List* val$list, $Class* val$klazz);
	virtual void work() override;
	$Class* val$klazz = nullptr;
	::java::util::List* val$list = nullptr;
	int32_t val$iterations = 0;
};

#endif // _TypeCheckMicroBenchmark$3_h_