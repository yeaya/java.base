#include <jdk/internal/org/objectweb/asm/tree/MethodInsnNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef INVOKEINTERFACE
#undef METHOD_INSN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _MethodInsnNode_FieldInfo_[] = {
	{"owner", "Ljava/lang/String;", nullptr, $PUBLIC, $field(MethodInsnNode, owner)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(MethodInsnNode, name)},
	{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(MethodInsnNode, desc)},
	{"itf", "Z", nullptr, $PUBLIC, $field(MethodInsnNode, itf)},
	{}
};

$MethodInfo _MethodInsnNode_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodInsnNode::*)(int32_t,$String*,$String*,$String*)>(&MethodInsnNode::init$))},
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(MethodInsnNode::*)(int32_t,$String*,$String*,$String*,bool)>(&MethodInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"setOpcode", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MethodInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.MethodInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_MethodInsnNode_FieldInfo_,
	_MethodInsnNode_MethodInfo_
};

$Object* allocate$MethodInsnNode($Class* clazz) {
	return $of($alloc(MethodInsnNode));
}

void MethodInsnNode::init$(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	MethodInsnNode::init$(opcode, owner, name, descriptor, opcode == $Opcodes::INVOKEINTERFACE);
}

void MethodInsnNode::init$(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	$AbstractInsnNode::init$(opcode);
	$set(this, owner, owner);
	$set(this, name, name);
	$set(this, desc, descriptor);
	this->itf = isInterface;
}

void MethodInsnNode::setOpcode(int32_t opcode) {
	this->opcode = opcode;
}

int32_t MethodInsnNode::getType() {
	return $AbstractInsnNode::METHOD_INSN;
}

void MethodInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitMethodInsn(this->opcode, this->owner, this->name, this->desc, this->itf);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* MethodInsnNode::clone($Map* clonedLabels) {
	return $$new(MethodInsnNode, this->opcode, this->owner, this->name, this->desc, this->itf)->cloneAnnotations(this);
}

MethodInsnNode::MethodInsnNode() {
}

$Class* MethodInsnNode::load$($String* name, bool initialize) {
	$loadClass(MethodInsnNode, name, initialize, &_MethodInsnNode_ClassInfo_, allocate$MethodInsnNode);
	return class$;
}

$Class* MethodInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk