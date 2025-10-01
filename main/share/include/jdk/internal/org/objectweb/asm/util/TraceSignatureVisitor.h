#ifndef _jdk_internal_org_objectweb_asm$_util_TraceSignatureVisitor_h_
#define _jdk_internal_org_objectweb_asm$_util_TraceSignatureVisitor_h_
//$ class jdk.internal.org.objectweb.asm.util.TraceSignatureVisitor
//$ extends jdk.internal.org.objectweb.asm.signature.SignatureVisitor

#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>

#pragma push_macro("COMMA_SEPARATOR")
#undef COMMA_SEPARATOR
#pragma push_macro("EXTENDS_SEPARATOR")
#undef EXTENDS_SEPARATOR
#pragma push_macro("IMPLEMENTS_SEPARATOR")
#undef IMPLEMENTS_SEPARATOR
#pragma push_macro("BASE_TYPES")
#undef BASE_TYPES

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

class $import TraceSignatureVisitor : public ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor {
	$class(TraceSignatureVisitor, 0, ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor)
public:
	TraceSignatureVisitor();
	void init$(int32_t accessFlags);
	void init$(::java::lang::StringBuilder* stringBuilder);
	void endFormals();
	void endType();
	$String* getDeclaration();
	$String* getExceptions();
	$String* getReturnType();
	void startType();
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
	virtual ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor* visitTypeArgument(char16_t tag) override;
	virtual void visitTypeVariable($String* name) override;
	static $String* COMMA_SEPARATOR;
	static $String* EXTENDS_SEPARATOR;
	static $String* IMPLEMENTS_SEPARATOR;
	static ::java::util::Map* BASE_TYPES;
	bool isInterface = false;
	::java::lang::StringBuilder* declaration = nullptr;
	::java::lang::StringBuilder* returnType = nullptr;
	::java::lang::StringBuilder* exceptions = nullptr;
	bool formalTypeParameterVisited = false;
	bool interfaceBoundVisited = false;
	bool parameterTypeVisited = false;
	bool interfaceVisited = false;
	int32_t argumentStack = 0;
	int32_t arrayStack = 0;
	$String* separator = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("COMMA_SEPARATOR")
#pragma pop_macro("EXTENDS_SEPARATOR")
#pragma pop_macro("IMPLEMENTS_SEPARATOR")
#pragma pop_macro("BASE_TYPES")

#endif // _jdk_internal_org_objectweb_asm$_util_TraceSignatureVisitor_h_