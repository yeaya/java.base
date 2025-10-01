#ifndef _java_util_jar_Manifest$FastInputStream_h_
#define _java_util_jar_Manifest$FastInputStream_h_
//$ class java.util.jar.Manifest$FastInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace java {
	namespace util {
		namespace jar {

class $export Manifest$FastInputStream : public ::java::io::FilterInputStream {
	$class(Manifest$FastInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	Manifest$FastInputStream();
	void init$(::java::io::InputStream* in);
	void init$(::java::io::InputStream* in, int32_t size);
	virtual int32_t available() override;
	virtual void close() override;
	void fill();
	virtual int8_t peek();
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t readLine($bytes* b, int32_t off, int32_t len);
	virtual int32_t readLine($bytes* b);
	virtual int64_t skip(int64_t n) override;
	$bytes* buf = nullptr;
	int32_t count = 0;
	int32_t pos = 0;
};

		} // jar
	} // util
} // java

#endif // _java_util_jar_Manifest$FastInputStream_h_