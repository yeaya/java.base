#ifndef _sun_security_x509_GeneralNames_h_
#define _sun_security_x509_GeneralNames_h_
//$ class sun.security.x509.GeneralNames
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
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

class $export GeneralNames : public ::java::lang::Object {
	$class(GeneralNames, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GeneralNames();
	void init$(::sun::security::util::DerValue* derVal);
	void init$();
	virtual ::sun::security::x509::GeneralNames* add(::sun::security::x509::GeneralName* name);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	virtual ::sun::security::x509::GeneralName* get(int32_t index);
	virtual int32_t hashCode() override;
	virtual bool isEmpty();
	virtual ::java::util::Iterator* iterator();
	virtual ::java::util::List* names();
	virtual int32_t size();
	virtual $String* toString() override;
	::java::util::List* names$ = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_GeneralNames_h_