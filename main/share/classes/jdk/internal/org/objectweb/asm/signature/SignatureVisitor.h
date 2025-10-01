#ifndef _jdk_internal_org_objectweb_asm$_signature_SignatureVisitor_h_
#define _jdk_internal_org_objectweb_asm$_signature_SignatureVisitor_h_
//$ class jdk.internal.org.objectweb.asm.signature.SignatureVisitor
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EXTENDS")
#undef EXTENDS
#pragma push_macro("INSTANCEOF")
#undef INSTANCEOF
#pragma push_macro("SUPER")
#undef SUPER

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace signature {

class $export SignatureVisitor : public ::java::lang::Object {
	$class(SignatureVisitor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureVisitor();
	void init$(int32_t api);
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitArrayType();
	virtual void visitBaseType(char16_t descriptor);
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitClassBound();
	virtual void visitClassType($String* name);
	virtual void visitEnd();
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitExceptionType();
	virtual void visitFormalTypeParameter($String* name);
	virtual void visitInnerClassType($String* name);
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitInterface();
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitInterfaceBound();
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitParameterType();
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitReturnType();
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitSuperclass();
	virtual void visitTypeArgument();
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitTypeArgument(char16_t wildcard);
	virtual void visitTypeVariable($String* name);
	static const char16_t EXTENDS = ((char16_t)43);
	static const char16_t SUPER = ((char16_t)45);
	static const char16_t INSTANCEOF = ((char16_t)61);
	int32_t api = 0;
};

					} // signature
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("EXTENDS")
#pragma pop_macro("INSTANCEOF")
#pragma pop_macro("SUPER")

#endif // _jdk_internal_org_objectweb_asm$_signature_SignatureVisitor_h_