#ifndef _sun_util_BuddhistCalendar_h_
#define _sun_util_BuddhistCalendar_h_
//$ class sun.util.BuddhistCalendar
//$ extends java.util.GregorianCalendar

#include <java/util/GregorianCalendar.h>

#pragma push_macro("BUDDHIST_YEAR_OFFSET")
#undef BUDDHIST_YEAR_OFFSET

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
		class TimeZone;
	}
}

namespace sun {
	namespace util {

class BuddhistCalendar : public ::java::util::GregorianCalendar {
	$class(BuddhistCalendar, $NO_CLASS_INIT, ::java::util::GregorianCalendar)
public:
	BuddhistCalendar();
	void init$();
	void init$(::java::util::TimeZone* zone);
	void init$(::java::util::Locale* aLocale);
	void init$(::java::util::TimeZone* zone, ::java::util::Locale* aLocale);
	virtual void add(int32_t field, int32_t amount) override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t get(int32_t field) override;
	virtual int32_t getActualMaximum(int32_t field) override;
	virtual $String* getCalendarType() override;
	virtual $String* getDisplayName(int32_t field, int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::util::Map* getDisplayNames(int32_t field, int32_t style, ::java::util::Locale* locale) override;
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* stream);
	using ::java::util::GregorianCalendar::roll;
	virtual void roll(int32_t field, int32_t amount) override;
	using ::java::util::GregorianCalendar::set;
	virtual void set(int32_t field, int32_t value) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x89A84635D845849E;
	static const int32_t BUDDHIST_YEAR_OFFSET = 543;
	int32_t yearOffset = 0;
};

	} // util
} // sun

#pragma pop_macro("BUDDHIST_YEAR_OFFSET")

#endif // _sun_util_BuddhistCalendar_h_