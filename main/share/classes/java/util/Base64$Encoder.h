#ifndef _java_util_Base64$Encoder_h_
#define _java_util_Base64$Encoder_h_
//$ class java.util.Base64$Encoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RFC4648_URLSAFE")
#undef RFC4648_URLSAFE
#pragma push_macro("MIMELINEMAX")
#undef MIMELINEMAX
#pragma push_macro("CRLF")
#undef CRLF
#pragma push_macro("RFC2045")
#undef RFC2045
#pragma push_macro("RFC4648")
#undef RFC4648

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace util {

class $export Base64$Encoder : public ::java::lang::Object {
	$class(Base64$Encoder, 0, ::java::lang::Object)
public:
	Base64$Encoder();
	void init$(bool isURL, $bytes* newline, int32_t linemax, bool doPadding);
	virtual $bytes* encode($bytes* src);
	virtual int32_t encode($bytes* src, $bytes* dst);
	virtual ::java::nio::ByteBuffer* encode(::java::nio::ByteBuffer* buffer);
	int32_t encode0($bytes* src, int32_t off, int32_t end, $bytes* dst);
	void encodeBlock($bytes* src, int32_t sp, int32_t sl, $bytes* dst, int32_t dp, bool isURL);
	virtual $String* encodeToString($bytes* src);
	int32_t encodedOutLength(int32_t srclen, bool throwOOME);
	virtual ::java::util::Base64$Encoder* withoutPadding();
	virtual ::java::io::OutputStream* wrap(::java::io::OutputStream* os);
	$bytes* newline = nullptr;
	int32_t linemax = 0;
	bool isURL = false;
	bool doPadding = false;
	static $chars* toBase64;
	static $chars* toBase64URL;
	static const int32_t MIMELINEMAX = 76;
	static $bytes* CRLF;
	static ::java::util::Base64$Encoder* RFC4648;
	static ::java::util::Base64$Encoder* RFC4648_URLSAFE;
	static ::java::util::Base64$Encoder* RFC2045;
};

	} // util
} // java

#pragma pop_macro("RFC4648_URLSAFE")
#pragma pop_macro("MIMELINEMAX")
#pragma pop_macro("CRLF")
#pragma pop_macro("RFC2045")
#pragma pop_macro("RFC4648")

#endif // _java_util_Base64$Encoder_h_