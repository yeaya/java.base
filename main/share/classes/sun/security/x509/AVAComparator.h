#ifndef _sun_security_x509_AVAComparator_h_
#define _sun_security_x509_AVAComparator_h_
//$ class sun.security.x509.AVAComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace sun {
	namespace security {
		namespace x509 {
			class AVA;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class AVAComparator : public ::java::util::Comparator {
	$class(AVAComparator, 0, ::java::util::Comparator)
public:
	AVAComparator();
	void init$();
	virtual int32_t compare(::sun::security::x509::AVA* a1, ::sun::security::x509::AVA* a2);
	virtual int32_t compare(Object$* a1, Object$* a2) override;
	static ::java::util::Comparator* getInstance();
	static ::java::util::Comparator* INSTANCE;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("INSTANCE")

#endif // _sun_security_x509_AVAComparator_h_