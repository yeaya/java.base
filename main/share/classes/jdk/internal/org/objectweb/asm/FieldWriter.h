#ifndef _jdk_internal_org_objectweb_asm$_FieldWriter_h_
#define _jdk_internal_org_objectweb_asm$_FieldWriter_h_
//$ class jdk.internal.org.objectweb.asm.FieldWriter
//$ extends jdk.internal.org.objectweb.asm.FieldVisitor

#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class AnnotationWriter;
					class Attribute;
					class Attribute$Set;
					class ByteVector;
					class SymbolTable;
					class TypePath;
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

class FieldWriter : public ::jdk::internal::org::objectweb::asm$::FieldVisitor {
	$class(FieldWriter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::FieldVisitor)
public:
	FieldWriter();
	void init$(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t access, $String* name, $String* descriptor, $String* signature, Object$* constantValue);
	void collectAttributePrototypes(::jdk::internal::org::objectweb::asm$::Attribute$Set* attributePrototypes);
	int32_t computeFieldInfoSize();
	void putFieldInfo(::jdk::internal::org::objectweb::asm$::ByteVector* output);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable = nullptr;
	int32_t accessFlags = 0;
	int32_t nameIndex = 0;
	int32_t descriptorIndex = 0;
	int32_t signatureIndex = 0;
	int32_t constantValueIndex = 0;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleTypeAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::Attribute* firstAttribute = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_FieldWriter_h_