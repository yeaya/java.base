#ifndef _sun_security_util_KnownOIDs$3_h_
#define _sun_security_util_KnownOIDs$3_h_
//$ class sun.security.util.KnownOIDs$3
//$ extends sun.security.util.KnownOIDs

#include <java/lang/Array.h>
#include <sun/security/util/KnownOIDs.h>

namespace sun {
	namespace security {
		namespace util {

class KnownOIDs$3 : public ::sun::security::util::KnownOIDs {
	$class(KnownOIDs$3, $NO_CLASS_INIT, ::sun::security::util::KnownOIDs)
public:
	KnownOIDs$3();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases);
	virtual bool registerNames() override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_KnownOIDs$3_h_