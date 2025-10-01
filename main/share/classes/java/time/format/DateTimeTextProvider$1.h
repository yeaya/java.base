#ifndef _java_time_format_DateTimeTextProvider$1_h_
#define _java_time_format_DateTimeTextProvider$1_h_
//$ class java.time.format.DateTimeTextProvider$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimeTextProvider$1 : public ::java::util::Comparator {
	$class(DateTimeTextProvider$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	DateTimeTextProvider$1();
	void init$();
	virtual int32_t compare(::java::util::Map$Entry* obj1, ::java::util::Map$Entry* obj2);
	virtual int32_t compare(Object$* obj1, Object$* obj2) override;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeTextProvider$1_h_