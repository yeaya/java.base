#include <jdk/internal/org/objectweb/asm/tree/LocalVariableAnnotationNode.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/tree/AnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <jcpp.h>

#undef ASM8

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $LabelNodeArray = $Array<::jdk::internal::org::objectweb::asm$::tree::LabelNode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;
using $TypeAnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::TypeAnnotationNode;
using $Util = ::jdk::internal::org::objectweb::asm$::tree::Util;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void LocalVariableAnnotationNode::init$(int32_t typeRef, $TypePath* typePath, $LabelNodeArray* start, $LabelNodeArray* end, $ints* index, $String* descriptor) {
	LocalVariableAnnotationNode::init$($Opcodes::ASM8, typeRef, typePath, start, end, index, descriptor);
}

void LocalVariableAnnotationNode::init$(int32_t api, int32_t typeRef, $TypePath* typePath, $LabelNodeArray* start, $LabelNodeArray* end, $ints* index, $String* descriptor) {
	$TypeAnnotationNode::init$(api, typeRef, typePath, descriptor);
	$set(this, start, $Util::asArrayList(start));
	$set(this, end, $Util::asArrayList(end));
	$set(this, index, $Util::asArrayList(index));
}

void LocalVariableAnnotationNode::accept($MethodVisitor* methodVisitor, bool visible) {
	$useLocalObjectStack();
	$var($LabelArray, startLabels, $new($LabelArray, $nc(this->start)->size()));
	$var($LabelArray, endLabels, $new($LabelArray, $nc(this->end)->size()));
	$var($ints, indices, $new($ints, $nc(this->index)->size()));
	for (int32_t i = 0, n = startLabels->length; i < n; ++i) {
		startLabels->set(i, $($$sure($LabelNode, this->start->get(i))->getLabel()));
		endLabels->set(i, $($$sure($LabelNode, this->end->get(i))->getLabel()));
		indices->set(i, $$sure($Integer, this->index->get(i))->intValue());
	}
	accept($($nc(methodVisitor)->visitLocalVariableAnnotation(this->typeRef, this->typePath, startLabels, endLabels, indices, this->desc, visible)));
}

LocalVariableAnnotationNode::LocalVariableAnnotationNode() {
}

$Class* LocalVariableAnnotationNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;", $PUBLIC, $field(LocalVariableAnnotationNode, start)},
		{"end", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/LabelNode;>;", $PUBLIC, $field(LocalVariableAnnotationNode, end)},
		{"index", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PUBLIC, $field(LocalVariableAnnotationNode, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/tree/LabelNode;[Ljdk/internal/org/objectweb/asm/tree/LabelNode;[ILjava/lang/String;)V", nullptr, $PUBLIC, $method(LocalVariableAnnotationNode, init$, void, int32_t, $TypePath*, $LabelNodeArray*, $LabelNodeArray*, $ints*, $String*)},
		{"<init>", "(IILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/tree/LabelNode;[Ljdk/internal/org/objectweb/asm/tree/LabelNode;[ILjava/lang/String;)V", nullptr, $PUBLIC, $method(LocalVariableAnnotationNode, init$, void, int32_t, int32_t, $TypePath*, $LabelNodeArray*, $LabelNodeArray*, $ints*, $String*)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Z)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableAnnotationNode, accept, void, $MethodVisitor*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.LocalVariableAnnotationNode",
		"jdk.internal.org.objectweb.asm.tree.TypeAnnotationNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LocalVariableAnnotationNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalVariableAnnotationNode);
	});
	return class$;
}

$Class* LocalVariableAnnotationNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk