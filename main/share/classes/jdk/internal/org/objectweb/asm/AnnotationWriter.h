#ifndef _jdk_internal_org_objectweb_asm$_AnnotationWriter_h_
#define _jdk_internal_org_objectweb_asm$_AnnotationWriter_h_
//$ class jdk.internal.org.objectweb.asm.AnnotationWriter
//$ extends jdk.internal.org.objectweb.asm.AnnotationVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
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

class AnnotationWriter : public ::jdk::internal::org::objectweb::asm$::AnnotationVisitor {
	$class(AnnotationWriter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::AnnotationVisitor)
public:
	AnnotationWriter();
	void init$(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, bool useNamedValues, ::jdk::internal::org::objectweb::asm$::ByteVector* annotation, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* previousAnnotation);
	int32_t computeAnnotationsSize($String* attributeName);
	static int32_t computeAnnotationsSize(::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleAnnotation, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleAnnotation, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleTypeAnnotation, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleTypeAnnotation);
	static int32_t computeParameterAnnotationsSize($String* attributeName, $Array<::jdk::internal::org::objectweb::asm$::AnnotationWriter>* annotationWriters, int32_t annotableParameterCount);
	static ::jdk::internal::org::objectweb::asm$::AnnotationWriter* create(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, $String* descriptor, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* previousAnnotation);
	static ::jdk::internal::org::objectweb::asm$::AnnotationWriter* create(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* previousAnnotation);
	void putAnnotations(int32_t attributeNameIndex, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	static void putAnnotations(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleAnnotation, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleAnnotation, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeVisibleTypeAnnotation, ::jdk::internal::org::objectweb::asm$::AnnotationWriter* lastRuntimeInvisibleTypeAnnotation, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	static void putParameterAnnotations(int32_t attributeNameIndex, $Array<::jdk::internal::org::objectweb::asm$::AnnotationWriter>* annotationWriters, int32_t annotableParameterCount, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	virtual void visit($String* name, Object$* value) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* name, $String* descriptor) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitArray($String* name) override;
	virtual void visitEnd() override;
	virtual void visitEnum($String* name, $String* descriptor, $String* value) override;
	::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable = nullptr;
	bool useNamedValues = false;
	::jdk::internal::org::objectweb::asm$::ByteVector* annotation = nullptr;
	int32_t numElementValuePairsOffset = 0;
	int32_t numElementValuePairs = 0;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* previousAnnotation = nullptr;
	::jdk::internal::org::objectweb::asm$::AnnotationWriter* nextAnnotation = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_AnnotationWriter_h_