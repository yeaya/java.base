#ifndef _jdk_internal_org_xml_sax_DTDHandler_h_
#define _jdk_internal_org_xml_sax_DTDHandler_h_
//$ interface jdk.internal.org.xml.sax.DTDHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $export DTDHandler : public ::java::lang::Object {
	$interface(DTDHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) {}
	virtual void startDTD($String* name, $String* publicId, $String* systemId);
	virtual void startInternalSub();
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_DTDHandler_h_