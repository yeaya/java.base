#include <jdk/internal/org/objectweb/asm/util/TraceMethodVisitor.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/util/Printer.h>
#include <jdk/internal/org/objectweb/asm/util/TraceAnnotationVisitor.h>
#include <jcpp.h>

#undef ASM5
#undef ASM8
#undef INVOKEINTERFACE

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $Printer = ::jdk::internal::org::objectweb::asm$::util::Printer;
using $TraceAnnotationVisitor = ::jdk::internal::org::objectweb::asm$::util::TraceAnnotationVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _TraceMethodVisitor_FieldInfo_[] = {
	{"p", "Ljdk/internal/org/objectweb/asm/util/Printer;", nullptr, $PUBLIC | $FINAL, $field(TraceMethodVisitor, p)},
	{}
};

$MethodInfo _TraceMethodVisitor_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(static_cast<void(TraceMethodVisitor::*)($Printer*)>(&TraceMethodVisitor::init$))},
	{"<init>", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/util/Printer;)V", nullptr, $PUBLIC, $method(static_cast<void(TraceMethodVisitor::*)($MethodVisitor*,$Printer*)>(&TraceMethodVisitor::init$))},
	{"visitAnnotableParameterCount", "(IZ)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAnnotationDefault", "()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitCode", "()V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitIincInsn", "(II)V", nullptr, $PUBLIC},
	{"visitInsn", "(I)V", nullptr, $PUBLIC},
	{"visitInsnAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitIntInsn", "(II)V", nullptr, $PUBLIC},
	{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitJumpInsn", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLabel", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitLineNumber", "(ILjdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC},
	{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitLookupSwitchInsn", "(Ljdk/internal/org/objectweb/asm/Label;[I[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC},
	{"visitMaxs", "(II)V", nullptr, $PUBLIC},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitParameter", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitParameterAnnotation", "(ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTableSwitchInsn", "(IILjdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitTryCatchAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTryCatchBlock", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"visitVarInsn", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TraceMethodVisitor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.TraceMethodVisitor",
	"jdk.internal.org.objectweb.asm.MethodVisitor",
	nullptr,
	_TraceMethodVisitor_FieldInfo_,
	_TraceMethodVisitor_MethodInfo_
};

$Object* allocate$TraceMethodVisitor($Class* clazz) {
	return $of($alloc(TraceMethodVisitor));
}

void TraceMethodVisitor::init$($Printer* printer) {
	TraceMethodVisitor::init$(nullptr, printer);
}

void TraceMethodVisitor::init$($MethodVisitor* methodVisitor, $Printer* printer) {
	$MethodVisitor::init$($Opcodes::ASM8, methodVisitor);
	$set(this, p, printer);
}

void TraceMethodVisitor::visitParameter($String* name, int32_t access) {
	$nc(this->p)->visitParameter(name, access);
	$MethodVisitor::visitParameter(name, access);
}

$AnnotationVisitor* TraceMethodVisitor::visitAnnotation($String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitMethodAnnotation(descriptor, visible));
	return $new($TraceAnnotationVisitor, $($MethodVisitor::visitAnnotation(descriptor, visible)), annotationPrinter);
}

$AnnotationVisitor* TraceMethodVisitor::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitMethodTypeAnnotation(typeRef, typePath, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($MethodVisitor::visitTypeAnnotation(typeRef, typePath, descriptor, visible)), annotationPrinter);
}

void TraceMethodVisitor::visitAttribute($Attribute* attribute) {
	$nc(this->p)->visitMethodAttribute(attribute);
	$MethodVisitor::visitAttribute(attribute);
}

$AnnotationVisitor* TraceMethodVisitor::visitAnnotationDefault() {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitAnnotationDefault());
	return $new($TraceAnnotationVisitor, $($MethodVisitor::visitAnnotationDefault()), annotationPrinter);
}

void TraceMethodVisitor::visitAnnotableParameterCount(int32_t parameterCount, bool visible) {
	$nc(this->p)->visitAnnotableParameterCount(parameterCount, visible);
	$MethodVisitor::visitAnnotableParameterCount(parameterCount, visible);
}

$AnnotationVisitor* TraceMethodVisitor::visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitParameterAnnotation(parameter, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($MethodVisitor::visitParameterAnnotation(parameter, descriptor, visible)), annotationPrinter);
}

void TraceMethodVisitor::visitCode() {
	$nc(this->p)->visitCode();
	$MethodVisitor::visitCode();
}

void TraceMethodVisitor::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	$nc(this->p)->visitFrame(type, numLocal, local, numStack, stack);
	$MethodVisitor::visitFrame(type, numLocal, local, numStack, stack);
}

void TraceMethodVisitor::visitInsn(int32_t opcode) {
	$nc(this->p)->visitInsn(opcode);
	$MethodVisitor::visitInsn(opcode);
}

void TraceMethodVisitor::visitIntInsn(int32_t opcode, int32_t operand) {
	$nc(this->p)->visitIntInsn(opcode, operand);
	$MethodVisitor::visitIntInsn(opcode, operand);
}

void TraceMethodVisitor::visitVarInsn(int32_t opcode, int32_t var) {
	$nc(this->p)->visitVarInsn(opcode, var);
	$MethodVisitor::visitVarInsn(opcode, var);
}

