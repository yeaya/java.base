#ifndef _sun_security_x509_AlgorithmId_h_
#define _sun_security_x509_AlgorithmId_h_
//$ class sun.security.x509.AlgorithmId
//$ extends java.io.Serializable
//$ implements sun.security.util.DerEncoder

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <sun/security/util/DerEncoder.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class AlgorithmParameters;
		class Provider;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import AlgorithmId : public ::java::io::Serializable, public ::sun::security::util::DerEncoder {
	$class(AlgorithmId, 0, ::java::io::Serializable, ::sun::security::util::DerEncoder)
public:
	AlgorithmId();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	void init$(::sun::security::util::ObjectIdentifier* oid);
	void init$(::sun::security::util::ObjectIdentifier* oid, ::java::security::AlgorithmParameters* algparams);
	void init$(::sun::security::util::ObjectIdentifier* oid, ::sun::security::util::DerValue* params);
	static ::sun::security::util::ObjectIdentifier* algOID($String* name);
	static ::java::util::Map* aliasOidsTable();
	static void clearAliasOidsTable();
	static ::java::util::concurrent::ConcurrentHashMap* collectOIDAliases();
	virtual void decodeParams();
	virtual void derEncode(::java::io::OutputStream* out) override;
	void encode(::sun::security::util::DerOutputStream* out);
	$bytes* encode();
	virtual bool equals(::sun::security::x509::AlgorithmId* other);
	virtual bool equals(Object$* other) override;
	bool equals(::sun::security::util::ObjectIdentifier* id);
	static ::sun::security::x509::AlgorithmId* get($String* algname);
	static ::sun::security::x509::AlgorithmId* get(::java::security::AlgorithmParameters* algparams);
	static ::sun::security::x509::AlgorithmId* getAlgorithmId($String* algname);
	virtual $bytes* getEncodedParams();
	virtual $String* getName();
	::sun::security::util::ObjectIdentifier* getOID();
	virtual ::java::security::AlgorithmParameters* getParameters();
	virtual int32_t hashCode() override;
	static bool isKnownProvider(::java::security::Provider* p);
	virtual $String* paramsToString();
	static ::sun::security::x509::AlgorithmId* parse(::sun::security::util::DerValue* val);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x640067C6D62263E5;
	::sun::security::util::ObjectIdentifier* algid = nullptr;
	::java::security::AlgorithmParameters* algParams = nullptr;
	$bytes* encodedParams = nullptr;
	static $volatile(::java::util::Map*) aliasOidsTable$;
	static ::sun::security::util::ObjectIdentifier* MD2_oid;
	static ::sun::security::util::ObjectIdentifier* MD5_oid;
	static ::sun::security::util::ObjectIdentifier* SHA_oid;
	static ::sun::security::util::ObjectIdentifier* SHA224_oid;
	static ::sun::security::util::ObjectIdentifier* SHA256_oid;
	static ::sun::security::util::ObjectIdentifier* SHA384_oid;
	static ::sun::security::util::ObjectIdentifier* SHA512_oid;
	static ::sun::security::util::ObjectIdentifier* SHA512_224_oid;
	static ::sun::security::util::ObjectIdentifier* SHA512_256_oid;
	static ::sun::security::util::ObjectIdentifier* SHA3_224_oid;
	static ::sun::security::util::ObjectIdentifier* SHA3_256_oid;
	static ::sun::security::util::ObjectIdentifier* SHA3_384_oid;
	static ::sun::security::util::ObjectIdentifier* SHA3_512_oid;
	static ::sun::security::util::ObjectIdentifier* DSA_oid;
	static ::sun::security::util::ObjectIdentifier* EC_oid;
	static ::sun::security::util::ObjectIdentifier* RSAEncryption_oid;
	static ::sun::security::util::ObjectIdentifier* RSASSA_PSS_oid;
	static ::sun::security::util::ObjectIdentifier* MGF1_oid;
	static ::sun::security::util::ObjectIdentifier* ed25519_oid;
	static ::sun::security::util::ObjectIdentifier* ed448_oid;
	static ::sun::security::util::ObjectIdentifier* x25519_oid;
	static ::sun::security::util::ObjectIdentifier* x448_oid;
	static ::sun::security::util::ObjectIdentifier* SHA224withECDSA_oid;
	static ::sun::security::util::ObjectIdentifier* SHA256withECDSA_oid;
	static ::sun::security::util::ObjectIdentifier* SHA384withECDSA_oid;
	static ::sun::security::util::ObjectIdentifier* SHA512withECDSA_oid;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_AlgorithmId_h_