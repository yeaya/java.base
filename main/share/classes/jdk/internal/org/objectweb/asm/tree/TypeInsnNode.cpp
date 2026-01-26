#include <jdk/internal/org/objectweb/asm/tree/TypeInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef TYPE_INSN

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

$FieldInfo _TypeInsnNode_FieldInfo_[] = {
	{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TypeInsnNode, desc)},
	{}
};

$MethodInfo _TypeInsnNode_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(TypeInsnNode, init$, void, int32_t, $String*)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(TypeInsnNode, accept, void, $MethodVisitor*)},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC, $virtualMethod(TypeInsnNode, clone, $AbstractInsnNode*, $Map*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(TypeInsnNode, getType, int32_t)},
	{"setOpcode", "(I)V", nullptr, $PUBLIC, $virtualMethod(TypeInsnNode, setOpcode, void, int32_t)},
	{}
};

$ClassInfo _TypeInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.TypeInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_TypeInsnNode_FieldInfo_,
	_TypeInsnNode_MethodInfo_
};

$Object* allocate$TypeInsnNode($Class* clazz) {
	return $of($alloc(TypeInsnNode));
}

void TypeInsnNode::init$(int32_t opcode, $String* descriptor) {
	$AbstractInsnNode::init$(opcode);
	$set(this, desc, descriptor);
}

void TypeInsnNode::setOpcode(int32_t opcode) {
	this->opcode = opcode;
}

int32_t TypeInsnNode::getType() {
	return $AbstractInsnNode::TYPE_INSN;
}

void TypeInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitTypeInsn(this->opcode, this->desc);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* TypeInsnNode::clone($Map* clonedLabels) {
	return $$new(TypeInsnNode, this->opcode, this->desc)->cloneAnnotations(this);
}

TypeInsnNode::TypeInsnNode() {
}

$Class* TypeInsnNode::load$($String* name, bool initialize) {
	$loadClass(TypeInsnNode, name, initialize, &_TypeInsnNode_ClassInfo_, allocate$TypeInsnNode);
	return class$;
}

$Class* TypeInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk