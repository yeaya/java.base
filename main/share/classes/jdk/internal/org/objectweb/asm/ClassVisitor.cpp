#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

#undef ASM7
#undef ASM8
#undef ASM5
#undef ASM6
#undef ASM4
#undef ASM9_EXPERIMENTAL
#undef ACC_RECORD

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$CompoundAttribute _ClassVisitor_MethodAnnotations_visitPermittedSubclassExperimental13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ClassVisitor_FieldInfo_[] = {
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(ClassVisitor, api)},
	{"cv", "Ljdk/internal/org/objectweb/asm/ClassVisitor;", nullptr, $PROTECTED, $field(ClassVisitor, cv)},
	{}
};

$MethodInfo _ClassVisitor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ClassVisitor::*)(int32_t)>(&ClassVisitor::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassVisitor::*)(int32_t,ClassVisitor*)>(&ClassVisitor::init$))},
	{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitField", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PUBLIC},
	{"visitInnerClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitMethod", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PUBLIC},
	{"visitModule", "(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC},
	{"visitNestHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitNestMember", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitOuterClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitPermittedSubclassExperimental", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ClassVisitor_MethodAnnotations_visitPermittedSubclassExperimental13},
	{"visitRecordComponent", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, $PUBLIC},
	{"visitSource", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.ClassVisitor",
	"java.lang.Object",
	nullptr,
	_ClassVisitor_FieldInfo_,
	_ClassVisitor_MethodInfo_
};

$Object* allocate$ClassVisitor($Class* clazz) {
	return $of($alloc(ClassVisitor));
}

void ClassVisitor::init$(int32_t api) {
	ClassVisitor::init$(api, nullptr);
}

void ClassVisitor::init$(int32_t api, ClassVisitor* classVisitor) {
	if (api != $Opcodes::ASM8 && api != $Opcodes::ASM7 && api != $Opcodes::ASM6 && api != $Opcodes::ASM5 && api != $Opcodes::ASM4 && api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported api "_s, $$str(api)}));
	}
	if (api == $Opcodes::ASM9_EXPERIMENTAL) {
		$Constants::checkAsmExperimental(this);
	}
	this->api = api;
	$set(this, cv, classVisitor);
}

void ClassVisitor::visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {
	if (this->api < $Opcodes::ASM8 && ((int32_t)(access & (uint32_t)$Opcodes::ACC_RECORD)) != 0) {
		$throwNew($UnsupportedOperationException, "Records requires ASM8"_s);
	}
	if (this->cv != nullptr) {
		$nc(this->cv)->visit(version, access, name, signature, superName, interfaces);
	}
}

void ClassVisitor::visitSource($String* source, $String* debug) {
	if (this->cv != nullptr) {
		$nc(this->cv)->visitSource(source, debug);
	}
}

$ModuleVisitor* ClassVisitor::visitModule($String* name, int32_t access, $String* version) {
	if (this->api < $Opcodes::ASM6) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM6"_s);
	}
	if (this->cv != nullptr) {
		return $nc(this->cv)->visitModule(name, access, version);
	}
	return nullptr;
}

void ClassVisitor::visitNestHost($String* nestHost) {
	if (this->api < $Opcodes::ASM7) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM7"_s);
	}
	if (this->cv != nullptr) {
		$nc(this->cv)->visitNestHost(nestHost);
	}
}

void ClassVisitor::visitOuterClass($String* owner, $String* name, $String* descriptor) {
	if (this->cv != nullptr) {
		$nc(this->cv)->visitOuterClass(owner, name, descriptor);
	}
}

$AnnotationVisitor* ClassVisitor::visitAnnotation($String* descriptor, bool visible) {
	if (this->cv != nullptr) {
		return $nc(this->cv)->visitAnnotation(descriptor, visible);
	}
	return nullptr;
}

$AnnotationVisitor* ClassVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->api < $Opcodes::ASM5) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM5"_s);
	}
	if (this->cv != nullptr) {
		return $nc(this->cv)->visitTypeAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void ClassVisitor::visitAttribute($Attribute* attribute) {
	if (this->cv != nullptr) {
		$nc(this->cv)->visitAttribute(attribute);
	}
}

void ClassVisitor::visitNestMember($String* nestMember) {
	if (this->api < $Opcodes::ASM7) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM7"_s);
	}
	if (this->cv != nullptr) {
		$nc(this->cv)->visitNestMember(nestMember);
	}
}

void ClassVisitor::visitPermittedSubclassExperimental($String* permittedSubclass) {
	if (this->api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM9_EXPERIMENTAL"_s);
	}
	if (this->cv != nullptr) {
		$nc(this->cv)->visitPermittedSubclassExperimental(permittedSubclass);
	}
}

void ClassVisitor::visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) {
	if (this->cv != nullptr) {
		$nc(this->cv)->visitInnerClass(name, outerName, innerName, access);
	}
}

$RecordComponentVisitor* ClassVisitor::visitRecordComponent($String* name, $String* descriptor, $String* signature) {
	if (this->api < $Opcodes::ASM8) {
		$throwNew($UnsupportedOperationException, "This feature requires ASM8"_s);
	}
	if (this->cv != nullptr) {
		return $nc(this->cv)->visitRecordComponent(name, descriptor, signature);
	}
	return nullptr;
}

$FieldVisitor* ClassVisitor::visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) {
	if (this->cv != nullptr) {
		return $nc(this->cv)->visitField(access, name, descriptor, signature, value);
	}
	return nullptr;
}

$MethodVisitor* ClassVisitor::visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	if (this->cv != nullptr) {
		return $nc(this->cv)->visitMethod(access, name, descriptor, signature, exceptions);
	}
	return nullptr;
}

void ClassVisitor::visitEnd() {
	if (this->cv != nullptr) {
		$nc(this->cv)->visitEnd();
	}
}

ClassVisitor::ClassVisitor() {
}

$Class* ClassVisitor::load$($String* name, bool initialize) {
	$loadClass(ClassVisitor, name, initialize, &_ClassVisitor_ClassInfo_, allocate$ClassVisitor);
	return class$;
}

$Class* ClassVisitor::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk