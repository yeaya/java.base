#ifndef _sun_security_pkcs_ContentInfo_h_
#define _sun_security_pkcs_ContentInfo_h_
//$ class sun.security.pkcs.ContentInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OLD_SIGNED_DATA_OID")
#undef OLD_SIGNED_DATA_OID
#pragma push_macro("PKCS7_OID")
#undef PKCS7_OID
#pragma push_macro("TIMESTAMP_TOKEN_INFO_OID")
#undef TIMESTAMP_TOKEN_INFO_OID
#pragma push_macro("SIGNED_AND_ENVELOPED_DATA_OID")
#undef SIGNED_AND_ENVELOPED_DATA_OID
#pragma push_macro("DIGESTED_DATA_OID")
#undef DIGESTED_DATA_OID
#pragma push_macro("ENCRYPTED_DATA_OID")
#undef ENCRYPTED_DATA_OID
#pragma push_macro("OLD_DATA_OID")
#undef OLD_DATA_OID
#pragma push_macro("NETSCAPE_CERT_SEQUENCE_OID")
#undef NETSCAPE_CERT_SEQUENCE_OID
#pragma push_macro("SIGNED_DATA_OID")
#undef SIGNED_DATA_OID
#pragma push_macro("DATA_OID")
#undef DATA_OID
#pragma push_macro("ENVELOPED_DATA_OID")
#undef ENVELOPED_DATA_OID

namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
			class DerOutputStream;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class $export ContentInfo : public ::java::lang::Object {
	$class(ContentInfo, 0, ::java::lang::Object)
public:
	ContentInfo();
	void init$(::sun::security::util::ObjectIdentifier* contentType, ::sun::security::util::DerValue* content);
	void init$($bytes* bytes);
	void init$(::sun::security::util::DerInputStream* derin);
	void init$(::sun::security::util::DerInputStream* derin, bool oldStyle);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual ::sun::security::util::DerValue* getContent();
	virtual $bytes* getContentBytes();
	virtual ::sun::security::util::ObjectIdentifier* getContentType();
	virtual $bytes* getData();
	virtual $String* toString() override;
	static ::sun::security::util::ObjectIdentifier* PKCS7_OID;
	static ::sun::security::util::ObjectIdentifier* DATA_OID;
	static ::sun::security::util::ObjectIdentifier* SIGNED_DATA_OID;
	static ::sun::security::util::ObjectIdentifier* ENVELOPED_DATA_OID;
	static ::sun::security::util::ObjectIdentifier* SIGNED_AND_ENVELOPED_DATA_OID;
	static ::sun::security::util::ObjectIdentifier* DIGESTED_DATA_OID;
	static ::sun::security::util::ObjectIdentifier* ENCRYPTED_DATA_OID;
	static ::sun::security::util::ObjectIdentifier* OLD_SIGNED_DATA_OID;
	static ::sun::security::util::ObjectIdentifier* OLD_DATA_OID;
	static ::sun::security::util::ObjectIdentifier* NETSCAPE_CERT_SEQUENCE_OID;
	static ::sun::security::util::ObjectIdentifier* TIMESTAMP_TOKEN_INFO_OID;
	::sun::security::util::ObjectIdentifier* contentType = nullptr;
	::sun::security::util::DerValue* content = nullptr;
};

		} // pkcs
	} // security
} // sun

#pragma pop_macro("OLD_SIGNED_DATA_OID")
#pragma pop_macro("PKCS7_OID")
#pragma pop_macro("TIMESTAMP_TOKEN_INFO_OID")
#pragma pop_macro("SIGNED_AND_ENVELOPED_DATA_OID")
#pragma pop_macro("DIGESTED_DATA_OID")
#pragma pop_macro("ENCRYPTED_DATA_OID")
#pragma pop_macro("OLD_DATA_OID")
#pragma pop_macro("NETSCAPE_CERT_SEQUENCE_OID")
#pragma pop_macro("SIGNED_DATA_OID")
#pragma pop_macro("DATA_OID")
#pragma pop_macro("ENVELOPED_DATA_OID")

#endif // _sun_security_pkcs_ContentInfo_h_