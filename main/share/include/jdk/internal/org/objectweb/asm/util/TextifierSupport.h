#ifndef _jdk_internal_org_objectweb_asm$_util_TextifierSupport_h_
#define _jdk_internal_org_objectweb_asm$_util_TextifierSupport_h_
//$ interface jdk.internal.org.objectweb.asm.util.TextifierSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuilder;
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

class $import TextifierSupport : public ::java::lang::Object {
	$interface(TextifierSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void textify(::java::lang::StringBuilder* outputBuilder, ::java::util::Map* labelNames) {}
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_TextifierSupport_h_