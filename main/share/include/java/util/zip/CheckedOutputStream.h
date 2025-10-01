#ifndef _java_util_zip_CheckedOutputStream_h_
#define _java_util_zip_CheckedOutputStream_h_
//$ class java.util.zip.CheckedOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Checksum;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $import CheckedOutputStream : public ::java::io::FilterOutputStream {
	$class(CheckedOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	CheckedOutputStream();
	void init$(::java::io::OutputStream* out, ::java::util::zip::Checksum* cksum);
	virtual ::java::util::zip::Checksum* getChecksum();
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::util::zip::Checksum* cksum = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_CheckedOutputStream_h_