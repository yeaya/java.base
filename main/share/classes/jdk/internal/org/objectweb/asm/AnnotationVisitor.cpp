#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>

#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jcpp.h>

#undef ASM4
#undef ASM5
#undef ASM6
#undef ASM7
#undef ASM8
#undef ASM9_EXPERIMENTAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _AnnotationVisitor_FieldInfo_[] = {
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(AnnotationVisitor, api)},
	{"av", "Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED, $field(AnnotationVisitor, av)},
	{}
};

$MethodInfo _AnnotationVisitor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(AnnotationVisitor, init$, void, int32_t)},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/AnnotationVisitor;)V", nullptr, $PUBLIC, $method(AnnotationVisitor, init$, void, int32_t, AnnotationVisitor*)},
	{"visit", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationVisitor, visit, void, $String*, Object$*)},
	{"visitAnnotation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(AnnotationVisitor, visitAnnotation, AnnotationVisitor*, $String*, $String*)},
	{"visitArray", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(AnnotationVisitor, visitArray, AnnotationVisitor*, $String*)},
	{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(AnnotationVisitor, visitEnd, void)},
	{"visitEnum", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(AnnotationVisitor, visitEnum, void, $String*, $String*, $String*)},
	{}
};

$ClassInfo _AnnotationVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.AnnotationVisitor",
	"java.lang.Object",
	nullptr,
	_AnnotationVisitor_FieldInfo_,
	_AnnotationVisitor_MethodInfo_
};

$Object* allocate$AnnotationVisitor($Class* clazz) {
	return $of($alloc(AnnotationVisitor));
}

void AnnotationVisitor::init$(int32_t api) {
	AnnotationVisitor::init$(api, nullptr);
}

void AnnotationVisitor::init$(int32_t api, AnnotationVisitor* annotationVisitor) {
	$useLocalCurrentObjectStackCache();
	if (api != $Opcodes::ASM8 && api != $Opcodes::ASM7 && api != $Opcodes::ASM6 && api != $Opcodes::ASM5 && api != $Opcodes::ASM4 && api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported api "_s, $$str(api)}));
	}
	if (api == $Opcodes::ASM9_EXPERIMENTAL) {
		$Constants::checkAsmExperimental(this);
	}
	this->api = api;
	$set(this, av, annotationVisitor);
}

void AnnotationVisitor::visit($String* name, Object$* value) {
	if (this->av != nullptr) {
		$nc(this->av)->visit(name, value);
	}
}

void AnnotationVisitor::visitEnum($String* name, $String* descriptor, $String* value) {
	if (this->av != nullptr) {
		$nc(this->av)->visitEnum(name, descriptor, value);
	}
}

AnnotationVisitor* AnnotationVisitor::visitAnnotation($String* name, $String* descriptor) {
	if (this->av != nullptr) {
		return $nc(this->av)->visitAnnotation(name, descriptor);
	}
	return nullptr;
}

AnnotationVisitor* AnnotationVisitor::visitArray($String* name) {
	if (this->av != nullptr) {
		return $nc(this->av)->visitArray(name);
	}
	return nullptr;
}

void AnnotationVisitor::visitEnd() {
	if (this->av != nullptr) {
		$nc(this->av)->visitEnd();
	}
}

AnnotationVisitor::AnnotationVisitor() {
}

$Class* AnnotationVisitor::load$($String* name, bool initialize) {
	$loadClass(AnnotationVisitor, name, initialize, &_AnnotationVisitor_ClassInfo_, allocate$AnnotationVisitor);
	return class$;
}

$Class* AnnotationVisitor::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk