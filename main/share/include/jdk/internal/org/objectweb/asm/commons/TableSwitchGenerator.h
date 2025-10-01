#ifndef _jdk_internal_org_objectweb_asm$_commons_TableSwitchGenerator_h_
#define _jdk_internal_org_objectweb_asm$_commons_TableSwitchGenerator_h_
//$ interface jdk.internal.org.objectweb.asm.commons.TableSwitchGenerator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Label;
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

class $import TableSwitchGenerator : public ::java::lang::Object {
	$interface(TableSwitchGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void generateCase(int32_t key, ::jdk::internal::org::objectweb::asm$::Label* end) {}
	virtual void generateDefault() {}
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_commons_TableSwitchGenerator_h_