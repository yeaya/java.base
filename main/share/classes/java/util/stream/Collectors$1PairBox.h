#ifndef _java_util_stream_Collectors$1PairBox_h_
#define _java_util_stream_Collectors$1PairBox_h_
//$ class java.util.stream.Collectors$1PairBox
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class BinaryOperator;
			class Function;
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Collectors$1PairBox : public ::java::lang::Object {
	$class(Collectors$1PairBox, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Collectors$1PairBox();
	void init$(::java::util::function::Supplier* val$c1Supplier, ::java::util::function::Supplier* val$c2Supplier, ::java::util::function::BiConsumer* val$c1Accumulator, ::java::util::function::BiConsumer* val$c2Accumulator, ::java::util::function::BinaryOperator* val$c1Combiner, ::java::util::function::BinaryOperator* val$c2Combiner, ::java::util::function::Function* val$c1Finisher, ::java::util::function::Function* val$c2Finisher, ::java::util::function::BiFunction* val$merger);
	virtual void add(Object$* t);
	virtual ::java::util::stream::Collectors$1PairBox* combine(::java::util::stream::Collectors$1PairBox* other);
	virtual $Object* get();
	::java::util::function::BiFunction* val$merger = nullptr;
	::java::util::function::Function* val$c2Finisher = nullptr;
	::java::util::function::Function* val$c1Finisher = nullptr;
	::java::util::function::BinaryOperator* val$c2Combiner = nullptr;
	::java::util::function::BinaryOperator* val$c1Combiner = nullptr;
	::java::util::function::BiConsumer* val$c2Accumulator = nullptr;
	::java::util::function::BiConsumer* val$c1Accumulator = nullptr;
	::java::util::function::Supplier* val$c2Supplier = nullptr;
	::java::util::function::Supplier* val$c1Supplier = nullptr;
	$Object* left = nullptr;
	$Object* right = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Collectors$1PairBox_h_