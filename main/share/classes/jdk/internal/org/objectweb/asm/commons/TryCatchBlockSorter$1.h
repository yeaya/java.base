#ifndef _jdk_internal_org_objectweb_asm$_commons_TryCatchBlockSorter$1_h_
#define _jdk_internal_org_objectweb_asm$_commons_TryCatchBlockSorter$1_h_
//$ class jdk.internal.org.objectweb.asm.commons.TryCatchBlockSorter$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {
						class TryCatchBlockSorter;
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
						class TryCatchBlockNode;
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

class TryCatchBlockSorter$1 : public ::java::util::Comparator {
	$class(TryCatchBlockSorter$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	TryCatchBlockSorter$1();
	void init$(::jdk::internal::org::objectweb::asm$::commons::TryCatchBlockSorter* this$0);
	int32_t blockLength(::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode* tryCatchBlockNode);
	virtual int32_t compare(::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode* tryCatchBlockNode1, ::jdk::internal::org::objectweb::asm$::tree::TryCatchBlockNode* tryCatchBlockNode2);
	virtual int32_t compare(Object$* tryCatchBlockNode1, Object$* tryCatchBlockNode2) override;
	::jdk::internal::org::objectweb::asm$::commons::TryCatchBlockSorter* this$0 = nullptr;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_TryCatchBlockSorter$1_h_