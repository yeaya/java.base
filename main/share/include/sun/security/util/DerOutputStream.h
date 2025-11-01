#ifndef _sun_security_util_DerOutputStream_h_
#define _sun_security_util_DerOutputStream_h_
//$ class sun.security.util.DerOutputStream
//$ extends java.io.ByteArrayOutputStream
//$ implements sun.security.util.DerEncoder

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <sun/security/util/DerEncoder.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
		class Date;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class BitArray;
			class ByteArrayLexOrder;
			class ByteArrayTagOrder;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import DerOutputStream : public ::java::io::ByteArrayOutputStream, public ::sun::security::util::DerEncoder {
	$class(DerOutputStream, 0, ::java::io::ByteArrayOutputStream, ::sun::security::util::DerEncoder)
public:
	DerOutputStream();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t size);
	void init$();
	virtual $bytes* buf();
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual void putBMPString($String* s);
	virtual void putBitString($bytes* bits);
	virtual void putBoolean(bool val);
	virtual void putDerValue(::sun::security::util::DerValue* val);
	virtual void putEnumerated(int32_t i);
	virtual void putGeneralString($String* s);
	virtual void putGeneralizedTime(::java::util::Date* d);
	virtual void putIA5String($String* s);
	virtual void putInteger(::java::math::BigInteger* i);
	virtual void putInteger($bytes* buf);
	virtual void putInteger(::java::lang::Integer* i);
	virtual void putInteger(int32_t i);
	void putIntegerContents(int32_t i);
	virtual void putLength(int32_t len);
	virtual void putNull();
	virtual void putOID(::sun::security::util::ObjectIdentifier* oid);
	virtual void putOctetString($bytes* octets);
	virtual void putOrderedSet(int8_t tag, $Array<::sun::security::util::DerEncoder>* set);
	void putOrderedSet(int8_t tag, $Array<::sun::security::util::DerEncoder>* set, ::java::util::Comparator* order);
	virtual void putOrderedSetOf(int8_t tag, $Array<::sun::security::util::DerEncoder>* set);
	virtual void putPrintableString($String* s);
	virtual void putSequence($Array<::sun::security::util::DerValue>* seq);
	virtual void putSet($Array<::sun::security::util::DerValue>* set);
	virtual void putT61String($String* s);
	virtual void putTag(int8_t tagClass, bool form, int8_t val);
	void putTime(::java::util::Date* d, int8_t tag);
	virtual void putTruncatedUnalignedBitString(::sun::security::util::BitArray* ba);
	virtual void putUTCTime(::java::util::Date* d);
	virtual void putUTF8String($String* s);
	virtual void putUnalignedBitString(::sun::security::util::BitArray* ba);
	using ::java::io::ByteArrayOutputStream::write;
	using ::java::io::ByteArrayOutputStream::toString;
	virtual $String* toString() override;
	virtual void write(int8_t tag, $bytes* buf);
	virtual void write(int8_t tag, ::sun::security::util::DerOutputStream* out);
	virtual void writeImplicit(int8_t tag, ::sun::security::util::DerOutputStream* value);
	void writeString($String* s, int8_t stringTag, ::java::nio::charset::Charset* charset);
	static ::sun::security::util::ByteArrayLexOrder* lexOrder;
	static ::sun::security::util::ByteArrayTagOrder* tagOrder;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DerOutputStream_h_