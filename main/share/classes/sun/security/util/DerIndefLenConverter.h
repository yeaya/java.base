#ifndef _sun_security_util_DerIndefLenConverter_h_
#define _sun_security_util_DerIndefLenConverter_h_
//$ class sun.security.util.DerIndefLenConverter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS_MASK")
#undef CLASS_MASK
#pragma push_macro("FORM_MASK")
#undef FORM_MASK
#pragma push_macro("LEN_LONG")
#undef LEN_LONG
#pragma push_macro("LEN_MASK")
#undef LEN_MASK
#pragma push_macro("SKIP_EOC_BYTES")
#undef SKIP_EOC_BYTES
#pragma push_macro("TAG_MASK")
#undef TAG_MASK

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace sun {
	namespace security {
		namespace util {

class DerIndefLenConverter : public ::java::lang::Object {
	$class(DerIndefLenConverter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DerIndefLenConverter();
	void init$();
	virtual $bytes* convertBytes($bytes* indefData);
	static $bytes* convertStream(::java::io::InputStream* in, int8_t tag);
	$bytes* getLengthBytes(int32_t curLen);
	int32_t getNumOfLenBytes(int32_t len);
	bool isEOC(int32_t tag);
	static bool isIndefinite(int32_t lengthByte);
	static bool isLongForm(int32_t lengthByte);
	int32_t parseLength();
	void parseTag();
	void parseValue(int32_t curLen);
	void writeLength(int32_t curLen);
	void writeLengthAndValue();
	void writeTag();
	void writeValue(int32_t curLen);
	static const int32_t TAG_MASK = 31;
	static const int32_t FORM_MASK = 32;
	static const int32_t CLASS_MASK = 192;
	static const int32_t LEN_LONG = 128;
	static const int32_t LEN_MASK = 127;
	static const int32_t SKIP_EOC_BYTES = 2;
	$bytes* data = nullptr;
	$bytes* newData = nullptr;
	int32_t newDataPos = 0;
	int32_t dataPos = 0;
	int32_t dataSize = 0;
	int32_t index = 0;
	int32_t unresolved = 0;
	::java::util::ArrayList* ndefsList = nullptr;
	int32_t numOfTotalLenBytes = 0;
};

		} // util
	} // security
} // sun

#pragma pop_macro("CLASS_MASK")
#pragma pop_macro("FORM_MASK")
#pragma pop_macro("LEN_LONG")
#pragma pop_macro("LEN_MASK")
#pragma pop_macro("SKIP_EOC_BYTES")
#pragma pop_macro("TAG_MASK")

#endif // _sun_security_util_DerIndefLenConverter_h_