#ifndef _jdk_internal_org_objectweb_asm$_util_ASMifiable_h_
#define _jdk_internal_org_objectweb_asm$_util_ASMifiable_h_
//$ interface jdk.internal.org.objectweb.asm.util.ASMifiable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

class $import ASMifiable : public ::java::lang::Object {
	$interface(ASMifiable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void asmify(::java::lang::StringBuffer* outputBuffer, $String* visitorVariableName, ::java::util::Map* labelNames) {}
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_ASMifiable_h_