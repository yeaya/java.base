#ifndef _sun_security_provider_FileInputStreamPool$UnclosableInputStream_h_
#define _sun_security_provider_FileInputStreamPool$UnclosableInputStream_h_
//$ class sun.security.provider.FileInputStreamPool$UnclosableInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class FileInputStreamPool$UnclosableInputStream : public ::java::io::FilterInputStream {
	$class(FileInputStreamPool$UnclosableInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	FileInputStreamPool$UnclosableInputStream();
	void init$(::java::io::InputStream* in);
	virtual void close() override;
	::java::io::InputStream* getWrappedStream();
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_FileInputStreamPool$UnclosableInputStream_h_