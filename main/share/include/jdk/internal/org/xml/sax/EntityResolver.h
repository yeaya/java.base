#ifndef _jdk_internal_org_xml_sax_EntityResolver_h_
#define _jdk_internal_org_xml_sax_EntityResolver_h_
//$ interface jdk.internal.org.xml.sax.EntityResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					class InputSource;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

class $import EntityResolver : public ::java::lang::Object {
	$interface(EntityResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::jdk::internal::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) {return nullptr;}
};

				} // sax
			} // xml
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_xml_sax_EntityResolver_h_