#ifndef _java_util_concurrent_ConcurrentHashMap$TreeNode_h_
#define _java_util_concurrent_ConcurrentHashMap$TreeNode_h_
//$ class java.util.concurrent.ConcurrentHashMap$TreeNode
//$ extends java.util.concurrent.ConcurrentHashMap$Node

#include <java/util/concurrent/ConcurrentHashMap$Node.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$TreeNode : public ::java::util::concurrent::ConcurrentHashMap$Node {
	$class(ConcurrentHashMap$TreeNode, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$Node)
public:
	ConcurrentHashMap$TreeNode();
	void init$(int32_t hash, Object$* key, Object$* val, ::java::util::concurrent::ConcurrentHashMap$Node* next, ::java::util::concurrent::ConcurrentHashMap$TreeNode* parent);
	virtual ::java::util::concurrent::ConcurrentHashMap$Node* find(int32_t h, Object$* k) override;
	::java::util::concurrent::ConcurrentHashMap$TreeNode* findTreeNode(int32_t h, Object$* k, $Class* kc);
	::java::util::concurrent::ConcurrentHashMap$TreeNode* parent = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TreeNode* left = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TreeNode* right = nullptr;
	::java::util::concurrent::ConcurrentHashMap$TreeNode* prev = nullptr;
	bool red = false;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$TreeNode_h_