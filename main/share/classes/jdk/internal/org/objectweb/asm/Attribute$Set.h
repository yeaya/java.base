#ifndef _jdk_internal_org_objectweb_asm$_Attribute$Set_h_
#define _jdk_internal_org_objectweb_asm$_Attribute$Set_h_
//$ class jdk.internal.org.objectweb.asm.Attribute$Set
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIZE_INCREMENT")
#undef SIZE_INCREMENT

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Attribute;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class $export Attribute$Set : public ::java::lang::Object {
	$class(Attribute$Set, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Attribute$Set();
	void init$();
	void add(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	void addAttributes(::jdk::internal::org::objectweb::asm$::Attribute* attributeList);
	bool contains(::jdk::internal::org::objectweb::asm$::Attribute* attribute);
	$Array<::jdk::internal::org::objectweb::asm$::Attribute>* toArray();
	static const int32_t SIZE_INCREMENT = 6;
	int32_t size = 0;
	$Array<::jdk::internal::org::objectweb::asm$::Attribute>* data = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("SIZE_INCREMENT")

#endif // _jdk_internal_org_objectweb_asm$_Attribute$Set_h_