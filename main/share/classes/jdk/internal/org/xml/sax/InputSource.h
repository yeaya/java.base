#ifndef _jdk_internal_org_xml_sax_InputSource_h_
#define _jdk_internal_org_xml_sax_InputSource_h_
//$ class jdk.internal.org.xml.sax.InputSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $export InputSource : public ::java::lang::Object {
	$class(InputSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InputSource();
	void init$();
	void init$($String* systemId);
	void init$(::java::io::InputStream* byteStream);
	void init$(::java::io::Reader* characterStream);
	virtual ::java::io::InputStream* getByteStream();
	virtual ::java::io::Reader* getCharacterStream();
	virtual $String* getEncoding();
	virtual $String* getPublicId();
	virtual $String* getSystemId();
	virtual void setByteStream(::java::io::InputStream* byteStream);
	virtual void setCharacterStream(::java::io::Reader* characterStream);
	virtual void setEncoding($String* encoding);
	virtual void setPublicId($String* publicId);
	virtual void setSystemId($String* systemId);
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	::java::io::InputStream* byteStream = nullptr;
	$String* encoding = nullptr;
	::java::io::Reader* characterStream = nullptr;
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_InputSource_h_