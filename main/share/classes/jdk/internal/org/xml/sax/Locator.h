#ifndef _jdk_internal_org_xml_sax_Locator_h_
#define _jdk_internal_org_xml_sax_Locator_h_
//$ interface jdk.internal.org.xml.sax.Locator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $export Locator : public ::java::lang::Object {
	$interface(Locator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getColumnNumber() {return 0;}
	virtual int32_t getLineNumber() {return 0;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_Locator_h_