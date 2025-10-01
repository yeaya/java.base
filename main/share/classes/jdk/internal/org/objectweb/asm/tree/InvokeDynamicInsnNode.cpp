#include <jdk/internal/org/objectweb/asm/tree/InvokeDynamicInsnNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jcpp.h>

#undef INVOKE_DYNAMIC_INSN
#undef INVOKEDYNAMIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _InvokeDynamicInsnNode_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(InvokeDynamicInsnNode, name)},
	{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(InvokeDynamicInsnNode, desc)},
	{"bsm", "Ljdk/internal/org/objectweb/asm/Handle;", nullptr, $PUBLIC, $field(InvokeDynamicInsnNode, bsm)},
	{"bsmArgs", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(InvokeDynamicInsnNode, bsmArgs)},
	{}
};

$MethodInfo _InvokeDynamicInsnNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(InvokeDynamicInsnNode::*)($String*,$String*,$Handle*,$ObjectArray*)>(&InvokeDynamicInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InvokeDynamicInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.InvokeDynamicInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_InvokeDynamicInsnNode_FieldInfo_,
	_InvokeDynamicInsnNode_MethodInfo_
};

$Object* allocate$InvokeDynamicInsnNode($Class* clazz) {
	return $of($alloc(InvokeDynamicInsnNode));
}

void InvokeDynamicInsnNode::init$($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$AbstractInsnNode::init$($Opcodes::INVOKEDYNAMIC);
	$set(this, name, name);
	$set(this, desc, descriptor);
	$set(this, bsm, bootstrapMethodHandle);
	$set(this, bsmArgs, bootstrapMethodArguments);
}

int32_t InvokeDynamicInsnNode::getType() {
	return $AbstractInsnNode::INVOKE_DYNAMIC_INSN;
}

void InvokeDynamicInsnNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitInvokeDynamicInsn(this->name, this->desc, this->bsm, this->bsmArgs);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* InvokeDynamicInsnNode::clone($Map* clonedLabels) {
	return $$new(InvokeDynamicInsnNode, this->name, this->desc, this->bsm, this->bsmArgs)->cloneAnnotations(this);
}

InvokeDynamicInsnNode::InvokeDynamicInsnNode() {
}

$Class* InvokeDynamicInsnNode::load$($String* name, bool initialize) {
	$loadClass(InvokeDynamicInsnNode, name, initialize, &_InvokeDynamicInsnNode_ClassInfo_, allocate$InvokeDynamicInsnNode);
	return class$;
}

$Class* InvokeDynamicInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk