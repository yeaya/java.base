#include <jdk/internal/org/objectweb/asm/tree/LookupSwitchInsnNode.h>

#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <jcpp.h>

#undef LOOKUPSWITCH
#undef LOOKUPSWITCH_INSN

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $LabelNodeArray = $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $AbstractInsnNode = ::jdk::internal::org::objectweb::asm$::tree::AbstractInsnNode;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;
using $Util = ::jdk::internal::org::objectweb::asm$::tree::Util;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _LookupSwitchInsnNode_FieldInfo_[] = {
	{"dflt", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(LookupSwitchInsnNode, dflt)},
	{"keys", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PUBLIC, $field(LookupSwitchInsnNode, keys)},
	{"labels", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;", $PUBLIC, $field(LookupSwitchInsnNode, labels)},
	{}
};

$MethodInfo _LookupSwitchInsnNode_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/LabelNode;[I[Ljdk/internal/org/objectweb/asm/tree/LabelNode;)V", nullptr, $PUBLIC, $method(static_cast<void(LookupSwitchInsnNode::*)($LabelNode*,$ints*,$LabelNodeArray*)>(&LookupSwitchInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LookupSwitchInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.LookupSwitchInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_LookupSwitchInsnNode_FieldInfo_,
	_LookupSwitchInsnNode_MethodInfo_
};

$Object* allocate$LookupSwitchInsnNode($Class* clazz) {
	return $of($alloc(LookupSwitchInsnNode));
}

void LookupSwitchInsnNode::init$($LabelNode* dflt, $ints* keys, $LabelNodeArray* labels) {
	$AbstractInsnNode::init$($Opcodes::LOOKUPSWITCH);
	$set(this, dflt, dflt);
	$set(this, keys, $Util::asArrayList(keys));
	$set(this, labels, $Util::asArrayList(labels));
}

int32_t LookupSwitchInsnNode::getType() {
	return $AbstractInsnNode::LOOKUPSWITCH_INSN;
}

void LookupSwitchInsnNode::accept($MethodVisitor* methodVisitor) {
	$useLocalCurrentObjectStackCache();
	$var($ints, keysArray, $new($ints, $nc(this->keys)->size()));
	{
		int32_t i = 0;
		int32_t n = keysArray->length;
		for (; i < n; ++i) {
			keysArray->set(i, $nc(($cast($Integer, $($nc(this->keys)->get(i)))))->intValue());
		}
	}
	$var($LabelArray, labelsArray, $new($LabelArray, $nc(this->labels)->size()));
	{
		int32_t i = 0;
		int32_t n = labelsArray->length;
		for (; i < n; ++i) {
			labelsArray->set(i, $($nc(($cast($LabelNode, $($nc(this->labels)->get(i)))))->getLabel()));
		}
	}
	$nc(methodVisitor)->visitLookupSwitchInsn($($nc(this->dflt)->getLabel()), keysArray, labelsArray);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* LookupSwitchInsnNode::clone($Map* clonedLabels) {
	$useLocalCurrentObjectStackCache();
	$var($LabelNode, var$0, $AbstractInsnNode::clone(this->dflt, clonedLabels));
	$var(LookupSwitchInsnNode, clone, $new(LookupSwitchInsnNode, var$0, nullptr, $($AbstractInsnNode::clone(this->labels, clonedLabels))));
	$nc(clone->keys)->addAll(this->keys);
	return clone->cloneAnnotations(this);
}

LookupSwitchInsnNode::LookupSwitchInsnNode() {
}

$Class* LookupSwitchInsnNode::load$($String* name, bool initialize) {
	$loadClass(LookupSwitchInsnNode, name, initialize, &_LookupSwitchInsnNode_ClassInfo_, allocate$LookupSwitchInsnNode);
	return class$;
}

$Class* LookupSwitchInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk