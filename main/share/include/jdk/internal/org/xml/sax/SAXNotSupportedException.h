#ifndef _jdk_internal_org_xml_sax_SAXNotSupportedException_h_
#define _jdk_internal_org_xml_sax_SAXNotSupportedException_h_
//$ class jdk.internal.org.xml.sax.SAXNotSupportedException
//$ extends jdk.internal.org.xml.sax.SAXException

#include <jdk/internal/org/xml/sax/SAXException.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $import SAXNotSupportedException : public ::jdk::internal::org::xml::sax::SAXException {
	$class(SAXNotSupportedException, $NO_CLASS_INIT, ::jdk::internal::org::xml::sax::SAXException)
public:
	SAXNotSupportedException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xEC4121B7A4F96F9A;
	SAXNotSupportedException(const SAXNotSupportedException& e);
	virtual void throw$() override;
	inline SAXNotSupportedException* operator ->() {
		return (SAXNotSupportedException*)throwing$;
	}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_SAXNotSupportedException_h_