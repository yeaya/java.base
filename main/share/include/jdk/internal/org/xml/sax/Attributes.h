#ifndef _jdk_internal_org_xml_sax_Attributes_h_
#define _jdk_internal_org_xml_sax_Attributes_h_
//$ interface jdk.internal.org.xml.sax.Attributes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $import Attributes : public ::java::lang::Object {
	$interface(Attributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getIndex($String* uri, $String* localName) {return 0;}
	virtual int32_t getIndex($String* qName) {return 0;}
	virtual int32_t getLength() {return 0;}
	virtual $String* getLocalName(int32_t index) {return nullptr;}
	virtual $String* getQName(int32_t index) {return nullptr;}
	virtual $String* getType(int32_t index) {return nullptr;}
	virtual $String* getType($String* uri, $String* localName) {return nullptr;}
	virtual $String* getType($String* qName) {return nullptr;}
	virtual $String* getURI(int32_t index) {return nullptr;}
	virtual $String* getValue(int32_t index) {return nullptr;}
	virtual $String* getValue($String* uri, $String* localName) {return nullptr;}
	virtual $String* getValue($String* qName) {return nullptr;}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_Attributes_h_