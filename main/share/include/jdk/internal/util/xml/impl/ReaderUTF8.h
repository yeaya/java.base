#ifndef _jdk_internal_util_xml_impl_ReaderUTF8_h_
#define _jdk_internal_util_xml_impl_ReaderUTF8_h_
//$ class jdk.internal.util.xml.impl.ReaderUTF8
//$ extends java.io.Reader

#include <java/io/Reader.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $import ReaderUTF8 : public ::java::io::Reader {
	$class(ReaderUTF8, $NO_CLASS_INIT, ::java::io::Reader)
public:
	ReaderUTF8();
	void init$(::java::io::InputStream* is);
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	::java::io::InputStream* is = nullptr;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_ReaderUTF8_h_