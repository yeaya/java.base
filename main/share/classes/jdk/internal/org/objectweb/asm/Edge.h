#ifndef _jdk_internal_org_objectweb_asm$_Edge_h_
#define _jdk_internal_org_objectweb_asm$_Edge_h_
//$ class jdk.internal.org.objectweb.asm.Edge
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EXCEPTION")
#undef EXCEPTION
#pragma push_macro("JUMP")
#undef JUMP

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

class Edge : public ::java::lang::Object {
	$class(Edge, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Edge();
	void init$(int32_t info, ::jdk::internal::org::objectweb::asm$::Label* successor, ::jdk::internal::org::objectweb::asm$::Edge* nextEdge);
	static const int32_t JUMP = 0;
	static const int32_t EXCEPTION = 0x7FFFFFFF;
	int32_t info = 0;
	::jdk::internal::org::objectweb::asm$::Label* successor = nullptr;
	::jdk::internal::org::objectweb::asm$::Edge* nextEdge = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("EXCEPTION")
#pragma pop_macro("JUMP")

#endif // _jdk_internal_org_objectweb_asm$_Edge_h_