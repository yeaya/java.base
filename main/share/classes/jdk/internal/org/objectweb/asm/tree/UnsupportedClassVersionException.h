#ifndef _jdk_internal_org_objectweb_asm$_tree_UnsupportedClassVersionException_h_
#define _jdk_internal_org_objectweb_asm$_tree_UnsupportedClassVersionException_h_
//$ class jdk.internal.org.objectweb.asm.tree.UnsupportedClassVersionException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

class $export UnsupportedClassVersionException : public ::java::lang::RuntimeException {
	$class(UnsupportedClassVersionException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	UnsupportedClassVersionException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xCF6529435E22CD79;
	UnsupportedClassVersionException(const UnsupportedClassVersionException& e);
	UnsupportedClassVersionException wrapper$();
	virtual void throwWrapper$() override;
};

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_tree_UnsupportedClassVersionException_h_