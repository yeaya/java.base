#include <jdk/internal/org/objectweb/asm/tree/JumpInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jcpp.h>

#undef JUMP_INSN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _JumpInsnNode_FieldInfo_[] = {
	{"label", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(JumpInsnNode, label)},
	{}
};

$MethodInfo _JumpInsnNode_MethodInfo_[] = {
	{"<init>", "(ILjdk/internal/org/objectweb/asm/tree/LabelNode;)V", nullptr, $PUBLIC, $method(static_cast<void(JumpInsnNode::*)(int32_t,$LabelNode*)>(&JumpInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"setOpcode", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JumpInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.JumpInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_JumpInsnNode_FieldInfo_,
	_JumpInsnNode_MethodInfo_
};

$Object* allocate$JumpInsnNode($Class* clazz) {
	return $of($alloc(JumpInsnNode));
}

void JumpInsnNode::init$(int32_t opcode, $LabelNode* label) {
	$AbstractInsnNode::init$(opcode);
	$set(this, label, label);
}

void JumpInsnNode::setOpcode(int32_t opcode) {
	this->opcode = opcode;
}

int32_t JumpInsnNode::getType() {
	return $AbstractInsnNode::JUMP_INSN;
}

void JumpInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitJumpInsn(this->opcode, $($nc(this->label)->getLabel()));
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* JumpInsnNode::clone($Map* clonedLabels) {
	$useLocalCurrentObjectStackCache();
	return $$new(JumpInsnNode, this->opcode, $($AbstractInsnNode::clone(this->label, clonedLabels)))->cloneAnnotations(this);
}

JumpInsnNode::JumpInsnNode() {
}

$Class* JumpInsnNode::load$($String* name, bool initialize) {
	$loadClass(JumpInsnNode, name, initialize, &_JumpInsnNode_ClassInfo_, allocate$JumpInsnNode);
	return class$;
}

$Class* JumpInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk