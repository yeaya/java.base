#ifndef _jdk_internal_org_objectweb_asm$_RecordComponentWriter_h_
#define _jdk_internal_org_objectweb_asm$_RecordComponentWriter_h_
//$ class jdk.internal.org.objectweb.asm.RecordComponentWriter
//$ extends jdk.internal.org.objectweb.asm.RecordComponentVisitor

#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>

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

class RecordComponentWriter : public ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor {
	$class(RecordComponentWriter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor)
public:
	RecordComponentWriter();
	void init$(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, $String* name, $String* descriptor, $String* signature);
	void collectAttributePrototypes(::jdk::internal::org::objectweb::asm$::Attribute$Set* attributePrototypes);
	int32_t computeRecordComponentInfoSize();
	void putRecordComponentInfo(::jdk::internal::org::objectweb::asm$::ByteVector* output);
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable = nullptr;
	int32_t nameIndex = 0;
	int32_t descriptorIndex = 0;
	int32_t signatureIndex = 0;
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

#endif // _jdk_internal_org_objectweb_asm$_RecordComponentWriter_h_