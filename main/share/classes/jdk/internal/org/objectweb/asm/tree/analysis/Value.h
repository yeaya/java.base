#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_Value_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_Value_h_
//$ interface jdk.internal.org.objectweb.asm.tree.analysis.Value
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

class Value : public ::java::lang::Object {
	$interface(Value, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getSize() {return 0;}
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_Value_h_