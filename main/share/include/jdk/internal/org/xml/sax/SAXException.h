#ifndef _jdk_internal_org_xml_sax_SAXException_h_
#define _jdk_internal_org_xml_sax_SAXException_h_
//$ class jdk.internal.org.xml.sax.SAXException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $import SAXException : public ::java::lang::Exception {
	$class(SAXException, 0, ::java::lang::Exception)
public:
	SAXException();
	void init$();
	void init$($String* message);
	void init$(::java::lang::Exception* e);
	void init$($String* message, ::java::lang::Exception* e);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Exception* getException();
	::java::lang::Exception* getExceptionInternal();
	virtual $String* getMessage() override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static const int64_t serialVersionUID = (int64_t)0x0818172D57A7FE20;
	SAXException(const SAXException& e);
	virtual void throw$() override;
	inline SAXException* operator ->() {
		return (SAXException*)throwing$;
	}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_SAXException_h_