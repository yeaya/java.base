#ifndef _jdk_internal_util_xml_impl_XMLStreamWriterImpl$Element_h_
#define _jdk_internal_util_xml_impl_XMLStreamWriterImpl$Element_h_
//$ class jdk.internal.util.xml.impl.XMLStreamWriterImpl$Element
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

class $export XMLStreamWriterImpl$Element : public ::java::lang::Object {
	$class(XMLStreamWriterImpl$Element, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLStreamWriterImpl$Element();
	void init$();
	void init$(::jdk::internal::util::xml::impl::XMLStreamWriterImpl$Element* parent, $String* localpart, bool isEmpty);
	virtual $String* getLocalName();
	virtual ::jdk::internal::util::xml::impl::XMLStreamWriterImpl$Element* getParent();
	virtual int32_t getState();
	virtual bool isEmpty();
	virtual void setState(int32_t state);
	::jdk::internal::util::xml::impl::XMLStreamWriterImpl$Element* _parent = nullptr;
	int16_t _Depth = 0;
	bool _isEmptyElement = false;
	$String* _localpart = nullptr;
	int32_t _state = 0;
};

				} // impl
			} // xml
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_xml_impl_XMLStreamWriterImpl$Element_h_