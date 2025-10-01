#ifndef _TypeCheckMicroBenchmark$4_h_
#define _TypeCheckMicroBenchmark$4_h_
//$ class TypeCheckMicroBenchmark$4
//$ extends TypeCheckMicroBenchmark$Job

#include <TypeCheckMicroBenchmark$Job.h>

namespace java {
	namespace util {
		class List;
	}
}

class TypeCheckMicroBenchmark$4 : public ::TypeCheckMicroBenchmark$Job {
	$class(TypeCheckMicroBenchmark$4, $NO_CLASS_INIT, ::TypeCheckMicroBenchmark$Job)
public:
	TypeCheckMicroBenchmark$4();
	void init$($String* name, int32_t val$iterations, ::java::util::List* val$list, $Class* val$klazz);
	virtual void work() override;
	$Class* val$klazz = nullptr;
	::java::util::List* val$list = nullptr;
	int32_t val$iterations = 0;
};

#endif // _TypeCheckMicroBenchmark$4_h_