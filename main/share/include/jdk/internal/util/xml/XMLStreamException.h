#ifndef _jdk_internal_util_xml_XMLStreamException_h_
#define _jdk_internal_util_xml_XMLStreamException_h_
//$ class jdk.internal.util.xml.XMLStreamException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

class $import XMLStreamException : public ::java::lang::Exception {
	$class(XMLStreamException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XMLStreamException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* th);
	void init$($String* msg, $Throwable* th);
	virtual $Throwable* getNestedException();
	static const int64_t serialVersionUID = (int64_t)1;
	$Throwable* nested = nullptr;
	XMLStreamException(const XMLStreamException& e);
	XMLStreamException wrapper$();
	virtual void throwWrapper$() override;
};

			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_XMLStreamException_h_