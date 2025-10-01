#ifndef _java_util_stream_Collectors$CollectorImpl_h_
#define _java_util_stream_Collectors$CollectorImpl_h_
//$ class java.util.stream.Collectors$CollectorImpl
//$ extends java.util.stream.Collector

#include <java/util/stream/Collector.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BinaryOperator;
			class Function;
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $import Collectors$CollectorImpl : public ::java::util::stream::Collector {
	$class(Collectors$CollectorImpl, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::Collector)
public:
	Collectors$CollectorImpl();
	void init$(::java::util::function::Supplier* supplier, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BinaryOperator* combiner, ::java::util::function::Function* finisher, ::java::util::Set* characteristics);
	void init$(::java::util::function::Supplier* supplier, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BinaryOperator* combiner, ::java::util::Set* characteristics);
	virtual ::java::util::function::BiConsumer* accumulator() override;
	virtual ::java::util::Set* characteristics() override;
	virtual ::java::util::function::BinaryOperator* combiner() override;
	virtual ::java::util::function::Function* finisher() override;
	virtual ::java::util::function::Supplier* supplier() override;
	::java::util::function::Supplier* supplier$ = nullptr;
	::java::util::function::BiConsumer* accumulator$ = nullptr;
	::java::util::function::BinaryOperator* combiner$ = nullptr;
	::java::util::function::Function* finisher$ = nullptr;
	::java::util::Set* characteristics$ = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Collectors$CollectorImpl_h_