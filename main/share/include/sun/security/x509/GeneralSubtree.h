#ifndef _sun_security_x509_GeneralSubtree_h_
#define _sun_security_x509_GeneralSubtree_h_
//$ class sun.security.x509.GeneralSubtree
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MIN_DEFAULT")
#undef MIN_DEFAULT
#pragma push_macro("TAG_MAX")
#undef TAG_MAX
#pragma push_macro("TAG_MIN")
#undef TAG_MIN

namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class GeneralName;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import GeneralSubtree : public ::java::lang::Object {
	$class(GeneralSubtree, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GeneralSubtree();
	void init$(::sun::security::x509::GeneralName* name, int32_t min, int32_t max);
	void init$(::sun::security::util::DerValue* val);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual int32_t getMaximum();
	virtual int32_t getMinimum();
	virtual ::sun::security::x509::GeneralName* getName();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int8_t TAG_MIN = 0;
	static const int8_t TAG_MAX = 1;
	static const int32_t MIN_DEFAULT = 0;
	::sun::security::x509::GeneralName* name = nullptr;
	int32_t minimum = 0;
	int32_t maximum = 0;
	int32_t myhash = 0;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("MIN_DEFAULT")
#pragma pop_macro("TAG_MAX")
#pragma pop_macro("TAG_MIN")

#endif // _sun_security_x509_GeneralSubtree_h_