#include <jdk/internal/org/objectweb/asm/tree/LineNumberNode.h>

#include <java/util/Map.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jcpp.h>

#undef LINE

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

$FieldInfo _LineNumberNode_FieldInfo_[] = {
	{"line", "I", nullptr, $PUBLIC, $field(LineNumberNode, line)},
	{"start", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(LineNumberNode, start)},
	{}
};

$MethodInfo _LineNumberNode_MethodInfo_[] = {
	{"<init>", "(ILjdk/internal/org/objectweb/asm/tree/LabelNode;)V", nullptr, $PUBLIC, $method(static_cast<void(LineNumberNode::*)(int32_t,$LabelNode*)>(&LineNumberNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC},
	{"clone", "(Ljava/util/Map;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", "(Ljava/util/Map<Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;)Ljdk/internal/org/objectweb/asm/tree/AbstractInsnNode;", $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LineNumberNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.LineNumberNode",
	"jdk.internal.org.objectweb.asm.tree.AbstractInsnNode",
	nullptr,
	_LineNumberNode_FieldInfo_,
	_LineNumberNode_MethodInfo_
};

$Object* allocate$LineNumberNode($Class* clazz) {
	return $of($alloc(LineNumberNode));
}

void LineNumberNode::init$(int32_t line, $LabelNode* start) {
	$AbstractInsnNode::init$(-1);
	this->line = line;
	$set(this, start, start);
}

int32_t LineNumberNode::getType() {
	return $AbstractInsnNode::LINE;
}

void LineNumberNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitLineNumber(this->line, $($nc(this->start)->getLabel()));
}

$AbstractInsnNode* LineNumberNode::clone($Map* clonedLabels) {
	return $new(LineNumberNode, this->line, $($AbstractInsnNode::clone(this->start, clonedLabels)));
}

LineNumberNode::LineNumberNode() {
}

$Class* LineNumberNode::load$($String* name, bool initialize) {
	$loadClass(LineNumberNode, name, initialize, &_LineNumberNode_ClassInfo_, allocate$LineNumberNode);
	return class$;
}

$Class* LineNumberNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk