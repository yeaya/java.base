#ifndef _jdk_internal_util_xml_impl_ReaderUTF16_h_
#define _jdk_internal_util_xml_impl_ReaderUTF16_h_
//$ class jdk.internal.util.xml.impl.ReaderUTF16
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

class $export ReaderUTF16 : public ::java::io::Reader {
	$class(ReaderUTF16, $NO_CLASS_INIT, ::java::io::Reader)
public:
	ReaderUTF16();
	void init$(::java::io::InputStream* is, char16_t bo);
	virtual void close() override;
	using ::java::io::Reader::read;
	virtual int32_t read($chars* cbuf, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	::java::io::InputStream* is = nullptr;
	char16_t bo = 0;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_ReaderUTF16_h_