#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_SmallSet$IteratorImpl_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_SmallSet$IteratorImpl_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.SmallSet$IteratorImpl
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

class SmallSet$IteratorImpl : public ::java::util::Iterator {
	$class(SmallSet$IteratorImpl, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	SmallSet$IteratorImpl();
	void init$(Object$* firstElement, Object$* secondElement);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	$Object* firstElement = nullptr;
	$Object* secondElement = nullptr;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_SmallSet$IteratorImpl_h_