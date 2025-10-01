#ifndef _sun_security_util_Event$ReporterCategory_h_
#define _sun_security_util_Event$ReporterCategory_h_
//$ class sun.security.util.Event$ReporterCategory
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CRLCHECK")
#undef CRLCHECK
#pragma push_macro("ZIPFILEATTRS")
#undef ZIPFILEATTRS

namespace sun {
	namespace security {
		namespace util {
			class Event$Reporter;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import Event$ReporterCategory : public ::java::lang::Enum {
	$class(Event$ReporterCategory, 0, ::java::lang::Enum)
public:
	Event$ReporterCategory();
	static $Array<::sun::security::util::Event$ReporterCategory>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::security::util::Event$ReporterCategory* valueOf($String* name);
	static $Array<::sun::security::util::Event$ReporterCategory>* values();
	static ::sun::security::util::Event$ReporterCategory* CRLCHECK;
	static ::sun::security::util::Event$ReporterCategory* ZIPFILEATTRS;
	static $Array<::sun::security::util::Event$ReporterCategory>* $VALUES;
	::sun::security::util::Event$Reporter* reporter = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("CRLCHECK")
#pragma pop_macro("ZIPFILEATTRS")

#endif // _sun_security_util_Event$ReporterCategory_h_