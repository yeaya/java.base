#ifndef _jdk_internal_util_xml_impl_XMLWriter_h_
#define _jdk_internal_util_xml_impl_XMLWriter_h_
//$ class jdk.internal.util.xml.impl.XMLWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetEncoder;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $export XMLWriter : public ::java::lang::Object {
	$class(XMLWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLWriter();
	void init$(::java::io::OutputStream* os, $String* encoding, ::java::nio::charset::Charset* cs);
	virtual bool canEncode(char16_t ch);
	virtual void close();
	virtual void flush();
	::java::io::Writer* getWriter(::java::io::OutputStream* output, $String* encoding, ::java::nio::charset::Charset* cs);
	void nl();
	virtual void write($String* s);
	virtual void write($String* str, int32_t off, int32_t len);
	virtual void write($chars* cbuf, int32_t off, int32_t len);
	virtual void write(int32_t b);
	::java::io::Writer* _writer = nullptr;
	::java::nio::charset::CharsetEncoder* _encoder = nullptr;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_XMLWriter_h_