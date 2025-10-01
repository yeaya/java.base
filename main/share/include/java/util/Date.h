#ifndef _java_util_Date_h_
#define _java_util_Date_h_
//$ class java.util.Date
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable,java.lang.Comparable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace time {
		class Instant;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class BaseCalendar;
			class BaseCalendar$Date;
		}
	}
}

namespace java {
	namespace util {

class $import Date : public ::java::io::Serializable, public ::java::lang::Cloneable, public ::java::lang::Comparable {
	$class(Date, 0, ::java::io::Serializable, ::java::lang::Cloneable, ::java::lang::Comparable)
public:
	Date();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$();
	void init$(int64_t date);
	void init$(int32_t year, int32_t month, int32_t date);
	void init$(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min);
	void init$(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec);
	void init$($String* s);
	static int64_t UTC(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec);
	virtual bool after(::java::util::Date* when);
	virtual bool before(::java::util::Date* when);
	virtual $Object* clone() override;
	virtual int32_t compareTo(::java::util::Date* anotherDate);
	virtual int32_t compareTo(Object$* anotherDate) override;
	static ::java::lang::StringBuilder* convertToAbbr(::java::lang::StringBuilder* sb, $String* name);
	virtual bool equals(Object$* obj) override;
	static ::java::util::Date* from(::java::time::Instant* instant);
	::sun::util::calendar::BaseCalendar$Date* getCalendarDate();
	static ::sun::util::calendar::BaseCalendar* getCalendarSystem(int32_t year);
	static ::sun::util::calendar::BaseCalendar* getCalendarSystem(int64_t utc);
	static ::sun::util::calendar::BaseCalendar* getCalendarSystem(::sun::util::calendar::BaseCalendar$Date* cdate);
	virtual int32_t getDate();
	virtual int32_t getDay();
	virtual int32_t getHours();
	static ::sun::util::calendar::BaseCalendar* getJulianCalendar();
	static int64_t getMillisOf(::java::util::Date* date);
	virtual int32_t getMinutes();
	virtual int32_t getMonth();
	virtual int32_t getSeconds();
	virtual int64_t getTime();
	int64_t getTimeImpl();
	virtual int32_t getTimezoneOffset();
	virtual int32_t getYear();
	virtual int32_t hashCode() override;
	::sun::util::calendar::BaseCalendar$Date* normalize();
	::sun::util::calendar::BaseCalendar$Date* normalize(::sun::util::calendar::BaseCalendar$Date* date);
	static int64_t parse($String* s);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setDate(int32_t date);
	virtual void setHours(int32_t hours);
	virtual void setMinutes(int32_t minutes);
	virtual void setMonth(int32_t month);
	virtual void setSeconds(int32_t seconds);
	virtual void setTime(int64_t time);
	virtual void setYear(int32_t year);
	virtual $String* toGMTString();
	virtual ::java::time::Instant* toInstant();
	virtual $String* toLocaleString();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static ::sun::util::calendar::BaseCalendar* gcal;
	static ::sun::util::calendar::BaseCalendar* jcal;
	int64_t fastTime = 0;
	::sun::util::calendar::BaseCalendar$Date* cdate = nullptr;
	static int32_t defaultCenturyStart;
	static const int64_t serialVersionUID = (int64_t)0x686A81014B597419;
	static $StringArray* wtb;
	static $ints* ttb;
};

	} // util
} // java

#endif // _java_util_Date_h_