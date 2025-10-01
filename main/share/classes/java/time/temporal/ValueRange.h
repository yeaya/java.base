#ifndef _java_time_temporal_ValueRange_h_
#define _java_time_temporal_ValueRange_h_
//$ class java.time.temporal.ValueRange
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export ValueRange : public ::java::io::Serializable {
	$class(ValueRange, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ValueRange();
	void init$(int64_t minSmallest, int64_t minLargest, int64_t maxSmallest, int64_t maxLargest);
	int32_t checkValidIntValue(int64_t value, ::java::time::temporal::TemporalField* field);
	int64_t checkValidValue(int64_t value, ::java::time::temporal::TemporalField* field);
	virtual bool equals(Object$* obj) override;
	$String* genInvalidFieldMessage(::java::time::temporal::TemporalField* field, int64_t value);
	int64_t getLargestMinimum();
	int64_t getMaximum();
	int64_t getMinimum();
	int64_t getSmallestMaximum();
	virtual int32_t hashCode() override;
	bool isFixed();
	bool isIntValue();
	bool isValidIntValue(int64_t value);
	bool isValidValue(int64_t value);
	static ::java::time::temporal::ValueRange* of(int64_t min, int64_t max);
	static ::java::time::temporal::ValueRange* of(int64_t min, int64_t maxSmallest, int64_t maxLargest);
	static ::java::time::temporal::ValueRange* of(int64_t minSmallest, int64_t minLargest, int64_t maxSmallest, int64_t maxLargest);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x9A71A956F2CD5AB8;
	int64_t minSmallest = 0;
	int64_t minLargest = 0;
	int64_t maxSmallest = 0;
	int64_t maxLargest = 0;
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_ValueRange_h_