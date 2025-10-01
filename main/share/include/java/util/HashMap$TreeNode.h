#ifndef _java_util_HashMap$TreeNode_h_
#define _java_util_HashMap$TreeNode_h_
//$ class java.util.HashMap$TreeNode
//$ extends java.util.LinkedHashMap$Entry

#include <java/lang/Array.h>
#include <java/util/LinkedHashMap$Entry.h>

namespace java {
	namespace util {
		class HashMap;
		class HashMap$Node;
	}
}

namespace java {
	namespace util {

class $import HashMap$TreeNode : public ::java::util::LinkedHashMap$Entry {
	$class(HashMap$TreeNode, 0, ::java::util::LinkedHashMap$Entry)
public:
	HashMap$TreeNode();
	void init$(int32_t hash, Object$* key, Object$* val, ::java::util::HashMap$Node* next);
	static ::java::util::HashMap$TreeNode* balanceDeletion(::java::util::HashMap$TreeNode* root, ::java::util::HashMap$TreeNode* x);
	static ::java::util::HashMap$TreeNode* balanceInsertion(::java::util::HashMap$TreeNode* root, ::java::util::HashMap$TreeNode* x);
	static bool checkInvariants(::java::util::HashMap$TreeNode* t);
	::java::util::HashMap$TreeNode* find(int32_t h, Object$* k, $Class* kc);
	::java::util::HashMap$TreeNode* getTreeNode(int32_t h, Object$* k);
	static void moveRootToFront($Array<::java::util::HashMap$Node>* tab, ::java::util::HashMap$TreeNode* root);
	::java::util::HashMap$TreeNode* putTreeVal(::java::util::HashMap* map, $Array<::java::util::HashMap$Node>* tab, int32_t h, Object$* k, Object$* v);
	void removeTreeNode(::java::util::HashMap* map, $Array<::java::util::HashMap$Node>* tab, bool movable);
	::java::util::HashMap$TreeNode* root();
	static ::java::util::HashMap$TreeNode* rotateLeft(::java::util::HashMap$TreeNode* root, ::java::util::HashMap$TreeNode* p);
	static ::java::util::HashMap$TreeNode* rotateRight(::java::util::HashMap$TreeNode* root, ::java::util::HashMap$TreeNode* p);
	void split(::java::util::HashMap* map, $Array<::java::util::HashMap$Node>* tab, int32_t index, int32_t bit);
	static int32_t tieBreakOrder(Object$* a, Object$* b);
	void treeify($Array<::java::util::HashMap$Node>* tab);
	::java::util::HashMap$Node* untreeify(::java::util::HashMap* map);
	static bool $assertionsDisabled;
	::java::util::HashMap$TreeNode* parent = nullptr;
	::java::util::HashMap$TreeNode* left = nullptr;
	::java::util::HashMap$TreeNode* right = nullptr;
	::java::util::HashMap$TreeNode* prev = nullptr;
	bool red = false;
};

	} // util
} // java

#endif // _java_util_HashMap$TreeNode_h_