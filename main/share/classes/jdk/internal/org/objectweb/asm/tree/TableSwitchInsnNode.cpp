#include <jdk/internal/org/objectweb/asm/tree/TableSwitchInsnNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <jcpp.h>

#undef TABLESWITCH
#undef TABLESWITCH_INSN

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $LabelNodeArray = $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _TableSwitchInsnNode_FieldInfo_[] = {
	{"min", "I", nullptr, $PUBLIC, $field(TableSwitchInsnNode, min)},
	{"max", "I", nullptr, $PUBLIC, $field(TableSwitchInsnNode, max)},
	{"dflt", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(TableSwitchInsnNode, dflt)},
	{"labels", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;", $PUBLIC, $field(TableSwitchInsnNode, labels)},
	{}
};

$MethodInfo _TableSwitchInsnNode_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/org/objectweb/asm/tree/LabelNode;[Ljdk/internal/org/objectweb/asm/tree/LabelNode;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(TableSwitchInsnNode::*)(int32_t,int32_t,$LabelNode*,$LabelNodeArray*)>(&TableSwitchInsnNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TableSwitchInsnNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.TableSwitchInsnNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_TableSwitchInsnNode_FieldInfo_,
	_TableSwitchInsnNode_MethodInfo_
};

$Object* allocate$TableSwitchInsnNode($Class* clazz) {
	return $of($alloc(TableSwitchInsnNode));
}

void TableSwitchInsnNode::init$(int32_t min, int32_t max, $LabelNode* dflt, $LabelNodeArray* labels) {
	$AbstractInsnNode::init$($Opcodes::TABLESWITCH);
	this->min = min;
	this->max = max;
	$set(this, dflt, dflt);
	$set(this, labels, $Util::asArrayList(labels));
}

int32_t TableSwitchInsnNode::getType() {
	return $AbstractInsnNode::TABLESWITCH_INSN;
}

void TableSwitchInsnNode::accept($MethodVisitor* methodVisitor) {
	$useLocalCurrentObjectStackCache();
	$var($LabelArray, labelsArray, $new($LabelArray, $nc(this->labels)->size()));
	{
		int32_t i = 0;
		int32_t n = labelsArray->length;
		for (; i < n; ++i) {
			labelsArray->set(i, $($nc(($cast($LabelNode, $($nc(this->labels)->get(i)))))->getLabel()));
		}
	}
	$nc(methodVisitor)->visitTableSwitchInsn(this->min, this->max, $($nc(this->dflt)->getLabel()), labelsArray);
	acceptAnnotations(methodVisitor);
}

$AbstractInsnNode* TableSwitchInsnNode::clone($Map* clonedLabels) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = this->min;
	int32_t var$1 = this->max;
	$var($LabelNode, var$2, $AbstractInsnNode::clone(this->dflt, clonedLabels));
	return $$new(TableSwitchInsnNode, var$0, var$1, var$2, $($AbstractInsnNode::clone(this->labels, clonedLabels)))->cloneAnnotations(this);
}

TableSwitchInsnNode::TableSwitchInsnNode() {
}

$Class* TableSwitchInsnNode::load$($String* name, bool initialize) {
	$loadClass(TableSwitchInsnNode, name, initialize, &_TableSwitchInsnNode_ClassInfo_, allocate$TableSwitchInsnNode);
	return class$;
}

$Class* TableSwitchInsnNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk