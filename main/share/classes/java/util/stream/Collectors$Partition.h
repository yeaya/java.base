#ifndef _java_util_stream_Collectors$Partition_h_
#define _java_util_stream_Collectors$Partition_h_
//$ class java.util.stream.Collectors$Partition
//$ extends java.util.AbstractMap

#include <java/util/AbstractMap.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Collectors$Partition : public ::java::util::AbstractMap {
	$class(Collectors$Partition, $NO_CLASS_INIT, ::java::util::AbstractMap)
public:
	Collectors$Partition();
	void init$(Object$* forTrue, Object$* forFalse);
	virtual ::java::util::Set* entrySet() override;
	using ::java::util::AbstractMap::remove;
	$Object* forTrue = nullptr;
	$Object* forFalse = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Collectors$Partition_h_