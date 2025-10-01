#ifndef _java_util_stream_Collectors$1OptionalBox_h_
#define _java_util_stream_Collectors$1OptionalBox_h_
//$ class java.util.stream.Collectors$1OptionalBox
//$ extends java.util.function.Consumer

#include <java/util/function/Consumer.h>

namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Collectors$1OptionalBox : public ::java::util::function::Consumer {
	$class(Collectors$1OptionalBox, $NO_CLASS_INIT, ::java::util::function::Consumer)
public:
	Collectors$1OptionalBox();
	void init$(::java::util::function::BinaryOperator* val$op);
	virtual void accept(Object$* t) override;
	::java::util::function::BinaryOperator* val$op = nullptr;
	$Object* value = nullptr;
	bool present = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Collectors$1OptionalBox_h_