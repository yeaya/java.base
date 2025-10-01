#ifndef _java_util_Scanner$TokenSpliterator_h_
#define _java_util_Scanner$TokenSpliterator_h_
//$ class java.util.Scanner$TokenSpliterator
//$ extends java.util.Spliterators$AbstractSpliterator

#include <java/util/Spliterators$AbstractSpliterator.h>

namespace java {
	namespace util {
		class Scanner;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class $import Scanner$TokenSpliterator : public ::java::util::Spliterators$AbstractSpliterator {
	$class(Scanner$TokenSpliterator, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractSpliterator)
public:
	Scanner$TokenSpliterator();
	void init$(::java::util::Scanner* this$0);
	virtual bool tryAdvance(::java::util::function::Consumer* cons) override;
	::java::util::Scanner* this$0 = nullptr;
	int32_t expectedCount = 0;
};

	} // util
} // java

#endif // _java_util_Scanner$TokenSpliterator_h_