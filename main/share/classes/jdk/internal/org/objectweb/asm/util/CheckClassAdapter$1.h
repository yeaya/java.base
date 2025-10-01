#ifndef _jdk_internal_org_objectweb_asm$_util_CheckClassAdapter$1_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckClassAdapter$1_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckClassAdapter$1
//$ extends jdk.internal.org.objectweb.asm.util.CheckClassAdapter

#include <jdk/internal/org/objectweb/asm/util/CheckClassAdapter.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ClassVisitor;
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
					namespace util {

class CheckClassAdapter$1 : public ::jdk::internal::org::objectweb::asm$::util::CheckClassAdapter {
	$class(CheckClassAdapter$1, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::util::CheckClassAdapter)
public:
	CheckClassAdapter$1();
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, bool checkDataFlow);
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_CheckClassAdapter$1_h_