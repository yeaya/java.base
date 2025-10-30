#include <jdk/internal/org/objectweb/asm/tree/FieldInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef FIELD_INSN

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

$FieldInfo _FieldInsnNode_FieldInfo_[] = {
	{"owner", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FieldInsnNode, owner)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FieldInsnNode, name)},
	{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FieldInsnNode, desc)},
	{}
};

$MethodInfo _FieldInsnNode_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FieldInsnNode::*)(int32_t,$String*,$String*,$String*)>(&FieldInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"setOpcode", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.FieldInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_FieldInsnNode_FieldInfo_,
	_FieldInsnNode_MethodInfo_
};

$Object* allocate$FieldInsnNode($Class* clazz) {
	return $of($alloc(FieldInsnNode));
}

void FieldInsnNode::init$(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	$AbstractInsnNode::init$(opcode);
	$set(this, owner, owner);
	$set(this, name, name);
	$set(this, desc, descriptor);
}

void FieldInsnNode::setOpcode(int32_t opcode) {
	this->opcode = opcode;
}

int32_t FieldInsnNode::getType() {
	return $AbstractInsnNode::FIELD_INSN;
}

void FieldInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitFieldInsn(this->opcode, this->owner, this->name, this->desc);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* FieldInsnNode::clone($Map* clonedLabels) {
	return $$new(FieldInsnNode, this->opcode, this->owner, this->name, this->desc)->cloneAnnotations(this);
}

FieldInsnNode::FieldInsnNode() {
}

$Class* FieldInsnNode::load$($String* name, bool initialize) {
	$loadClass(FieldInsnNode, name, initialize, &_FieldInsnNode_ClassInfo_, allocate$FieldInsnNode);
	return class$;
}

$Class* FieldInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk