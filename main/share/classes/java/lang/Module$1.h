#ifndef _java_lang_Module$1_h_
#define _java_lang_Module$1_h_
//$ class java.lang.Module$1
//$ extends jdk.internal.org.objectweb.asm.ClassVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

namespace java {
	namespace lang {
		class Module;
	}
}
namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class AnnotationVisitor;
					class Attribute;
					class ClassWriter;
					class ModuleVisitor;
				}
			}
		}
	}
}

namespace java {
	namespace lang {

class Module$1 : public ::jdk::internal::org::objectweb::asm$::ClassVisitor {
	$class(Module$1, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ClassVisitor)
public:
	Module$1();
	void init$(::java::lang::Module* this$0, int32_t api, ::jdk::internal::org::objectweb::asm$::ClassVisitor* classVisitor, ::jdk::internal::org::objectweb::asm$::ClassWriter* val$cw);
	virtual void visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) override;
	virtual ::jdk::internal::org::objectweb::asm$::AnnotationVisitor* visitAnnotation($String* desc, bool visible) override;
	virtual void visitAttribute(::jdk::internal::org::objectweb::asm$::Attribute* attr) override;
	virtual ::jdk::internal::org::objectweb::asm$::ModuleVisitor* visitModule($String* name, int32_t flags, $String* version) override;
	::java::lang::Module* this$0 = nullptr;
	::jdk::internal::org::objectweb::asm$::ClassWriter* val$cw = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Module$1_h_