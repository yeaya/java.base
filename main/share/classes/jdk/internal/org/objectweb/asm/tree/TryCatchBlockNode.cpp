#include <jdk/internal/org/objectweb/asm/tree/TryCatchBlockNode.h>

#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;
using $TypeAnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::TypeAnnotationNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _TryCatchBlockNode_FieldInfo_[] = {
	{"start", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(TryCatchBlockNode, start)},
	{"end", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(TryCatchBlockNode, end)},
	{"handler", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(TryCatchBlockNode, handler)},
	{"type", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TryCatchBlockNode, type)},
	{"visibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(TryCatchBlockNode, visibleTypeAnnotations)},
	{"invisibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(TryCatchBlockNode, invisibleTypeAnnotations)},
	{}
};

$MethodInfo _TryCatchBlockNode_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TryCatchBlockNode, init$, void, $LabelNode*, $LabelNode*, $LabelNode*, $String*)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(TryCatchBlockNode, accept, void, $MethodVisitor*)},
	{"updateIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(TryCatchBlockNode, updateIndex, void, int32_t)},
	{}
};

$ClassInfo _TryCatchBlockNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.TryCatchBlockNode",
	"java.lang.Object",
	nullptr,
	_TryCatchBlockNode_FieldInfo_,
	_TryCatchBlockNode_MethodInfo_
};

$Object* allocate$TryCatchBlockNode($Class* clazz) {
	return $of($alloc(TryCatchBlockNode));
}

void TryCatchBlockNode::init$($LabelNode* start, $LabelNode* end, $LabelNode* handler, $String* type) {
	$set(this, start, start);
	$set(this, end, end);
	$set(this, handler, handler);
	$set(this, type, type);
}

void TryCatchBlockNode::updateIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	int32_t newTypeRef = 0x42000000 | (index << 8);
	if (this->visibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->visibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$nc(($cast($TypeAnnotationNode, $($nc(this->visibleTypeAnnotations)->get(i)))))->typeRef = newTypeRef;
			}
		}
	}
	if (this->invisibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->invisibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$nc(($cast($TypeAnnotationNode, $($nc(this->invisibleTypeAnnotations)->get(i)))))->typeRef = newTypeRef;
			}
		}
	}
}

void TryCatchBlockNode::accept($MethodVisitor* methodVisitor) {
	$useLocalCurrentObjectStackCache();
	$var($Label, var$0, $nc(this->start)->getLabel());
	$var($Label, var$1, $nc(this->end)->getLabel());
	$nc(methodVisitor)->visitTryCatchBlock(var$0, var$1, this->handler == nullptr ? ($Label*)nullptr : $($nc(this->handler)->getLabel()), this->type);
	if (this->visibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->visibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, $nc(this->visibleTypeAnnotations)->get(i)));
				$nc(typeAnnotation)->accept($(methodVisitor->visitTryCatchAnnotation(typeAnnotation->typeRef, typeAnnotation->typePath, typeAnnotation->desc, true)));
			}
		}
	}
	if (this->invisibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->invisibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, $nc(this->invisibleTypeAnnotations)->get(i)));
				$nc(typeAnnotation)->accept($(methodVisitor->visitTryCatchAnnotation(typeAnnotation->typeRef, typeAnnotation->typePath, typeAnnotation->desc, false)));
			}
		}
	}
}

TryCatchBlockNode::TryCatchBlockNode() {
}

$Class* TryCatchBlockNode::load$($String* name, bool initialize) {
	$loadClass(TryCatchBlockNode, name, initialize, &_TryCatchBlockNode_ClassInfo_, allocate$TryCatchBlockNode);
	return class$;
}

$Class* TryCatchBlockNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk