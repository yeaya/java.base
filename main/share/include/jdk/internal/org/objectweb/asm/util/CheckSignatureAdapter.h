#ifndef _jdk_internal_org_objectweb_asm$_util_CheckSignatureAdapter_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckSignatureAdapter_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter
//$ extends jdk.internal.org.objectweb.asm.signature.SignatureVisitor

#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>

#pragma push_macro("METHOD_SIGNATURE")
#undef METHOD_SIGNATURE
#pragma push_macro("VISIT_RETURN_TYPE_STATES")
#undef VISIT_RETURN_TYPE_STATES
#pragma push_macro("TYPE_SIGNATURE")
#undef TYPE_SIGNATURE
#pragma push_macro("VISIT_INTERFACE_STATES")
#undef VISIT_INTERFACE_STATES
#pragma push_macro("VISIT_CLASS_BOUND_STATES")
#undef VISIT_CLASS_BOUND_STATES
#pragma push_macro("VISIT_FORMAL_TYPE_PARAMETER_STATES")
#undef VISIT_FORMAL_TYPE_PARAMETER_STATES
#pragma push_macro("VISIT_INTERFACE_BOUND_STATES")
#undef VISIT_INTERFACE_BOUND_STATES
#pragma push_macro("VISIT_SUPER_CLASS_STATES")
#undef VISIT_SUPER_CLASS_STATES
#pragma push_macro("VISIT_EXCEPTION_TYPE_STATES")
#undef VISIT_EXCEPTION_TYPE_STATES
#pragma push_macro("INVALID")
#undef INVALID
#pragma push_macro("CLASS_SIGNATURE")
#undef CLASS_SIGNATURE
#pragma push_macro("VISIT_PARAMETER_TYPE_STATES")
#undef VISIT_PARAMETER_TYPE_STATES

namespace java {
	namespace util {
		class EnumSet;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {
						class CheckSignatureAdapter$State;
					}
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

class $import CheckSignatureAdapter : public ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor {
	$class(CheckSignatureAdapter, 0, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor)
public:
	CheckSignatureAdapter();
	void init$(int32_t type, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor);
	void init$(int32_t api, int32_t type, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor);
	void checkClassName($String* name, $String* message);
	void checkIdentifier($String* name, $String* message);
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitArrayType() override;
	virtual void visitBaseType(char16_t descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitClassBound() override;
	virtual void visitClassType($String* name) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitExceptionType() override;
	virtual void visitFormalTypeParameter($String* name) override;
	virtual void visitInnerClassType($String* name) override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitInterface() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitInterfaceBound() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitParameterType() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitReturnType() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitSuperclass() override;
	virtual void visitTypeArgument() override;
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitTypeArgument(char16_t wildcard) override;
	virtual void visitTypeVariable($String* name) override;
	static const int32_t CLASS_SIGNATURE = 0;
	static const int32_t METHOD_SIGNATURE = 1;
	static const int32_t TYPE_SIGNATURE = 2;
	static ::java::util::EnumSet* VISIT_FORMAL_TYPE_PARAMETER_STATES;
	static ::java::util::EnumSet* VISIT_CLASS_BOUND_STATES;
	static ::java::util::EnumSet* VISIT_INTERFACE_BOUND_STATES;
	static ::java::util::EnumSet* VISIT_SUPER_CLASS_STATES;
	static ::java::util::EnumSet* VISIT_INTERFACE_STATES;
	static ::java::util::EnumSet* VISIT_PARAMETER_TYPE_STATES;
	static ::java::util::EnumSet* VISIT_RETURN_TYPE_STATES;
	static ::java::util::EnumSet* VISIT_EXCEPTION_TYPE_STATES;
	static $String* INVALID;
	int32_t type = 0;
	::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State* state = nullptr;
	bool canBeVoid = false;
	::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* signatureVisitor = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("METHOD_SIGNATURE")
#pragma pop_macro("VISIT_RETURN_TYPE_STATES")
#pragma pop_macro("TYPE_SIGNATURE")
#pragma pop_macro("VISIT_INTERFACE_STATES")
#pragma pop_macro("VISIT_CLASS_BOUND_STATES")
#pragma pop_macro("VISIT_FORMAL_TYPE_PARAMETER_STATES")
#pragma pop_macro("VISIT_INTERFACE_BOUND_STATES")
#pragma pop_macro("VISIT_SUPER_CLASS_STATES")
#pragma pop_macro("VISIT_EXCEPTION_TYPE_STATES")
#pragma pop_macro("INVALID")
#pragma pop_macro("CLASS_SIGNATURE")
#pragma pop_macro("VISIT_PARAMETER_TYPE_STATES")

#endif // _jdk_internal_org_objectweb_asm$_util_CheckSignatureAdapter_h_