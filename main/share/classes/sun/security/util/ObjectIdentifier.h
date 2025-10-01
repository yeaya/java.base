#ifndef _sun_security_util_ObjectIdentifier_h_
#define _sun_security_util_ObjectIdentifier_h_
//$ class sun.security.util.ObjectIdentifier
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("MAXIMUM_OID_SIZE")
#undef MAXIMUM_OID_SIZE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
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
			class DerInputStream;
			class DerOutputStream;
			class KnownOIDs;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ObjectIdentifier : public ::java::io::Serializable {
	$class(ObjectIdentifier, 0, ::java::io::Serializable)
public:
	ObjectIdentifier();
	void init$($String* oid);
	void init$($bytes* encoding);
	void init$(::sun::security::util::DerInputStream* in);
	static void check($bytes* encoding);
	static void checkCount(int32_t count);
	static void checkFirstComponent(int32_t first);
	static void checkFirstComponent(::java::math::BigInteger* first);
	static void checkOidSize(int32_t oidLength);
	static void checkOtherComponent(int32_t i, int32_t num);
	static void checkOtherComponent(int32_t i, ::java::math::BigInteger* num);
	static void checkSecondComponent(int32_t first, int32_t second);
	static void checkSecondComponent(int32_t first, ::java::math::BigInteger* second);
	void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void init($ints* components, int32_t length);
	static ::sun::security::util::ObjectIdentifier* of($String* oidStr);
	static ::sun::security::util::ObjectIdentifier* of(::sun::security::util::KnownOIDs* o);
	static $bytes* pack($bytes* in, int32_t ioffset, int32_t ilength, int32_t iw, int32_t ow);
	static int32_t pack7Oid($bytes* in, int32_t ioffset, int32_t ilength, $bytes* out, int32_t ooffset);
	static int32_t pack7Oid(int32_t input, $bytes* out, int32_t ooffset);
	static int32_t pack7Oid(::java::math::BigInteger* input, $bytes* out, int32_t ooffset);
	static int32_t pack8($bytes* in, int32_t ioffset, int32_t ilength, $bytes* out, int32_t ooffset);
	void readObject(::java::io::ObjectInputStream* is);
	$ints* toIntArray();
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* os);
	static bool $assertionsDisabled;
	static const int32_t MAXIMUM_OID_SIZE = 4096;
	$bytes* encoding = nullptr;
	$volatile($String*) stringForm = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x78B20EEC64177F2E;
	$Object* components = nullptr;
	int32_t componentLen = 0;
	bool componentsCalculated = false;
	static ::java::util::concurrent::ConcurrentHashMap* oidTable;
};

		} // util
	} // security
} // sun

#pragma pop_macro("MAXIMUM_OID_SIZE")

#endif // _sun_security_util_ObjectIdentifier_h_