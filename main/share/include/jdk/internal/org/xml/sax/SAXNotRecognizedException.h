#ifndef _jdk_internal_org_xml_sax_SAXNotRecognizedException_h_
#define _jdk_internal_org_xml_sax_SAXNotRecognizedException_h_
//$ class jdk.internal.org.xml.sax.SAXNotRecognizedException
//$ extends jdk.internal.org.xml.sax.SAXException

#include <jdk/internal/org/xml/sax/SAXException.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $import SAXNotRecognizedException : public ::jdk::internal::org::xml::sax::SAXException {
	$class(SAXNotRecognizedException, $NO_CLASS_INIT, ::jdk::internal::org::xml::sax::SAXException)
public:
	SAXNotRecognizedException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x4B808FF241A211DD;
	SAXNotRecognizedException(const SAXNotRecognizedException& e);
	virtual void throw$() override;
	inline SAXNotRecognizedException* operator ->() {
		return (SAXNotRecognizedException*)throwing$;
	}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_SAXNotRecognizedException_h_