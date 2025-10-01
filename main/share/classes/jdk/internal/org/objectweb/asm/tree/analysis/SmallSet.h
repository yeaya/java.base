#ifndef _jdk_internal_org_objectweb_asm$_tree_analysis_SmallSet_h_
#define _jdk_internal_org_objectweb_asm$_tree_analysis_SmallSet_h_
//$ class jdk.internal.org.objectweb.asm.tree.analysis.SmallSet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

class SmallSet : public ::java::util::AbstractSet {
	$class(SmallSet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	SmallSet();
	void init$();
	void init$(Object$* element);
	void init$(Object$* element1, Object$* element2);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::Set* union$(::jdk::internal::org::objectweb::asm$::tree::analysis::SmallSet* otherSet);
	$Object* element1 = nullptr;
	$Object* element2 = nullptr;
};

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_analysis_SmallSet_h_