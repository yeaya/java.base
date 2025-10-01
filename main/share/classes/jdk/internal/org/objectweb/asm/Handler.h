#ifndef _jdk_internal_org_objectweb_asm$_Handler_h_
#define _jdk_internal_org_objectweb_asm$_Handler_h_
//$ class jdk.internal.org.objectweb.asm.Handler
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
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

class Handler : public ::java::lang::Object {
	$class(Handler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Handler();
	void init$(::jdk::internal::org::objectweb::asm$::Label* startPc, ::jdk::internal::org::objectweb::asm$::Label* endPc, ::jdk::internal::org::objectweb::asm$::Label* handlerPc, int32_t catchType, $String* catchTypeDescriptor);
	void init$(::jdk::internal::org::objectweb::asm$::Handler* handler, ::jdk::internal::org::objectweb::asm$::Label* startPc, ::jdk::internal::org::objectweb::asm$::Label* endPc);
	static int32_t getExceptionTableLength(::jdk::internal::org::objectweb::asm$::Handler* firstHandler);
	static int32_t getExceptionTableSize(::jdk::internal::org::objectweb::asm$::Handler* firstHandler);
	static void putExceptionTable(::jdk::internal::org::objectweb::asm$::Handler* firstHandler, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	static ::jdk::internal::org::objectweb::asm$::Handler* removeRange(::jdk::internal::org::objectweb::asm$::Handler* firstHandler, ::jdk::internal::org::objectweb::asm$::Label* start, ::jdk::internal::org::objectweb::asm$::Label* end);
	::jdk::internal::org::objectweb::asm$::Label* startPc = nullptr;
	::jdk::internal::org::objectweb::asm$::Label* endPc = nullptr;
	::jdk::internal::org::objectweb::asm$::Label* handlerPc = nullptr;
	int32_t catchType = 0;
	$String* catchTypeDescriptor = nullptr;
	::jdk::internal::org::objectweb::asm$::Handler* nextHandler = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_Handler_h_