#ifndef _java_util_concurrent_ConcurrentHashMap$TreeBin_h_
#define _java_util_concurrent_ConcurrentHashMap$TreeBin_h_
//$ class java.util.concurrent.ConcurrentHashMap$TreeBin
//$ extends java.util.concurrent.ConcurrentHashMap$Node

#include <java/util/concurrent/ConcurrentHashMap$Node.h>

#pragma push_macro("LOCKSTATE")
#undef LOCKSTATE
#pragma push_macro("READER")
#undef READER
#pragma push_macro("WAITER")
#undef WAITER
#pragma push_macro("WRITER")
#undef WRITER

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap$TreeNode;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap$TreeBin : public ::java::util::concurrent::ConcurrentHashMap$Node {
	$class(ConcurrentHashMap$TreeBin, 0, ::java::util::concurrent::ConcurrentHashMap$Node)
public:
	ConcurrentHashMap$TreeBin();
	void init$(::java::util::concurrent::ConcurrentHashMap$TreeNode* b);
	static ::java::util::concurrent::ConcurrentHashMap$TreeNode* balanceDeletion(::java::util::concurrent::ConcurrentHashMap$TreeNode* root, ::java::util::concurrent::ConcurrentHashMap$TreeNode* x);
	static ::java::util::concurrent::ConcurrentHashMap$TreeNode* balanceInsertion(::java::util::concurrent::ConcurrentHashMap$TreeNode* root, ::java::util::concurrent::ConcurrentHashMap$TreeNode* x);
	static bool checkInvariants(::java::util::concurrent::ConcurrentHashMap$TreeNode* t);
	void contendedLock();
	virtual ::java::util::concurrent::ConcurrentHashMap$Node* find(int32_t h, Object$* k) override;
	void lockRoot();
	::java::util::concurrent::ConcurrentHashMap$TreeNode* putTreeVal(int32_t h, Object$* k, Object$* v);
	bool removeTreeNode(::java::util::concurrent::ConcurrentHashMap$TreeNode* p);
	static ::java::util::concurrent::ConcurrentHashMap$TreeNode* rotateLeft(::java::util::concurrent::ConcurrentHashMap$TreeNode* root, ::java::util::concurrent::ConcurrentHashMap$TreeNode* p);
	static ::java::util::concurrent::ConcurrentHashMap$TreeNode* rotateRight(::java::util::concurrent::ConcurrentHashMap$TreeNode* root, ::java::util::concurrent::ConcurrentHashMap$TreeNode* p);
	static int32_t tieBreakOrder(Object$* a, Object$* b);
	void unlockRoot();
	static bool $assertionsDisabled;
	::java::util::concurrent::ConcurrentHashMap$TreeNode* root = nullptr;
	$volatile(::java::util::concurrent::ConcurrentHashMap$TreeNode*) first = nullptr;
	$volatile($Thread*) waiter = nullptr;
	$volatile(int32_t) lockState = 0;
	static const int32_t WRITER = 1;
	static const int32_t WAITER = 2;
	static const int32_t READER = 4;
	static int64_t LOCKSTATE;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("LOCKSTATE")
#pragma pop_macro("READER")
#pragma pop_macro("WAITER")
#pragma pop_macro("WRITER")

#endif // _java_util_concurrent_ConcurrentHashMap$TreeBin_h_