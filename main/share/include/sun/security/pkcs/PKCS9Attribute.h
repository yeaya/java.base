#ifndef _sun_security_pkcs_PKCS9Attribute_h_
#define _sun_security_pkcs_PKCS9Attribute_h_
//$ class sun.security.pkcs.PKCS9Attribute
//$ extends sun.security.util.DerEncoder

#include <java/lang/Array.h>
#include <sun/security/util/DerEncoder.h>

#pragma push_macro("EMAIL_ADDRESS_OID")
#undef EMAIL_ADDRESS_OID
#pragma push_macro("UNSTRUCTURED_ADDRESS_OID")
#undef UNSTRUCTURED_ADDRESS_OID
#pragma push_macro("CMS_ALGORITHM_PROTECTION_OID")
#undef CMS_ALGORITHM_PROTECTION_OID
#pragma push_macro("CONTENT_TYPE_OID")
#undef CONTENT_TYPE_OID
#pragma push_macro("UNSTRUCTURED_NAME_OID")
#undef UNSTRUCTURED_NAME_OID
#pragma push_macro("BYTE_ARRAY_CLASS")
#undef BYTE_ARRAY_CLASS
#pragma push_macro("EXTENSION_REQUEST_OID")
#undef EXTENSION_REQUEST_OID
#pragma push_macro("PKCS9_OIDS")
#undef PKCS9_OIDS
#pragma push_macro("VALUE_CLASSES")
#undef VALUE_CLASSES
#pragma push_macro("SINGLE_VALUED")
#undef SINGLE_VALUED
#pragma push_macro("MESSAGE_DIGEST_OID")
#undef MESSAGE_DIGEST_OID
#pragma push_macro("SIGNATURE_TIMESTAMP_TOKEN_OID")
#undef SIGNATURE_TIMESTAMP_TOKEN_OID
#pragma push_macro("CHALLENGE_PASSWORD_OID")
#undef CHALLENGE_PASSWORD_OID
#pragma push_macro("ISSUER_SERIALNUMBER_OID")
#undef ISSUER_SERIALNUMBER_OID
#pragma push_macro("SIGNING_CERTIFICATE_OID")
#undef SIGNING_CERTIFICATE_OID
#pragma push_macro("SIGNING_TIME_OID")
#undef SIGNING_TIME_OID
#pragma push_macro("EXTENDED_CERTIFICATE_ATTRIBUTES_OID")
#undef EXTENDED_CERTIFICATE_ATTRIBUTES_OID
#pragma push_macro("COUNTERSIGNATURE_OID")
#undef COUNTERSIGNATURE_OID
#pragma push_macro("PKCS9_VALUE_TAGS")
#undef PKCS9_VALUE_TAGS

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Byte;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class $import PKCS9Attribute : public ::sun::security::util::DerEncoder {
	$class(PKCS9Attribute, 0, ::sun::security::util::DerEncoder)
public:
	PKCS9Attribute();
	void init$(::sun::security::util::ObjectIdentifier* oid, Object$* value);
	void init$(::sun::security::util::DerValue* derVal);
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual $String* getName();
	static $String* getName(::sun::security::util::ObjectIdentifier* oid);
	virtual ::sun::security::util::ObjectIdentifier* getOID();
	static ::sun::security::util::ObjectIdentifier* getOID($String* name);
	virtual $Object* getValue();
	static int32_t indexOf(Object$* obj, $ObjectArray* a, int32_t start);
	void init(::sun::security::util::ObjectIdentifier* oid, Object$* value);
	virtual bool isKnown();
	virtual bool isSingleValued();
	void throwSingleValuedException();
	void throwTagException(::java::lang::Byte* tag);
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	static $Array<::sun::security::util::ObjectIdentifier>* PKCS9_OIDS;
	static $Class* BYTE_ARRAY_CLASS;
	static ::sun::security::util::ObjectIdentifier* EMAIL_ADDRESS_OID;
	static ::sun::security::util::ObjectIdentifier* UNSTRUCTURED_NAME_OID;
	static ::sun::security::util::ObjectIdentifier* CONTENT_TYPE_OID;
	static ::sun::security::util::ObjectIdentifier* MESSAGE_DIGEST_OID;
	static ::sun::security::util::ObjectIdentifier* SIGNING_TIME_OID;
	static ::sun::security::util::ObjectIdentifier* COUNTERSIGNATURE_OID;
	static ::sun::security::util::ObjectIdentifier* CHALLENGE_PASSWORD_OID;
	static ::sun::security::util::ObjectIdentifier* UNSTRUCTURED_ADDRESS_OID;
	static ::sun::security::util::ObjectIdentifier* EXTENDED_CERTIFICATE_ATTRIBUTES_OID;
	static ::sun::security::util::ObjectIdentifier* ISSUER_SERIALNUMBER_OID;
	static ::sun::security::util::ObjectIdentifier* EXTENSION_REQUEST_OID;
	static ::sun::security::util::ObjectIdentifier* SIGNING_CERTIFICATE_OID;
	static ::sun::security::util::ObjectIdentifier* SIGNATURE_TIMESTAMP_TOKEN_OID;
	static ::sun::security::util::ObjectIdentifier* CMS_ALGORITHM_PROTECTION_OID;
	static $Array<::java::lang::Byte, 2>* PKCS9_VALUE_TAGS;
	static $ClassArray* VALUE_CLASSES;
	static $booleans* SINGLE_VALUED;
	::sun::security::util::ObjectIdentifier* oid = nullptr;
	int32_t index = 0;
	$Object* value = nullptr;
};

		} // pkcs
	} // security
} // sun

#pragma pop_macro("EMAIL_ADDRESS_OID")
#pragma pop_macro("UNSTRUCTURED_ADDRESS_OID")
#pragma pop_macro("CMS_ALGORITHM_PROTECTION_OID")
#pragma pop_macro("CONTENT_TYPE_OID")
#pragma pop_macro("UNSTRUCTURED_NAME_OID")
#pragma pop_macro("BYTE_ARRAY_CLASS")
#pragma pop_macro("EXTENSION_REQUEST_OID")
#pragma pop_macro("PKCS9_OIDS")
#pragma pop_macro("VALUE_CLASSES")
#pragma pop_macro("SINGLE_VALUED")
#pragma pop_macro("MESSAGE_DIGEST_OID")
#pragma pop_macro("SIGNATURE_TIMESTAMP_TOKEN_OID")
#pragma pop_macro("CHALLENGE_PASSWORD_OID")
#pragma pop_macro("ISSUER_SERIALNUMBER_OID")
#pragma pop_macro("SIGNING_CERTIFICATE_OID")
#pragma pop_macro("SIGNING_TIME_OID")
#pragma pop_macro("EXTENDED_CERTIFICATE_ATTRIBUTES_OID")
#pragma pop_macro("COUNTERSIGNATURE_OID")
#pragma pop_macro("PKCS9_VALUE_TAGS")

#endif // _sun_security_pkcs_PKCS9Attribute_h_