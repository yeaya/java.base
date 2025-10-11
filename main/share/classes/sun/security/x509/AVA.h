#ifndef _sun_security_x509_AVA_h_
#define _sun_security_x509_AVA_h_
//$ class sun.security.x509.AVA
//$ extends sun.security.util.DerEncoder

#include <sun/security/util/DerEncoder.h>

#pragma push_macro("PRESERVE_OLD_DC_ENCODING")
#undef PRESERVE_OLD_DC_ENCODING
#pragma push_macro("AVA")
#undef AVA
#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace java {
	namespace io {
		class OutputStream;
		class Reader;
	}
}
namespace java {
	namespace lang {
		class Byte;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DerInputStream;
			class DerOutputStream;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export AVA : public ::sun::security::util::DerEncoder {
	$class(AVA, 0, ::sun::security::util::DerEncoder)
public:
	AVA();
	void init$(::sun::security::util::ObjectIdentifier* type, ::sun::security::util::DerValue* val);
	void init$(::java::io::Reader* in);
	void init$(::java::io::Reader* in, ::java::util::Map* keywordMap);
	void init$(::java::io::Reader* in, int32_t format);
	void init$(::java::io::Reader* in, int32_t format, ::java::util::Map* keywordMap);
	void init$(::sun::security::util::DerValue* derval);
	void init$(::sun::security::util::DerInputStream* in);
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	virtual ::sun::security::util::DerValue* getDerValue();
	static ::java::lang::Byte* getEmbeddedHexPair(int32_t c1, ::java::io::Reader* in);
	static $String* getEmbeddedHexString(::java::util::List* hexList);
	virtual ::sun::security::util::ObjectIdentifier* getObjectIdentifier();
	virtual $String* getValueString();
	virtual bool hasRFC2253Keyword();
	virtual int32_t hashCode() override;
	static bool isDerString(::sun::security::util::DerValue* value, bool canonical);
	static bool isTerminator(int32_t ch, int32_t format);
	static ::sun::security::util::DerValue* parseHexString(::java::io::Reader* in, int32_t format);
	::sun::security::util::DerValue* parseQuotedString(::java::io::Reader* in, ::java::lang::StringBuilder* temp);
	::sun::security::util::DerValue* parseString(::java::io::Reader* in, int32_t c, int32_t format, ::java::lang::StringBuilder* temp);
	static int32_t readChar(::java::io::Reader* in, $String* errMsg);
	$String* toKeyword(int32_t format, ::java::util::Map* oidMap);
	$String* toKeywordValueString($String* keyword);
	virtual $String* toRFC1779String();
	virtual $String* toRFC1779String(::java::util::Map* oidMap);
	virtual $String* toRFC2253CanonicalString();
	virtual $String* toRFC2253String();
	virtual $String* toRFC2253String(::java::util::Map* oidMap);
	virtual $String* toString() override;
	static bool trailingSpace(::java::io::Reader* in);
	static ::sun::security::util::Debug* debug;
	static bool PRESERVE_OLD_DC_ENCODING;
	static const int32_t DEFAULT = 1;
	static const int32_t RFC1779 = 2;
	static const int32_t RFC2253 = 3;
	::sun::security::util::ObjectIdentifier* oid = nullptr;
	::sun::security::util::DerValue* value = nullptr;
	static $String* specialChars1779;
	static $String* specialChars2253;
	static $String* specialCharsDefault;
	static $String* escapedDefault;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("PRESERVE_OLD_DC_ENCODING")
#pragma pop_macro("AVA")
#pragma pop_macro("DEFAULT")

#endif // _sun_security_x509_AVA_h_