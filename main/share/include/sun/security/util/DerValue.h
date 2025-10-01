#ifndef _sun_security_util_DerValue_h_
#define _sun_security_util_DerValue_h_
//$ class sun.security.util.DerValue
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TAG_UNIVERSAL")
#undef TAG_UNIVERSAL
#pragma push_macro("TAG_APPLICATION")
#undef TAG_APPLICATION
#pragma push_macro("TAG_CONTEXT")
#undef TAG_CONTEXT
#pragma push_macro("TAG_PRIVATE")
#undef TAG_PRIVATE

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
	namespace nio {
		namespace charset {
			class Charset;
		}
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
			class DerInputStream;
			class DerOutputStream;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import DerValue : public ::java::lang::Object {
	$class(DerValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DerValue();
	void init$(int8_t tag, $bytes* buffer, int32_t start, int32_t end, bool allowBER);
	void init$($String* value);
	void init$(int8_t stringTag, $String* value);
	void init$(int8_t tag, $bytes* buffer, bool allowBER);
	void init$(int8_t tag, $bytes* buffer);
	void init$($bytes* encoding);
	void init$($bytes* buf, int32_t offset, int32_t len, bool allowBER, bool allowMore);
	void init$(::java::io::InputStream* in, bool allowBER);
	void init$(::java::io::InputStream* in);
	virtual void clear();
	static int8_t createTag(int8_t tagClass, bool form, int8_t val);
	::sun::security::util::DerInputStream* data();
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* o) override;
	virtual $String* getAsString();
	virtual $String* getBMPString();
	virtual ::java::math::BigInteger* getBigInteger();
	::java::math::BigInteger* getBigIntegerInternal(int8_t expectedTag, bool makePositive);
	virtual $bytes* getBitString();
	virtual $bytes* getBitString(bool tagImplicit);
	virtual bool getBoolean();
	::sun::security::util::DerInputStream* getData();
	virtual $bytes* getDataBytes();
	virtual int32_t getEnumerated();
	virtual $String* getGeneralString();
	virtual ::java::util::Date* getGeneralizedTime();
	virtual $String* getIA5String();
	virtual int32_t getInteger();
	int32_t getIntegerInternal(int8_t expectedTag);
	virtual void getNull();
	virtual ::sun::security::util::ObjectIdentifier* getOID();
	virtual $bytes* getOctetString();
	virtual ::java::math::BigInteger* getPositiveBigInteger();
	virtual $String* getPrintableString();
	virtual $String* getT61String();
	int8_t getTag();
	::java::util::Date* getTimeInternal(bool generalized);
	virtual ::java::util::Date* getUTCTime();
	virtual $String* getUTF8String();
	virtual ::sun::security::util::BitArray* getUnalignedBitString();
	virtual ::sun::security::util::BitArray* getUnalignedBitString(bool tagImplicit);
	virtual $String* getUniversalString();
	virtual int32_t hashCode() override;
	virtual bool isApplication();
	virtual bool isConstructed();
	virtual bool isConstructed(int8_t constructedTag);
	virtual bool isContextSpecific();
	virtual bool isContextSpecific(int8_t cntxtTag);
	static bool isPrintableString($String* value);
	static bool isPrintableStringChar(char16_t ch);
	virtual bool isPrivate();
	virtual bool isUniversal();
	virtual int32_t length();
	$String* readStringInternal(int8_t expectedTag, ::java::nio::charset::Charset* cs);
	virtual void resetTag(int8_t tag);
	static $bytes* string2bytes(int8_t stringTag, $String* value);
	virtual $Array<::sun::security::util::DerValue>* subs(int8_t expectedTag, int32_t startLen);
	virtual $bytes* toByteArray();
	virtual ::sun::security::util::DerInputStream* toDerInputStream();
	static int32_t toDigit(int8_t b, $String* type);
	virtual $String* toString() override;
	virtual ::sun::security::util::DerValue* withTag(int8_t newTag);
	static ::sun::security::util::DerValue* wrap(int8_t tag, ::sun::security::util::DerOutputStream* out);
	static const int8_t TAG_UNIVERSAL = (int8_t)0;
	static const int8_t TAG_APPLICATION = (int8_t)64;
	static const int8_t TAG_CONTEXT = (int8_t)128;
	static const int8_t TAG_PRIVATE = (int8_t)192;
	static const int8_t tag_Boolean = 1;
	static const int8_t tag_Integer = 2;
	static const int8_t tag_BitString = 3;
	static const int8_t tag_OctetString = 4;
	static const int8_t tag_Null = 5;
	static const int8_t tag_ObjectId = 6;
	static const int8_t tag_Enumerated = 10;
	static const int8_t tag_UTF8String = 12;
	static const int8_t tag_PrintableString = 19;
	static const int8_t tag_T61String = 20;
	static const int8_t tag_IA5String = 22;
	static const int8_t tag_UtcTime = 23;
	static const int8_t tag_GeneralizedTime = 24;
	static const int8_t tag_GeneralString = 27;
	static const int8_t tag_UniversalString = 28;
	static const int8_t tag_BMPString = 30;
	static const int8_t tag_Sequence = 48;
	static const int8_t tag_SequenceOf = 48;
	static const int8_t tag_Set = 49;
	static const int8_t tag_SetOf = 49;
	int8_t tag = 0;
	$bytes* buffer = nullptr;
	int32_t start = 0;
	int32_t end = 0;
	bool allowBER = false;
	::sun::security::util::DerInputStream* data$ = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("TAG_UNIVERSAL")
#pragma pop_macro("TAG_APPLICATION")
#pragma pop_macro("TAG_CONTEXT")
#pragma pop_macro("TAG_PRIVATE")

#endif // _sun_security_util_DerValue_h_