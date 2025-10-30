#include <java/lang/Module$1.h>

#include <java/lang/Module.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ACC_ABSTRACT
#undef ACC_INTERFACE
#undef ACC_SYNTHETIC

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace java {
	namespace lang {

$FieldInfo _Module$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/Module;", nullptr, $FINAL | $SYNTHETIC, $field(Module$1, this$0)},
	{"val$cw", "Ljdk/internal/org/objectweb/asm/ClassWriter;", nullptr, $FINAL | $SYNTHETIC, $field(Module$1, val$cw)},
	{}
};

$MethodInfo _Module$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Module;ILjdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/ClassWriter;)V", nullptr, 0, $method(static_cast<void(Module$1::*)($Module*,int32_t,$ClassVisitor*,$ClassWriter*)>(&Module$1::init$))},
	{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitModule", "(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Module$1_EnclosingMethodInfo_ = {
	"java.lang.Module",
	"loadModuleInfoClass",
	"(Ljava/io/InputStream;)Ljava/lang/Class;"
};

$InnerClassInfo _Module$1_InnerClassesInfo_[] = {
	{"java.lang.Module$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Module$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Module$1",
	"jdk.internal.org.objectweb.asm.ClassVisitor",
	nullptr,
	_Module$1_FieldInfo_,
	_Module$1_MethodInfo_,
	nullptr,
	&_Module$1_EnclosingMethodInfo_,
	_Module$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Module"
};

$Object* allocate$Module$1($Class* clazz) {
	return $of($alloc(Module$1));
}

void Module$1::init$($Module* this$0, int32_t api, $ClassVisitor* classVisitor, $ClassWriter* val$cw) {
	$set(this, this$0, this$0);
	$set(this, val$cw, val$cw);
	$ClassVisitor::init$(api, classVisitor);
}

void Module$1::visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {
	$nc(this->val$cw)->visit(version, $Opcodes::ACC_INTERFACE + $Opcodes::ACC_ABSTRACT + $Opcodes::ACC_SYNTHETIC, "module-info"_s, nullptr, "java/lang/Object"_s, nullptr);
}

$AnnotationVisitor* Module$1::visitAnnotation($String* desc, bool visible) {
	return $ClassVisitor::visitAnnotation(desc, visible);
}

void Module$1::visitAttribute($Attribute* attr) {
}

$ModuleVisitor* Module$1::visitModule($String* name, int32_t flags, $String* version) {
	return nullptr;
}

Module$1::Module$1() {
}

$Class* Module$1::load$($String* name, bool initialize) {
	$loadClass(Module$1, name, initialize, &_Module$1_ClassInfo_, allocate$Module$1);
	return class$;
}

$Class* Module$1::class$ = nullptr;

	} // lang
} // java