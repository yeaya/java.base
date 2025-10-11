#ifndef _java_util_Base64$Decoder_h_
#define _java_util_Base64$Decoder_h_
//$ class java.util.Base64$Decoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace util {

class $import Base64$Decoder : public ::java::lang::Object {
	$class(Base64$Decoder, 0, ::java::lang::Object)
public:
	Base64$Decoder();
	void init$(bool isURL, bool isMIME);
	virtual $bytes* decode($bytes* src);
	virtual $bytes* decode($String* src);
	virtual int32_t decode($bytes* src, $bytes* dst);
	virtual ::java::nio::ByteBuffer* decode(::java::nio::ByteBuffer* buffer);
	int32_t decode0($bytes* src, int32_t sp, int32_t sl, $bytes* dst);
	int32_t decodeBlock($bytes* src, int32_t sp, int32_t sl, $bytes* dst, int32_t dp, bool isURL);
	int32_t decodedOutLength($bytes* src, int32_t sp, int32_t sl);
	virtual ::java::io::InputStream* wrap(::java::io::InputStream* is);
	bool isURL = false;
	bool isMIME = false;
	static $ints* fromBase64;
	static $ints* fromBase64URL;
	static ::java::util::Base64$Decoder* RFC4648;
	static ::java::util::Base64$Decoder* RFC4648_URLSAFE;
	static ::java::util::Base64$Decoder* RFC2045;
};

	} // util
} // java

#endif // _java_util_Base64$Decoder_h_