#ifndef _sun_security_ssl_Record_h_
#define _sun_security_ssl_Record_h_
//$ interface sun.security.ssl.Record
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OVERFLOW_OF_INT08")
#undef OVERFLOW_OF_INT08
#pragma push_macro("OVERFLOW_OF_INT16")
#undef OVERFLOW_OF_INT16
#pragma push_macro("OVERFLOW_OF_INT24")
#undef OVERFLOW_OF_INT24

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Record : public ::java::lang::Object {
	$interface(Record, 0, ::java::lang::Object)
public:
	static $bytes* getBytes16(::java::nio::ByteBuffer* m);
	static $bytes* getBytes24(::java::nio::ByteBuffer* m);
	static $bytes* getBytes8(::java::nio::ByteBuffer* m);
	static int32_t getInt16(::java::nio::ByteBuffer* m);
	static int32_t getInt24(::java::nio::ByteBuffer* m);
	static int32_t getInt32(::java::nio::ByteBuffer* m);
	static int32_t getInt8(::java::nio::ByteBuffer* m);
	static void putBytes16(::java::nio::ByteBuffer* m, $bytes* s);
	static void putBytes24(::java::nio::ByteBuffer* m, $bytes* s);
	static void putBytes8(::java::nio::ByteBuffer* m, $bytes* s);
	static void putInt16(::java::nio::ByteBuffer* m, int32_t i);
	static void putInt24(::java::nio::ByteBuffer* m, int32_t i);
	static void putInt32(::java::nio::ByteBuffer* m, int32_t i);
	static void putInt8(::java::nio::ByteBuffer* m, int32_t i);
	static void verifyLength(::java::nio::ByteBuffer* m, int32_t len);
	static const int32_t maxMacSize = 48;
	static const int32_t maxDataSize = 16384;
	static const int32_t maxPadding = 256;
	static const int32_t maxIVLength = 16;
	static const int32_t maxFragmentSize = 18432;
	static bool enableCBCProtection;
	static const int32_t OVERFLOW_OF_INT08 = (1 << 8);
	static const int32_t OVERFLOW_OF_INT16 = (1 << 16);
	static const int32_t OVERFLOW_OF_INT24 = (1 << 24);
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("OVERFLOW_OF_INT08")
#pragma pop_macro("OVERFLOW_OF_INT16")
#pragma pop_macro("OVERFLOW_OF_INT24")

#endif // _sun_security_ssl_Record_h_