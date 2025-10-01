#ifndef _jdk_internal_org_objectweb_asm$_util_CheckModuleAdapter$NameSet_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckModuleAdapter$NameSet_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckModuleAdapter$NameSet
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashSet;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

class CheckModuleAdapter$NameSet : public ::java::lang::Object {
	$class(CheckModuleAdapter$NameSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CheckModuleAdapter$NameSet();
	void init$($String* type);
	virtual void checkNameNotAlreadyDeclared($String* name);
	$String* type = nullptr;
	::java::util::HashSet* names = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_CheckModuleAdapter$NameSet_h_