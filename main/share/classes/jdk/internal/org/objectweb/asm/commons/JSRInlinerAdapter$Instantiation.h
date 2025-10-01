#ifndef _jdk_internal_org_objectweb_asm$_commons_JSRInlinerAdapter$Instantiation_h_
#define _jdk_internal_org_objectweb_asm$_commons_JSRInlinerAdapter$Instantiation_h_
//$ class jdk.internal.org.objectweb.asm.commons.JSRInlinerAdapter$Instantiation
//$ extends java.util.AbstractMap

#include <java/util/AbstractMap.h>

namespace java {
	namespace util {
		class BitSet;
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {
						class JSRInlinerAdapter;
					}
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
					namespace tree {
						class LabelNode;
					}
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
					namespace commons {

class JSRInlinerAdapter$Instantiation : public ::java::util::AbstractMap {
	$class(JSRInlinerAdapter$Instantiation, $NO_CLASS_INIT, ::java::util::AbstractMap)
public:
	JSRInlinerAdapter$Instantiation();
	void init$(::jdk::internal::org::objectweb::asm$::commons::JSRInlinerAdapter* this$0, ::jdk::internal::org::objectweb::asm$::commons::JSRInlinerAdapter$Instantiation* parent, ::java::util::BitSet* subroutineInsns);
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* other) override;
	virtual ::jdk::internal::org::objectweb::asm$::commons::JSRInlinerAdapter$Instantiation* findOwner(int32_t insnIndex);
	virtual $Object* get(Object$* key) override;
	virtual ::jdk::internal::org::objectweb::asm$::tree::LabelNode* getClonedLabel(::jdk::internal::org::objectweb::asm$::tree::LabelNode* labelNode);
	virtual ::jdk::internal::org::objectweb::asm$::tree::LabelNode* getClonedLabelForJumpInsn(::jdk::internal::org::objectweb::asm$::tree::LabelNode* labelNode);
	virtual int32_t hashCode() override;
	using ::java::util::AbstractMap::remove;
	::jdk::internal::org::objectweb::asm$::commons::JSRInlinerAdapter* this$0 = nullptr;
	::jdk::internal::org::objectweb::asm$::commons::JSRInlinerAdapter$Instantiation* parent = nullptr;
	::java::util::BitSet* subroutineInsns = nullptr;
	::java::util::Map* clonedLabels = nullptr;
	::jdk::internal::org::objectweb::asm$::tree::LabelNode* returnLabel = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_JSRInlinerAdapter$Instantiation_h_