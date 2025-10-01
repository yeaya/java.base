#ifndef _java_util_stream_Collectors$Partition$1_h_
#define _java_util_stream_Collectors$Partition$1_h_
//$ class java.util.stream.Collectors$Partition$1
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Collectors$Partition;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Collectors$Partition$1 : public ::java::util::AbstractSet {
	$class(Collectors$Partition$1, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	Collectors$Partition$1();
	void init$(::java::util::stream::Collectors$Partition* this$0);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::stream::Collectors$Partition* this$0 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Collectors$Partition$1_h_