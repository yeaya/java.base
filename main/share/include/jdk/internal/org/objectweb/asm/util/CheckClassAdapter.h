#ifndef _jdk_internal_org_objectweb_asm$_util_CheckClassAdapter_h_
#define _jdk_internal_org_objectweb_asm$_util_CheckClassAdapter_h_
//$ class jdk.internal.org.objectweb.asm.util.CheckClassAdapter
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

#pragma push_macro("USAGE")
#undef USAGE
#pragma push_macro("ERROR_AT")
#undef ERROR_AT

namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
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
					class AnnotationVisitor;
					class Attribute;
					class ClassReader;
					class FieldVisitor;
					class MethodVisitor;
					class ModuleVisitor;
					class RecordComponentVisitor;
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
					namespace tree {
						class MethodNode;
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
					namespace tree {
						namespace analysis {
							class Analyzer;
						}
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

class $import CheckClassAdapter : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(CheckClassAdapter, 0, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	CheckClassAdapter();
	void init$(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor);
	void init$(::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, bool checkDataFlow);
	void init$(int32_t api, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, bool checkDataFlow);
	static void checkAccess(int32_t access, int32_t possibleAccess);
	static int32_t checkChar(char16_t c, $String* signature, int32_t pos);
	static void checkClassSignature($String* signature);
	static int32_t checkClassTypeSignature($String* signature, int32_t startPos);
	static void checkFieldSignature($String* signature);
	static void checkFullyQualifiedName(int32_t version, $String* name, $String* source);
	static int32_t checkJavaTypeSignature($String* signature, int32_t startPos);
	static void checkMethodSignature($String* signature);
	static int32_t checkReferenceTypeSignature($String* signature, int32_t pos);
	static int32_t checkSignatureIdentifier($String* signature, int32_t startPos);
	void checkState();
	static int32_t checkTypeArgument($String* signature, int32_t startPos);
	static int32_t checkTypeArguments($String* signature, int32_t startPos);
	static int32_t checkTypeParameter($String* signature, int32_t startPos);
	static int32_t checkTypeParameters($String* signature, int32_t startPos);
	static void checkTypeRef(int32_t typeRef);
	static int32_t checkTypeVariableSignature($String* signature, int32_t startPos);
	static char16_t getChar($String* string, int32_t pos);
	static $String* getUnqualifiedName($String* name);
	static void main($StringArray* args);
	static void main($StringArray* args, ::java::io::PrintWriter* logger);
	static $String* packageName($String* name);
	static void printAnalyzerResult(::jdk::internal::org::objectweb::asm$::tree::MethodNode* method, ::jdk::internal::org::objectweb::asm$::tree::analysis::Analyzer* analyzer, ::java::io::PrintWriter* printWriter);
	static void verify(::jdk::internal::org::objectweb::asm$::ClassReader* classReader, bool printResults, ::java::io::PrintWriter* printWriter);
	static void verify(::jdk::internal::org::objectweb::asm$::ClassReader* classReader, ::java::lang::ClassLoader* loader, bool printResults, ::java::io::PrintWriter* printWriter);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* descriptor, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attribute) override;
	virtual void visitEnd() override;
	virtual ::jdk::internal::org::objectweb::asm$::FieldVisitor* visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) override;
	virtual void visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) override;
	virtual ::jdk::internal::org::objectweb::asm$::MethodVisitor* visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) override;
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t access, $String* version) override;
	virtual void visitNestHost($String* nestHost) override;
	virtual void visitNestMember($String* nestMember) override;
	virtual void visitOuterClass($String* owner, $String* name, $String* descriptor) override;
	virtual void visitPermittedSubclassExperimental($String* permittedSubclass) override;
	virtual ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor* visitRecordComponent($String* name, $String* descriptor, $String* signature) override;
	virtual void visitSource($String* file, $String* debug) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitTypeAnnotation(int32_t typeRef, ::jdk::internal::org::objectweb::asm$::TypePath* typePath, $String* descriptor, bool visible) override;
	static $String* USAGE;
	static $String* ERROR_AT;
	bool checkDataFlow = false;
	int32_t version = 0;
	bool visitCalled = false;
	bool visitModuleCalled = false;
	bool visitSourceCalled = false;
	bool visitOuterClassCalled = false;
	bool visitNestHostCalled = false;
	$String* nestMemberPackageName = nullptr;
	bool visitEndCalled = false;
	::java::util::Map* labelInsnIndices = nullptr;
};

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("USAGE")
#pragma pop_macro("ERROR_AT")

#endif // _jdk_internal_org_objectweb_asm$_util_CheckClassAdapter_h_