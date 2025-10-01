#ifndef _jdk_internal_org_objectweb_asm$_util_Textifiable_h_
#define _jdk_internal_org_objectweb_asm$_util_Textifiable_h_
//$ interface jdk.internal.org.objectweb.asm.util.Textifiable
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

class $export Textifiable : public ::java::lang::Object {
	$interface(Textifiable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void textify(::java::lang::StringBuffer* outputBuffer, ::java::util::Map* labelNames) {}
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_util_Textifiable_h_