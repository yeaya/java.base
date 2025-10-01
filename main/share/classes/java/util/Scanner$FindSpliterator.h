#ifndef _java_util_Scanner$FindSpliterator_h_
#define _java_util_Scanner$FindSpliterator_h_
//$ class java.util.Scanner$FindSpliterator
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
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace util {

class $export Scanner$FindSpliterator : public ::java::util::Spliterators$AbstractSpliterator {
	$class(Scanner$FindSpliterator, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractSpliterator)
public:
	Scanner$FindSpliterator();
	void init$(::java::util::Scanner* this$0, ::java::util::regex::Pattern* pattern);
	bool nextInBuffer();
	virtual bool tryAdvance(::java::util::function::Consumer* cons) override;
	::java::util::Scanner* this$0 = nullptr;
	::java::util::regex::Pattern* pattern = nullptr;
	int32_t expectedCount = 0;
	bool advance = false;
};

	} // util
} // java

#endif // _java_util_Scanner$FindSpliterator_h_