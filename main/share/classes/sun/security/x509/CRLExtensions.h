#ifndef _sun_security_x509_CRLExtensions_h_
#define _sun_security_x509_CRLExtensions_h_
//$ class sun.security.x509.CRLExtensions
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PARAMS")
#undef PARAMS

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class Extension;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CRLExtensions : public ::java::lang::Object {
	$class(CRLExtensions, 0, ::java::lang::Object)
public:
	CRLExtensions();
	void init$();
	void init$(::sun::security::util::DerInputStream* in);
	virtual void delete$($String* alias);
	virtual void encode(::java::io::OutputStream* out, bool isExplicit);
	virtual bool equals(Object$* other) override;
	virtual ::sun::security::x509::Extension* get($String* alias);
	virtual ::java::util::Collection* getAllExtensions();
	virtual ::java::util::Enumeration* getElements();
	virtual bool hasUnsupportedCriticalExtension();
	virtual int32_t hashCode() override;
	void init(::sun::security::util::DerInputStream* derStrm);
	void parseExtension(::sun::security::x509::Extension* ext);
	virtual void set($String* alias, Object$* obj);
	virtual $String* toString() override;
	::java::util::Map* map = nullptr;
	bool unsupportedCritExt = false;
	static $ClassArray* PARAMS;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("PARAMS")

#endif // _sun_security_x509_CRLExtensions_h_