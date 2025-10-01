#include <java/util/concurrent/ConcurrentHashMap$TreeNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$TreeNode_FieldInfo_[] = {
	{"parent", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", 0, $field(ConcurrentHashMap$TreeNode, parent)},
	{"left", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", 0, $field(ConcurrentHashMap$TreeNode, left)},
	{"right", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", 0, $field(ConcurrentHashMap$TreeNode, right)},
	{"prev", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", 0, $field(ConcurrentHashMap$TreeNode, prev)},
	{"red", "Z", nullptr, 0, $field(ConcurrentHashMap$TreeNode, red)},
	{}
};

$MethodInfo _ConcurrentHashMap$TreeNode_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/concurrent/ConcurrentHashMap$Node;Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)V", "(ITK;TV;Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$TreeNode::*)(int32_t,Object$*,Object$*,$ConcurrentHashMap$Node*,ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeNode::init$))},
	{"find", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node;", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0},
	{"findTreeNode", "(ILjava/lang/Object;Ljava/lang/Class;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "(ILjava/lang/Object;Ljava/lang/Class<*>;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", $FINAL, $method(static_cast<ConcurrentHashMap$TreeNode*(ConcurrentHashMap$TreeNode::*)(int32_t,Object$*,$Class*)>(&ConcurrentHashMap$TreeNode::findTreeNode))},
	{}
};

$InnerClassInfo _ConcurrentHashMap$TreeNode_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$TreeNode", "java.util.concurrent.ConcurrentHashMap", "TreeNode", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$Node", "java.util.concurrent.ConcurrentHashMap", "Node", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$TreeNode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$TreeNode",
	"java.util.concurrent.ConcurrentHashMap$Node",
	nullptr,
	_ConcurrentHashMap$TreeNode_FieldInfo_,
	_ConcurrentHashMap$TreeNode_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;",
	nullptr,
	_ConcurrentHashMap$TreeNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$TreeNode($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$TreeNode));
}

void ConcurrentHashMap$TreeNode::init$(int32_t hash, Object$* key, Object$* val, $ConcurrentHashMap$Node* next, ConcurrentHashMap$TreeNode* parent) {
	$ConcurrentHashMap$Node::init$(hash, key, val, next);
	$set(this, parent, parent);
}

$ConcurrentHashMap$Node* ConcurrentHashMap$TreeNode::find(int32_t h, Object$* k) {
	return findTreeNode(h, k, nullptr);
}

ConcurrentHashMap$TreeNode* ConcurrentHashMap$TreeNode::findTreeNode(int32_t h, Object$* k, $Class* kc) {
	if (k != nullptr) {
		$var(ConcurrentHashMap$TreeNode, p, this);
		do {
			int32_t ph = 0;
			int32_t dir = 0;
			$var($Object, pk, nullptr);
			$var(ConcurrentHashMap$TreeNode, q, nullptr);
			$var(ConcurrentHashMap$TreeNode, pl, p->left);
			$var(ConcurrentHashMap$TreeNode, pr, p->right);
			if ((ph = p->hash) > h) {
				$assign(p, pl);
			} else if (ph < h) {
				$assign(p, pr);
			} else {
				bool var$3 = $equals($assign(pk, $nc(p)->key), k);
				if (var$3 || (pk != nullptr && $nc($of(k))->equals(pk))) {
					return p;
				} else if (pl == nullptr) {
					$assign(p, pr);
				} else if (pr == nullptr) {
					$assign(p, pl);
				} else {
					bool var$5 = (kc != nullptr || (kc = $ConcurrentHashMap::comparableClassFor(k)) != nullptr);
					if (var$5 && (dir = $ConcurrentHashMap::compareComparables(kc, k, pk)) != 0) {
						$assign(p, (dir < 0) ? pl : pr);
					} else if (($assign(q, $nc(pr)->findTreeNode(h, k, kc))) != nullptr) {
						return q;
					} else {
						$assign(p, pl);
					}
				}
			}
		} while (p != nullptr);
	}
	return nullptr;
}

ConcurrentHashMap$TreeNode::ConcurrentHashMap$TreeNode() {
}

$Class* ConcurrentHashMap$TreeNode::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$TreeNode, name, initialize, &_ConcurrentHashMap$TreeNode_ClassInfo_, allocate$ConcurrentHashMap$TreeNode);
	return class$;
}

$Class* ConcurrentHashMap$TreeNode::class$ = nullptr;

		} // concurrent
	} // util
} // java