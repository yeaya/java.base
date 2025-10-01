#ifndef _jdk_internal_org_objectweb_asm$_CurrentFrame_h_
#define _jdk_internal_org_objectweb_asm$_CurrentFrame_h_
//$ class jdk.internal.org.objectweb.asm.CurrentFrame
//$ extends jdk.internal.org.objectweb.asm.Frame

#include <jdk/internal/org/objectweb/asm/Frame.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Label;
					class Symbol;
					class SymbolTable;
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

class CurrentFrame : public ::jdk::internal::org::objectweb::asm$::Frame {
	$class(CurrentFrame, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::Frame)
public:
	CurrentFrame();
	void init$(::jdk::internal::org::objectweb::asm$::Label* owner);
	virtual void execute(int32_t opcode, int32_t arg, ::jdk::internal::org::objectweb::asm$::Symbol* symbolArg, ::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable) override;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_CurrentFrame_h_