void TraceMethodVisitor::visitTypeInsn(int32_t opcode, $String* type) {
	$nc(this->p)->visitTypeInsn(opcode, type);
	$MethodVisitor::visitTypeInsn(opcode, type);
}

void TraceMethodVisitor::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	$nc(this->p)->visitFieldInsn(opcode, owner, name, descriptor);
	$MethodVisitor::visitFieldInsn(opcode, owner, name, descriptor);
}

void TraceMethodVisitor::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if ($nc(this->p)->api < $Opcodes::ASM5) {
		if (isInterface != (opcode == $Opcodes::INVOKEINTERFACE)) {
			$throwNew($IllegalArgumentException, "INVOKESPECIAL/STATIC on interfaces require ASM5"_s);
		}
		$nc(this->p)->visitMethodInsn(opcode, owner, name, descriptor);
	} else {
		$nc(this->p)->visitMethodInsn(opcode, owner, name, descriptor, isInterface);
	}
	if (this->mv != nullptr) {
		$nc(this->mv)->visitMethodInsn(opcode, owner, name, descriptor, isInterface);
	}
}

void TraceMethodVisitor::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$nc(this->p)->visitInvokeDynamicInsn(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments);
	$MethodVisitor::visitInvokeDynamicInsn(name, descriptor, bootstrapMethodHandle, bootstrapMethodArguments);
}

void TraceMethodVisitor::visitJumpInsn(int32_t opcode, $Label* label) {
	$nc(this->p)->visitJumpInsn(opcode, label);
	$MethodVisitor::visitJumpInsn(opcode, label);
}

void TraceMethodVisitor::visitLabel($Label* label) {
	$nc(this->p)->visitLabel(label);
	$MethodVisitor::visitLabel(label);
}

void TraceMethodVisitor::visitLdcInsn(Object$* value) {
	$nc(this->p)->visitLdcInsn(value);
	$MethodVisitor::visitLdcInsn(value);
}

void TraceMethodVisitor::visitIincInsn(int32_t var, int32_t increment) {
	$nc(this->p)->visitIincInsn(var, increment);
	$MethodVisitor::visitIincInsn(var, increment);
}

void TraceMethodVisitor::visitTableSwitchInsn(int32_t min, int32_t max, $Label* dflt, $LabelArray* labels) {
	$nc(this->p)->visitTableSwitchInsn(min, max, dflt, labels);
	$MethodVisitor::visitTableSwitchInsn(min, max, dflt, labels);
}

void TraceMethodVisitor::visitLookupSwitchInsn($Label* dflt, $ints* keys, $LabelArray* labels) {
	$nc(this->p)->visitLookupSwitchInsn(dflt, keys, labels);
	$MethodVisitor::visitLookupSwitchInsn(dflt, keys, labels);
}

void TraceMethodVisitor::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	$nc(this->p)->visitMultiANewArrayInsn(descriptor, numDimensions);
	$MethodVisitor::visitMultiANewArrayInsn(descriptor, numDimensions);
}

$AnnotationVisitor* TraceMethodVisitor::visitInsnAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitInsnAnnotation(typeRef, typePath, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($MethodVisitor::visitInsnAnnotation(typeRef, typePath, descriptor, visible)), annotationPrinter);
}

void TraceMethodVisitor::visitTryCatchBlock($Label* start, $Label* end, $Label* handler, $String* type) {
	$nc(this->p)->visitTryCatchBlock(start, end, handler, type);
	$MethodVisitor::visitTryCatchBlock(start, end, handler, type);
}

$AnnotationVisitor* TraceMethodVisitor::visitTryCatchAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitTryCatchAnnotation(typeRef, typePath, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($MethodVisitor::visitTryCatchAnnotation(typeRef, typePath, descriptor, visible)), annotationPrinter);
}

void TraceMethodVisitor::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	$nc(this->p)->visitLocalVariable(name, descriptor, signature, start, end, index);
	$MethodVisitor::visitLocalVariable(name, descriptor, signature, start, end, index);
}

$AnnotationVisitor* TraceMethodVisitor::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($Printer, annotationPrinter, $nc(this->p)->visitLocalVariableAnnotation(typeRef, typePath, start, end, index, descriptor, visible));
	return $new($TraceAnnotationVisitor, $($MethodVisitor::visitLocalVariableAnnotation(typeRef, typePath, start, end, index, descriptor, visible)), annotationPrinter);
}

void TraceMethodVisitor::visitLineNumber(int32_t line, $Label* start) {
	$nc(this->p)->visitLineNumber(line, start);
	$MethodVisitor::visitLineNumber(line, start);
}

void TraceMethodVisitor::visitMaxs(int32_t maxStack, int32_t maxLocals) {
	$nc(this->p)->visitMaxs(maxStack, maxLocals);
	$MethodVisitor::visitMaxs(maxStack, maxLocals);
}

void TraceMethodVisitor::visitEnd() {
	$nc(this->p)->visitMethodEnd();
	$MethodVisitor::visitEnd();
}

TraceMethodVisitor::TraceMethodVisitor() {
}

$Class* TraceMethodVisitor::load$($String* name, bool initialize) {
	$loadClass(TraceMethodVisitor, name, initialize, &_TraceMethodVisitor_ClassInfo_, allocate$TraceMethodVisitor);
	return class$;
}

$Class* TraceMethodVisitor::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk