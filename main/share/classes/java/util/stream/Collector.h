#ifndef _java_util_stream_Collector_h_
#define _java_util_stream_Collector_h_
//$ interface java.util.stream.Collector
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
			class Collector$Characteristics;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class $export Collector : public ::java::lang::Object {
	$interface(Collector, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::function::BiConsumer* accumulator() {return nullptr;}
	virtual ::java::util::Set* characteristics() {return nullptr;}
	virtual ::java::util::function::BinaryOperator* combiner() {return nullptr;}
	virtual ::java::util::function::Function* finisher() {return nullptr;}
	static ::java::util::stream::Collector* of(::java::util::function::Supplier* supplier, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BinaryOperator* combiner, $Array<::java::util::stream::Collector$Characteristics>* characteristics);
	static ::java::util::stream::Collector* of(::java::util::function::Supplier* supplier, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BinaryOperator* combiner, ::java::util::function::Function* finisher, $Array<::java::util::stream::Collector$Characteristics>* characteristics);
	virtual ::java::util::function::Supplier* supplier() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Collector_h_