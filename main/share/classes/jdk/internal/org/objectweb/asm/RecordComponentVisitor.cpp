#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
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
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _RecordComponentVisitor_FieldInfo_[] = {
	{"api", "I", nullptr, $PROTECTED | $FINAL, $field(RecordComponentVisitor, api)},
	{"delegate", "Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, 0, $field(RecordComponentVisitor, delegate)},
	{}
};

$MethodInfo _RecordComponentVisitor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(RecordComponentVisitor, init$, void, int32_t)},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/RecordComponentVisitor;)V", nullptr, $PUBLIC, $method(RecordComponentVisitor, init$, void, int32_t, RecordComponentVisitor*)},
	{"getDelegate", "()Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, $PUBLIC, $virtualMethod(RecordComponentVisitor, getDelegate, RecordComponentVisitor*)},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RecordComponentVisitor, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(RecordComponentVisitor, visitAttribute, void, $Attribute*)},
	{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(RecordComponentVisitor, visitEnd, void)},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RecordComponentVisitor, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
	{}
};

$ClassInfo _RecordComponentVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.RecordComponentVisitor",
	"java.lang.Object",
	nullptr,
	_RecordComponentVisitor_FieldInfo_,
	_RecordComponentVisitor_MethodInfo_
};

$Object* allocate$RecordComponentVisitor($Class* clazz) {
	return $of($alloc(RecordComponentVisitor));
}

void RecordComponentVisitor::init$(int32_t api) {
	RecordComponentVisitor::init$(api, nullptr);
}

void RecordComponentVisitor::init$(int32_t api, RecordComponentVisitor* recordComponentVisitor) {
	$useLocalCurrentObjectStackCache();
	if (api != $Opcodes::ASM8 && api != $Opcodes::ASM7 && api != $Opcodes::ASM6 && api != $Opcodes::ASM5 && api != $Opcodes::ASM4 && api != $Opcodes::ASM9_EXPERIMENTAL) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported api "_s, $$str(api)}));
	}
	if (api == $Opcodes::ASM9_EXPERIMENTAL) {
		$Constants::checkAsmExperimental(this);
	}
	this->api = api;
	$set(this, delegate, recordComponentVisitor);
}

RecordComponentVisitor* RecordComponentVisitor::getDelegate() {
	return this->delegate;
}

$AnnotationVisitor* RecordComponentVisitor::visitAnnotation($String* descriptor, bool visible) {
	if (this->delegate != nullptr) {
		return $nc(this->delegate)->visitAnnotation(descriptor, visible);
	}
	return nullptr;
}

$AnnotationVisitor* RecordComponentVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (this->delegate != nullptr) {
		return $nc(this->delegate)->visitTypeAnnotation(typeRef, typePath, descriptor, visible);
	}
	return nullptr;
}

void RecordComponentVisitor::visitAttribute($Attribute* attribute) {
	if (this->delegate != nullptr) {
		$nc(this->delegate)->visitAttribute(attribute);
	}
}

void RecordComponentVisitor::visitEnd() {
	if (this->delegate != nullptr) {
		$nc(this->delegate)->visitEnd();
	}
}

RecordComponentVisitor::RecordComponentVisitor() {
}

$Class* RecordComponentVisitor::load$($String* name, bool initialize) {
	$loadClass(RecordComponentVisitor, name, initialize, &_RecordComponentVisitor_ClassInfo_, allocate$RecordComponentVisitor);
	return class$;
}

$Class* RecordComponentVisitor::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk