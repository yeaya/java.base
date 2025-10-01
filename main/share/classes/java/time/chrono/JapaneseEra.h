#ifndef _java_time_chrono_JapaneseEra_h_
#define _java_time_chrono_JapaneseEra_h_
//$ class java.time.chrono.JapaneseEra
//$ extends java.time.chrono.Era
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/time/chrono/Era.h>

#pragma push_macro("HEISEI")
#undef HEISEI
#pragma push_macro("ERA_OFFSET")
#undef ERA_OFFSET
#pragma push_macro("TAISHO")
#undef TAISHO
#pragma push_macro("REIWA")
#undef REIWA
#pragma push_macro("KNOWN_ERAS")
#undef KNOWN_ERAS
#pragma push_macro("SHOWA")
#undef SHOWA
#pragma push_macro("ERA_CONFIG")
#undef ERA_CONFIG
#pragma push_macro("MEIJI")
#undef MEIJI
#pragma push_macro("N_ERA_CONSTANTS")
#undef N_ERA_CONSTANTS

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class LocalDate;
	}
}
namespace java {
	namespace time {
		namespace format {
			class TextStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
			class ValueRange;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class Era;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $export JapaneseEra : public ::java::time::chrono::Era, public ::java::io::Serializable {
	$class(JapaneseEra, 0, ::java::time::chrono::Era, ::java::io::Serializable)
public:
	JapaneseEra();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t eraValue, ::java::time::LocalDate* since);
	static ::java::time::chrono::JapaneseEra* from(::java::time::LocalDate* date);
	$String* getAbbreviation();
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	$String* getName();
	::sun::util::calendar::Era* getPrivateEra();
	virtual int32_t getValue() override;
	static ::java::time::chrono::JapaneseEra* of(int32_t japaneseEra);
	static int32_t ordinal(int32_t eraValue);
	static ::sun::util::calendar::Era* privateEraFrom(::java::time::LocalDate* isoDate);
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::chrono::JapaneseEra* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	static ::java::time::chrono::JapaneseEra* toJapaneseEra(::sun::util::calendar::Era* privateEra);
	virtual $String* toString() override;
	static ::java::time::chrono::JapaneseEra* valueOf($String* japaneseEra);
	static $Array<::java::time::chrono::JapaneseEra>* values();
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int32_t ERA_OFFSET = 2;
	static $Array<::sun::util::calendar::Era>* ERA_CONFIG;
	static ::java::time::chrono::JapaneseEra* MEIJI;
	static ::java::time::chrono::JapaneseEra* TAISHO;
	static ::java::time::chrono::JapaneseEra* SHOWA;
	static ::java::time::chrono::JapaneseEra* HEISEI;
	static ::java::time::chrono::JapaneseEra* REIWA;
	static int32_t N_ERA_CONSTANTS;
	static const int64_t serialVersionUID = (int64_t)0x145A0D680453ED8A;
	static $Array<::java::time::chrono::JapaneseEra>* KNOWN_ERAS;
	int32_t eraValue = 0;
	::java::time::LocalDate* since = nullptr;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("HEISEI")
#pragma pop_macro("ERA_OFFSET")
#pragma pop_macro("TAISHO")
#pragma pop_macro("REIWA")
#pragma pop_macro("KNOWN_ERAS")
#pragma pop_macro("SHOWA")
#pragma pop_macro("ERA_CONFIG")
#pragma pop_macro("MEIJI")
#pragma pop_macro("N_ERA_CONSTANTS")

#endif // _java_time_chrono_JapaneseEra_h_