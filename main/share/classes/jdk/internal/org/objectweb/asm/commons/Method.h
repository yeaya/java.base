#ifndef _jdk_internal_org_objectweb_asm$_commons_Method_h_
#define _jdk_internal_org_objectweb_asm$_commons_Method_h_
//$ class jdk.internal.org.objectweb.asm.commons.Method
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PRIMITIVE_TYPE_DESCRIPTORS")
#undef PRIMITIVE_TYPE_DESCRIPTORS

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
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
					class Type;
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

class $export Method : public ::java::lang::Object {
	$class(Method, 0, ::java::lang::Object)
public:
	Method();
	void init$($String* name, $String* descriptor);
	void init$($String* name, ::jdk::internal::org::objectweb::asm$::Type* returnType, $Array<::jdk::internal::org::objectweb::asm$::Type>* argumentTypes);
	virtual bool equals(Object$* other) override;
	virtual $Array<::jdk::internal::org::objectweb::asm$::Type>* getArgumentTypes();
	virtual $String* getDescriptor();
	static $String* getDescriptorInternal($String* type, bool defaultPackage);
	static ::jdk::internal::org::objectweb::asm$::commons::Method* getMethod(::java::lang::reflect::Method* method);
	static ::jdk::internal::org::objectweb::asm$::commons::Method* getMethod(::java::lang::reflect::Constructor* constructor);
	static ::jdk::internal::org::objectweb::asm$::commons::Method* getMethod($String* method);
	static ::jdk::internal::org::objectweb::asm$::commons::Method* getMethod($String* method, bool defaultPackage);
	virtual $String* getName();
	virtual ::jdk::internal::org::objectweb::asm$::Type* getReturnType();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* descriptor = nullptr;
	static ::java::util::Map* PRIMITIVE_TYPE_DESCRIPTORS;
};

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("PRIMITIVE_TYPE_DESCRIPTORS")

#endif // _jdk_internal_org_objectweb_asm$_commons_Method_h_