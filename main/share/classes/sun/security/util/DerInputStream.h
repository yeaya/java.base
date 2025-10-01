#ifndef _sun_security_util_DerInputStream_h_
#define _sun_security_util_DerInputStream_h_
//$ class sun.security.util.DerInputStream
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Date;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class BitArray;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export DerInputStream : public ::java::lang::Object {
	$class(DerInputStream, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DerInputStream();
	void init$($bytes* data, int32_t start, int32_t length, bool allowBER);
	void init$($bytes* data);
	void init$($bytes* data, int32_t offset, int32_t len);
	virtual int32_t available();
	virtual $String* getBMPString();
	virtual ::java::math::BigInteger* getBigInteger();
	virtual $bytes* getBitString();
	static int32_t getDefiniteLength(::java::io::InputStream* in);
	virtual ::sun::security::util::DerValue* getDerValue();
	virtual int32_t getEnumerated();
	virtual $String* getGeneralString();
	virtual ::java::util::Date* getGeneralizedTime();
	virtual $String* getIA5String();
	virtual int32_t getInteger();
	static int32_t getLength(::java::io::InputStream* in);
	virtual void getNull();
	virtual ::sun::security::util::ObjectIdentifier* getOID();
	virtual $bytes* getOctetString();
	virtual ::java::math::BigInteger* getPositiveBigInteger();
	virtual $String* getPrintableString();
	virtual $Array<::sun::security::util::DerValue>* getSequence(int32_t startLen);
	virtual $Array<::sun::security::util::DerValue>* getSet(int32_t startLen);
	virtual $Array<::sun::security::util::DerValue>* getSet(int32_t startLen, bool implicit);
	virtual $String* getT61String();
	virtual ::java::util::Date* getUTCTime();
	virtual $String* getUTF8String();
	virtual ::sun::security::util::BitArray* getUnalignedBitString();
	virtual void mark(int32_t readAheadLimit);
	virtual int32_t peekByte();
	virtual void reset();
	virtual $bytes* toByteArray();
	$bytes* data = nullptr;
	int32_t start = 0;
	int32_t end = 0;
	bool allowBER = false;
	int32_t pos = 0;
	int32_t mark$ = 0;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DerInputStream_h_