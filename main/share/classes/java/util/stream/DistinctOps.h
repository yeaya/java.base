#ifndef _java_util_stream_DistinctOps_h_
#define _java_util_stream_DistinctOps_h_
//$ class java.util.stream.DistinctOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class ReferencePipeline;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DistinctOps : public ::java::lang::Object {
	$class(DistinctOps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DistinctOps();
	void init$();
	static ::java::util::stream::ReferencePipeline* makeRef(::java::util::stream::AbstractPipeline* upstream);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DistinctOps_h_