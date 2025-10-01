#ifndef _java_util_zip_Checksum_h_
#define _java_util_zip_Checksum_h_
//$ interface java.util.zip.Checksum
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export Checksum : public ::java::lang::Object {
	$interface(Checksum, 0, ::java::lang::Object)
public:
	virtual int64_t getValue() {return 0;}
	virtual void reset() {}
	virtual void update(int32_t b) {}
	virtual void update($bytes* b);
	virtual void update($bytes* b, int32_t off, int32_t len) {}
	virtual void update(::java::nio::ByteBuffer* buffer);
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_Checksum_h_