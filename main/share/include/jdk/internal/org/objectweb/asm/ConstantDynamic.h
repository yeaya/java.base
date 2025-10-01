#ifndef _jdk_internal_org_objectweb_asm$_ConstantDynamic_h_
#define _jdk_internal_org_objectweb_asm$_ConstantDynamic_h_
//$ class jdk.internal.org.objectweb.asm.ConstantDynamic
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class Handle;
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

class $import ConstantDynamic : public ::java::lang::Object {
	$class(ConstantDynamic, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConstantDynamic();
	void init$($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethod, $ObjectArray* bootstrapMethodArguments);
	virtual bool equals(Object$* object) override;
	::jdk::internal::org::objectweb::asm$::Handle* getBootstrapMethod();
	$Object* getBootstrapMethodArgument(int32_t index);
	int32_t getBootstrapMethodArgumentCount();
	$ObjectArray* getBootstrapMethodArgumentsUnsafe();
	$String* getDescriptor();
	$String* getName();
	int32_t getSize();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* descriptor = nullptr;
	::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethod = nullptr;
	$ObjectArray* bootstrapMethodArguments = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_ConstantDynamic_h_