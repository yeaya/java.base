#ifndef _sun_security_util_KnownOIDs$10_h_
#define _sun_security_util_KnownOIDs$10_h_
//$ class sun.security.util.KnownOIDs$10
//$ extends sun.security.util.KnownOIDs

#include <java/lang/Array.h>
#include <sun/security/util/KnownOIDs.h>

namespace sun {
	namespace security {
		namespace util {

class KnownOIDs$10 : public ::sun::security::util::KnownOIDs {
	$class(KnownOIDs$10, $NO_CLASS_INIT, ::sun::security::util::KnownOIDs)
public:
	KnownOIDs$10();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases);
	virtual bool registerNames() override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_KnownOIDs$10_h_