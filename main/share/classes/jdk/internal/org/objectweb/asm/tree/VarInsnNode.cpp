#include <jdk/internal/org/objectweb/asm/tree/VarInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef VAR_INSN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _VarInsnNode_FieldInfo_[] = {
	{"var", "I", nullptr, $PUBLIC, $field(VarInsnNode, var)},
	{}
};

$MethodInfo _VarInsnNode_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(VarInsnNode::*)(int32_t,int32_t)>(&VarInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"setOpcode", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _VarInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.VarInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_VarInsnNode_FieldInfo_,
	_VarInsnNode_MethodInfo_
};

$Object* allocate$VarInsnNode($Class* clazz) {
	return $of($alloc(VarInsnNode));
}

void VarInsnNode::init$(int32_t opcode, int32_t var) {
	$AbstractInsnNode::init$(opcode);
	this->var = var;
}

void VarInsnNode::setOpcode(int32_t opcode) {
	this->opcode = opcode;
}

int32_t VarInsnNode::getType() {
	return $AbstractInsnNode::VAR_INSN;
}

void VarInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitVarInsn(this->opcode, this->var);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* VarInsnNode::clone($Map* clonedLabels) {
	return $$new(VarInsnNode, this->opcode, this->var)->cloneAnnotations(this);
}

VarInsnNode::VarInsnNode() {
}

$Class* VarInsnNode::load$($String* name, bool initialize) {
	$loadClass(VarInsnNode, name, initialize, &_VarInsnNode_ClassInfo_, allocate$VarInsnNode);
	return class$;
}

$Class* VarInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk