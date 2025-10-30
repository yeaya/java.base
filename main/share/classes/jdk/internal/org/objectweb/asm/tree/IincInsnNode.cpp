#include <jdk/internal/org/objectweb/asm/tree/IincInsnNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef IINC
#undef IINC_INSN

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

$FieldInfo _IincInsnNode_FieldInfo_[] = {
	{"var", "I", nullptr, $PUBLIC, $field(IincInsnNode, var)},
	{"incr", "I", nullptr, $PUBLIC, $field(IincInsnNode, incr)},
	{}
};

$MethodInfo _IincInsnNode_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(IincInsnNode::*)(int32_t,int32_t)>(&IincInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IincInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.IincInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_IincInsnNode_FieldInfo_,
	_IincInsnNode_MethodInfo_
};

$Object* allocate$IincInsnNode($Class* clazz) {
	return $of($alloc(IincInsnNode));
}

void IincInsnNode::init$(int32_t var, int32_t incr) {
	$AbstractInsnNode::init$($Opcodes::IINC);
	this->var = var;
	this->incr = incr;
}

int32_t IincInsnNode::getType() {
	return $AbstractInsnNode::IINC_INSN;
}

void IincInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitIincInsn(this->var, this->incr);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* IincInsnNode::clone($Map* clonedLabels) {
	return $$new(IincInsnNode, this->var, this->incr)->cloneAnnotations(this);
}

IincInsnNode::IincInsnNode() {
}

$Class* IincInsnNode::load$($String* name, bool initialize) {
	$loadClass(IincInsnNode, name, initialize, &_IincInsnNode_ClassInfo_, allocate$IincInsnNode);
	return class$;
}

$Class* IincInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk