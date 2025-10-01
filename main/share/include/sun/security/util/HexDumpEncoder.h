#ifndef _sun_security_util_HexDumpEncoder_h_
#define _sun_security_util_HexDumpEncoder_h_
//$ class sun.security.util.HexDumpEncoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import HexDumpEncoder : public ::java::lang::Object {
	$class(HexDumpEncoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HexDumpEncoder();
	void init$();
	virtual int32_t bytesPerAtom();
	virtual int32_t bytesPerLine();
	virtual void encode(::java::io::InputStream* inStream, ::java::io::OutputStream* outStream);
	virtual $String* encode($bytes* aBuffer);
	virtual $String* encode(::java::nio::ByteBuffer* aBuffer);
	virtual void encodeAtom(::java::io::OutputStream* o, $bytes* buf, int32_t off, int32_t len);
	virtual void encodeBuffer(::java::io::InputStream* inStream, ::java::io::OutputStream* outStream);
	virtual void encodeBuffer($bytes* aBuffer, ::java::io::OutputStream* aStream);
	virtual $String* encodeBuffer($bytes* aBuffer);
	virtual void encodeBuffer(::java::nio::ByteBuffer* aBuffer, ::java::io::OutputStream* aStream);
	virtual void encodeBufferPrefix(::java::io::OutputStream* o);
	virtual void encodeLinePrefix(::java::io::OutputStream* o, int32_t len);
	virtual void encodeLineSuffix(::java::io::OutputStream* o);
	$bytes* getBytes(::java::nio::ByteBuffer* bb);
	static void hexDigit(::java::io::PrintStream* p, int8_t x);
	virtual int32_t readFully(::java::io::InputStream* in, $bytes* buffer);
	int32_t offset = 0;
	int32_t thisLineLength = 0;
	int32_t currentByte = 0;
	$bytes* thisLine = nullptr;
	::java::io::PrintStream* pStream = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_HexDumpEncoder_h_