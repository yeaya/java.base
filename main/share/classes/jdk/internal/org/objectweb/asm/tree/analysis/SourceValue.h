#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_SourceValue_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_SourceValue_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.SourceValue
//$ extends jdk.internal.org.objectweb.asm.tree.analysis.Value

#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						class AbstractInsnNode;
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
						namespace analysis {

class SourceValue : public ::jdk::internal::org::objectweb::asm$::tree::analysis::Value {
	$class(SourceValue, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::tree::analysis::Value)
public:
	SourceValue();
	void init$(int32_t size);
	void init$(int32_t size, ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode* insnNode);
	void init$(int32_t size, ::java::util::Set* insnSet);
	virtual bool equals(Object$* value) override;
	virtual int32_t getSize() override;
	virtual int32_t hashCode() override;
	int32_t size = 0;
	::java::util::Set* insns = nullptr;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_SourceValue_h_