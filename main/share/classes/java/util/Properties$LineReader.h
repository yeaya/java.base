#ifndef _java_util_Properties$LineReader_h_
#define _java_util_Properties$LineReader_h_
//$ class java.util.Properties$LineReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace java {
	namespace util {

class Properties$LineReader : public ::java::lang::Object {
	$class(Properties$LineReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Properties$LineReader();
	void init$(::java::io::InputStream* inStream);
	void init$(::java::io::Reader* reader);
	virtual int32_t readLine();
	$chars* lineBuf = nullptr;
	$bytes* inByteBuf = nullptr;
	$chars* inCharBuf = nullptr;
	int32_t inLimit = 0;
	int32_t inOff = 0;
	::java::io::InputStream* inStream = nullptr;
	::java::io::Reader* reader = nullptr;
};

	} // util
} // java

#endif // _java_util_Properties$LineReader_h_