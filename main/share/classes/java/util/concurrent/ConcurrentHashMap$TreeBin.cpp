#include <java/util/concurrent/ConcurrentHashMap$TreeBin.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/util/concurrent/ConcurrentHashMap$TreeNode.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/locks/LockSupport.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef LOCKSTATE
#undef READER
#undef U
#undef WAITER
#undef WRITER

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentHashMap$Node = ::java::util::concurrent::ConcurrentHashMap$Node;
using $ConcurrentHashMap$TreeNode = ::java::util::concurrent::ConcurrentHashMap$TreeNode;
using $LockSupport = ::java::util::concurrent::locks::LockSupport;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$TreeBin_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ConcurrentHashMap$TreeBin, $assertionsDisabled)},
	{"root", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", 0, $field(ConcurrentHashMap$TreeBin, root)},
	{"first", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", $VOLATILE, $field(ConcurrentHashMap$TreeBin, first)},
	{"waiter", "Ljava/lang/Thread;", nullptr, $VOLATILE, $field(ConcurrentHashMap$TreeBin, waiter)},
	{"lockState", "I", nullptr, $VOLATILE, $field(ConcurrentHashMap$TreeBin, lockState)},
	{"WRITER", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap$TreeBin, WRITER)},
	{"WAITER", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap$TreeBin, WAITER)},
	{"READER", "I", nullptr, $STATIC | $FINAL, $constField(ConcurrentHashMap$TreeBin, READER)},
	{"LOCKSTATE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConcurrentHashMap$TreeBin, LOCKSTATE)},
	{}
};

$MethodInfo _ConcurrentHashMap$TreeBin_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)V", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$TreeBin::*)($ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeBin::init$))},
	{"balanceDeletion", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode;Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", $STATIC, $method(static_cast<$ConcurrentHashMap$TreeNode*(*)($ConcurrentHashMap$TreeNode*,$ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeBin::balanceDeletion))},
	{"balanceInsertion", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode;Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", $STATIC, $method(static_cast<$ConcurrentHashMap$TreeNode*(*)($ConcurrentHashMap$TreeNode*,$ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeBin::balanceInsertion))},
	{"checkInvariants", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)Z", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)Z", $STATIC, $method(static_cast<bool(*)($ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeBin::checkInvariants))},
	{"contendedLock", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap$TreeBin::*)()>(&ConcurrentHashMap$TreeBin::contendedLock))},
	{"find", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node;", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $FINAL},
	{"lockRoot", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap$TreeBin::*)()>(&ConcurrentHashMap$TreeBin::lockRoot))},
	{"putTreeVal", "(ILjava/lang/Object;Ljava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "(ITK;TV;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", $FINAL, $method(static_cast<$ConcurrentHashMap$TreeNode*(ConcurrentHashMap$TreeBin::*)(int32_t,Object$*,Object$*)>(&ConcurrentHashMap$TreeBin::putTreeVal))},
	{"removeTreeNode", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)Z", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)Z", $FINAL, $method(static_cast<bool(ConcurrentHashMap$TreeBin::*)($ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeBin::removeTreeNode))},
	{"rotateLeft", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode;Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", $STATIC, $method(static_cast<$ConcurrentHashMap$TreeNode*(*)($ConcurrentHashMap$TreeNode*,$ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeBin::rotateLeft))},
	{"rotateRight", "(Ljava/util/concurrent/ConcurrentHashMap$TreeNode;Ljava/util/concurrent/ConcurrentHashMap$TreeNode;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;)Ljava/util/concurrent/ConcurrentHashMap$TreeNode<TK;TV;>;", $STATIC, $method(static_cast<$ConcurrentHashMap$TreeNode*(*)($ConcurrentHashMap$TreeNode*,$ConcurrentHashMap$TreeNode*)>(&ConcurrentHashMap$TreeBin::rotateRight))},
	{"tieBreakOrder", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(Object$*,Object$*)>(&ConcurrentHashMap$TreeBin::tieBreakOrder))},
	{"unlockRoot", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ConcurrentHashMap$TreeBin::*)()>(&ConcurrentHashMap$TreeBin::unlockRoot))},
	{}
};

$InnerClassInfo _ConcurrentHashMap$TreeBin_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$TreeBin", "java.util.concurrent.ConcurrentHashMap", "TreeBin", $STATIC | $FINAL},
	{"java.util.concurrent.ConcurrentHashMap$Node", "java.util.concurrent.ConcurrentHashMap", "Node", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$TreeBin_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$TreeBin",
	"java.util.concurrent.ConcurrentHashMap$Node",
	nullptr,
	_ConcurrentHashMap$TreeBin_FieldInfo_,
	_ConcurrentHashMap$TreeBin_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;",
	nullptr,
	_ConcurrentHashMap$TreeBin_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$TreeBin($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$TreeBin));
}

bool ConcurrentHashMap$TreeBin::$assertionsDisabled = false;
int64_t ConcurrentHashMap$TreeBin::LOCKSTATE = 0;

int32_t ConcurrentHashMap$TreeBin::tieBreakOrder(Object$* a, Object$* b) {
	$init(ConcurrentHashMap$TreeBin);
	int32_t d = 0;
	if (a == nullptr || b == nullptr || (d = $nc($($nc($of(a))->getClass()->getName()))->compareTo($($nc($of(b))->getClass()->getName()))) == 0) {
		int32_t var$0 = $System::identityHashCode(a);
		d = (var$0 <= $System::identityHashCode(b) ? -1 : 1);
	}
	return d;
}

void ConcurrentHashMap$TreeBin::init$($ConcurrentHashMap$TreeNode* b) {
	$ConcurrentHashMap$Node::init$(-2, nullptr, nullptr);
	$set(this, first, b);
	$var($ConcurrentHashMap$TreeNode, r, nullptr);
	{
		$var($ConcurrentHashMap$TreeNode, x, b);
		$var($ConcurrentHashMap$TreeNode, next, nullptr);
		for (; x != nullptr; $assign(x, next)) {
			$assign(next, $cast($ConcurrentHashMap$TreeNode, $nc(x)->next));
			$set(x, left, ($assignField(x, right, nullptr)));
			if (r == nullptr) {
				$set(x, parent, nullptr);
				x->red = false;
				$assign(r, x);
			} else {
				$var($Object, k, x->key);
				int32_t h = x->hash;
				$Class* kc = nullptr;
				{
					$var($ConcurrentHashMap$TreeNode, p, r);
					for (;;) {
						int32_t dir = 0;
						int32_t ph = 0;
						$var($Object, pk, $nc(p)->key);
						if ((ph = p->hash) > h) {
							dir = -1;
						} else if (ph < h) {
							dir = 1;
						} else {
							bool var$1 = (kc == nullptr && (kc = $ConcurrentHashMap::comparableClassFor(k)) == nullptr);
							if (var$1 || (dir = $ConcurrentHashMap::compareComparables(kc, k, pk)) == 0) {
								dir = tieBreakOrder(k, pk);
							}
						}
						$var($ConcurrentHashMap$TreeNode, xp, p);
						if (($assign(p, (dir <= 0) ? p->left : p->right)) == nullptr) {
							$set(x, parent, xp);
							if (dir <= 0) {
								$set(xp, left, x);
							} else {
								$set(xp, right, x);
							}
							$assign(r, balanceInsertion(r, x));
							break;
						}
					}
				}
			}
		}
	}
	$set(this, root, r);
	if (!ConcurrentHashMap$TreeBin::$assertionsDisabled && !checkInvariants(this->root)) {
		$throwNew($AssertionError);
	}
}

void ConcurrentHashMap$TreeBin::lockRoot() {
	$init($ConcurrentHashMap);
	if (!$nc($ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap$TreeBin::LOCKSTATE, 0, ConcurrentHashMap$TreeBin::WRITER)) {
		contendedLock();
	}
}

void ConcurrentHashMap$TreeBin::unlockRoot() {
	this->lockState = 0;
}

void ConcurrentHashMap$TreeBin::contendedLock() {
	bool waiting = false;
	for (int32_t s = 0;;) {
		if (((int32_t)((s = this->lockState) & (uint32_t)~ConcurrentHashMap$TreeBin::WAITER)) == 0) {
			$init($ConcurrentHashMap);
			if ($nc($ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap$TreeBin::LOCKSTATE, s, ConcurrentHashMap$TreeBin::WRITER)) {
				if (waiting) {
					$set(this, waiter, nullptr);
				}
				return;
			}
		} else if (((int32_t)(s & (uint32_t)ConcurrentHashMap$TreeBin::WAITER)) == 0) {
			$init($ConcurrentHashMap);
			if ($nc($ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap$TreeBin::LOCKSTATE, s, s | ConcurrentHashMap$TreeBin::WAITER)) {
				waiting = true;
				$set(this, waiter, $Thread::currentThread());
			}
		} else if (waiting) {
			$LockSupport::park(this);
		}
	}
}

$ConcurrentHashMap$Node* ConcurrentHashMap$TreeBin::find(int32_t h, Object$* k) {
	if (k != nullptr) {
		{
			$var($ConcurrentHashMap$Node, e, this->first);
			for (; e != nullptr;) {
				int32_t s = 0;
				$var($Object, ek, nullptr);
				if (((int32_t)((s = this->lockState) & (uint32_t)(ConcurrentHashMap$TreeBin::WAITER | ConcurrentHashMap$TreeBin::WRITER))) != 0) {
					bool var$0 = e->hash == h;
					if (var$0) {
						bool var$1 = $equals($assign(ek, e->key), k);
						var$0 = (var$1 || (ek != nullptr && $of(k)->equals(ek)));
					}
					if (var$0) {
						return e;
					}
					$assign(e, e->next);
				} else {
					$init($ConcurrentHashMap);
					if ($nc($ConcurrentHashMap::U)->compareAndSetInt(this, ConcurrentHashMap$TreeBin::LOCKSTATE, s, s + ConcurrentHashMap$TreeBin::READER)) {
						$var($ConcurrentHashMap$TreeNode, r, nullptr);
						$var($ConcurrentHashMap$TreeNode, p, nullptr);
						{
							$var($Throwable, var$2, nullptr);
							try {
								$assign(p, ($assign(r, this->root)) == nullptr ? ($ConcurrentHashMap$TreeNode*)nullptr : $nc(r)->findTreeNode(h, k, nullptr));
							} catch ($Throwable&) {
								$assign(var$2, $catch());
							} /*finally*/ {
								$var($Thread, w, nullptr);
								if ($nc($ConcurrentHashMap::U)->getAndAddInt(this, ConcurrentHashMap$TreeBin::LOCKSTATE, -ConcurrentHashMap$TreeBin::READER) == (ConcurrentHashMap$TreeBin::READER | ConcurrentHashMap$TreeBin::WAITER) && ($assign(w, this->waiter)) != nullptr) {
									$LockSupport::unpark(w);
								}
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
						return p;
					}
				}
			}
		}
	}
	return nullptr;
}

$ConcurrentHashMap$TreeNode* ConcurrentHashMap$TreeBin::putTreeVal(int32_t h, Object$* k, Object$* v) {
	$Class* kc = nullptr;
	bool searched = false;
	{
		$var($ConcurrentHashMap$TreeNode, p, this->root);
		for (;;) {
			int32_t dir = 0;
			int32_t ph = 0;
			$var($Object, pk, nullptr);
			if (p == nullptr) {
				$set(this, first, ($assignField(this, root, $new($ConcurrentHashMap$TreeNode, h, k, v, nullptr, nullptr))));
				break;
			} else if ((ph = $nc(p)->hash) > h) {
				dir = -1;
			} else if (ph < h) {
				dir = 1;
			} else {
				bool var$1 = $equals($assign(pk, p->key), k);
				if (var$1 || (pk != nullptr && $nc($of(k))->equals(pk))) {
					return p;
				} else {
					bool var$3 = (kc == nullptr && (kc = $ConcurrentHashMap::comparableClassFor(k)) == nullptr);
					if (var$3 || (dir = $ConcurrentHashMap::compareComparables(kc, k, pk)) == 0) {
						if (!searched) {
							$var($ConcurrentHashMap$TreeNode, q, nullptr);
							$var($ConcurrentHashMap$TreeNode, ch, nullptr);
							searched = true;
							bool var$5 = ($assign(ch, p->left)) != nullptr;
							bool var$4 = (var$5 && ($assign(q, $nc(ch)->findTreeNode(h, k, kc))) != nullptr);
							if (!var$4) {
								bool var$6 = ($assign(ch, p->right)) != nullptr;
								var$4 = (var$6 && ($assign(q, $nc(ch)->findTreeNode(h, k, kc))) != nullptr);
							}
							if (var$4) {
								return q;
							}
						}
						dir = tieBreakOrder(k, pk);
					}
				}
			}
			$var($ConcurrentHashMap$TreeNode, xp, p);
			if (($assign(p, (dir <= 0) ? $nc(p)->left : p->right)) == nullptr) {
				$var($ConcurrentHashMap$TreeNode, x, nullptr);
				$var($ConcurrentHashMap$TreeNode, f, this->first);
				$set(this, first, ($assign(x, $new($ConcurrentHashMap$TreeNode, h, k, v, f, xp))));
				if (f != nullptr) {
					$set(f, prev, x);
				}
				if (dir <= 0) {
					$set($nc(xp), left, x);
				} else {
					$set($nc(xp), right, x);
				}
				if (!$nc(xp)->red) {
					x->red = true;
				} else {
					lockRoot();
					{
						$var($Throwable, var$7, nullptr);
						try {
							$set(this, root, balanceInsertion(this->root, x));
						} catch ($Throwable&) {
							$assign(var$7, $catch());
						} /*finally*/ {
							unlockRoot();
						}
						if (var$7 != nullptr) {
							$throw(var$7);
						}
					}
				}
				break;
			}
		}
	}
	if (!ConcurrentHashMap$TreeBin::$assertionsDisabled && !checkInvariants(this->root)) {
		$throwNew($AssertionError);
	}
	return nullptr;
}

bool ConcurrentHashMap$TreeBin::removeTreeNode($ConcurrentHashMap$TreeNode* p) {
	$var($ConcurrentHashMap$TreeNode, next, $cast($ConcurrentHashMap$TreeNode, $nc(p)->next));
	$var($ConcurrentHashMap$TreeNode, pred, p->prev);
	$var($ConcurrentHashMap$TreeNode, r, nullptr);
	$var($ConcurrentHashMap$TreeNode, rl, nullptr);
	if (pred == nullptr) {
		$set(this, first, next);
	} else {
		$set($nc(pred), next, next);
	}
	if (next != nullptr) {
		$set(next, prev, pred);
	}
	if (this->first == nullptr) {
		$set(this, root, nullptr);
		return true;
	}
	bool var$2 = ($assign(r, this->root)) == nullptr;
	bool var$1 = var$2 || $nc(r)->right == nullptr;
	bool var$0 = var$1 || ($assign(rl, $nc(r)->left)) == nullptr;
	if (var$0 || $nc(rl)->left == nullptr) {
		return true;
	}
	lockRoot();
	{
		$var($Throwable, var$3, nullptr);
		try {
			$var($ConcurrentHashMap$TreeNode, replacement, nullptr);
			$var($ConcurrentHashMap$TreeNode, pl, p->left);
			$var($ConcurrentHashMap$TreeNode, pr, p->right);
			if (pl != nullptr && pr != nullptr) {
				$var($ConcurrentHashMap$TreeNode, s, pr);
				$var($ConcurrentHashMap$TreeNode, sl, nullptr);
				while (($assign(sl, $nc(s)->left)) != nullptr) {
					$assign(s, sl);
				}
				bool c = $nc(s)->red;
				s->red = p->red;
				p->red = c;
				$var($ConcurrentHashMap$TreeNode, sr, s->right);
				$var($ConcurrentHashMap$TreeNode, pp, p->parent);
				if (s == pr) {
					$set(p, parent, s);
					$set(s, right, p);
				} else {
					$var($ConcurrentHashMap$TreeNode, sp, s->parent);
					if (($assignField(p, parent, sp)) != nullptr) {
						if (s == $nc(sp)->left) {
							$set(sp, left, p);
						} else {
							$set(sp, right, p);
						}
					}
					if (($assignField(s, right, pr)) != nullptr) {
						$set(pr, parent, s);
					}
				}
				$set(p, left, nullptr);
				if (($assignField(p, right, sr)) != nullptr) {
					$set($nc(sr), parent, p);
				}
				if (($assignField(s, left, pl)) != nullptr) {
					$set(pl, parent, s);
				}
				if (($assignField(s, parent, pp)) == nullptr) {
					$assign(r, s);
				} else if (p == $nc(pp)->left) {
					$set(pp, left, s);
				} else {
					$set(pp, right, s);
				}
				if (sr != nullptr) {
					$assign(replacement, sr);
				} else {
					$assign(replacement, p);
				}
			} else if (pl != nullptr) {
				$assign(replacement, pl);
			} else if (pr != nullptr) {
				$assign(replacement, pr);
			} else {
				$assign(replacement, p);
			}
			if (replacement != p) {
				$var($ConcurrentHashMap$TreeNode, pp, $assignField($nc(replacement), parent, p->parent));
				if (pp == nullptr) {
					$assign(r, replacement);
				} else if (p == $nc(pp)->left) {
					$set(pp, left, replacement);
				} else {
					$set(pp, right, replacement);
				}
				$set(p, left, ($assignField(p, right, ($assignField(p, parent, nullptr)))));
			}
			$set(this, root, (p->red) ? r : balanceDeletion(r, replacement));
			if (p == replacement) {
				$var($ConcurrentHashMap$TreeNode, pp, nullptr);
				if (($assign(pp, p->parent)) != nullptr) {
					if (p == $nc(pp)->left) {
						$set(pp, left, nullptr);
					} else if (p == pp->right) {
						$set(pp, right, nullptr);
					}
					$set(p, parent, nullptr);
				}
			}
		} catch ($Throwable&) {
			$assign(var$3, $catch());
		} /*finally*/ {
			unlockRoot();
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
	if (!ConcurrentHashMap$TreeBin::$assertionsDisabled && !checkInvariants(this->root)) {
		$throwNew($AssertionError);
	}
	return false;
}

$ConcurrentHashMap$TreeNode* ConcurrentHashMap$TreeBin::rotateLeft($ConcurrentHashMap$TreeNode* root$renamed, $ConcurrentHashMap$TreeNode* p) {
	$init(ConcurrentHashMap$TreeBin);
	$var($ConcurrentHashMap$TreeNode, root, root$renamed);
	$var($ConcurrentHashMap$TreeNode, r, nullptr);
	$var($ConcurrentHashMap$TreeNode, pp, nullptr);
	$var($ConcurrentHashMap$TreeNode, rl, nullptr);
	if (p != nullptr && ($assign(r, p->right)) != nullptr) {
		if (($assign(rl, ($assignField(p, right, $nc(r)->left)))) != nullptr) {
			$set($nc(rl), parent, p);
		}
		if (($assign(pp, ($assignField($nc(r), parent, p->parent)))) == nullptr) {
			$nc(($assign(root, r)))->red = false;
		} else if ($nc(pp)->left == p) {
			$set(pp, left, r);
		} else {
			$set(pp, right, r);
		}
		$set($nc(r), left, p);
		$set(p, parent, r);
	}
	return root;
}

$ConcurrentHashMap$TreeNode* ConcurrentHashMap$TreeBin::rotateRight($ConcurrentHashMap$TreeNode* root$renamed, $ConcurrentHashMap$TreeNode* p) {
	$init(ConcurrentHashMap$TreeBin);
	$var($ConcurrentHashMap$TreeNode, root, root$renamed);
	$var($ConcurrentHashMap$TreeNode, l, nullptr);
	$var($ConcurrentHashMap$TreeNode, pp, nullptr);
	$var($ConcurrentHashMap$TreeNode, lr, nullptr);
	if (p != nullptr && ($assign(l, p->left)) != nullptr) {
		if (($assign(lr, ($assignField(p, left, $nc(l)->right)))) != nullptr) {
			$set($nc(lr), parent, p);
		}
		if (($assign(pp, ($assignField($nc(l), parent, p->parent)))) == nullptr) {
			$nc(($assign(root, l)))->red = false;
		} else if ($nc(pp)->right == p) {
			$set(pp, right, l);
		} else {
			$set(pp, left, l);
		}
		$set($nc(l), right, p);
		$set(p, parent, l);
	}
	return root;
}

$ConcurrentHashMap$TreeNode* ConcurrentHashMap$TreeBin::balanceInsertion($ConcurrentHashMap$TreeNode* root$renamed, $ConcurrentHashMap$TreeNode* x$renamed) {
	$init(ConcurrentHashMap$TreeBin);
	$var($ConcurrentHashMap$TreeNode, root, root$renamed);
	$var($ConcurrentHashMap$TreeNode, x, x$renamed);
	$nc(x)->red = true;
	{
		$var($ConcurrentHashMap$TreeNode, xp, nullptr);
		$var($ConcurrentHashMap$TreeNode, xpp, nullptr);
		$var($ConcurrentHashMap$TreeNode, xppl, nullptr);
		$var($ConcurrentHashMap$TreeNode, xppr, nullptr);
		for (;;) {
			if (($assign(xp, x->parent)) == nullptr) {
				x->red = false;
				return x;
			} else if (!$nc(xp)->red || ($assign(xpp, $nc(xp)->parent)) == nullptr) {
				return root;
			}
			if (xp == ($assign(xppl, $nc(xpp)->left))) {
				bool var$0 = ($assign(xppr, xpp->right)) != nullptr;
				if (var$0 && $nc(xppr)->red) {
					xppr->red = false;
					$nc(xp)->red = false;
					xpp->red = true;
					$assign(x, xpp);
				} else {
					if (x == $nc(xp)->right) {
						$assign(root, rotateLeft(root, $assign(x, xp)));
						$assign(xpp, ($assign(xp, x->parent)) == nullptr ? ($ConcurrentHashMap$TreeNode*)nullptr : xp->parent);
					}
					if (xp != nullptr) {
						xp->red = false;
						if (xpp != nullptr) {
							xpp->red = true;
							$assign(root, rotateRight(root, xpp));
						}
					}
				}
			} else if (xppl != nullptr && xppl->red) {
				xppl->red = false;
				$nc(xp)->red = false;
				xpp->red = true;
				$assign(x, xpp);
			} else {
				if (x == $nc(xp)->left) {
					$assign(root, rotateRight(root, $assign(x, xp)));
					$assign(xpp, ($assign(xp, x->parent)) == nullptr ? ($ConcurrentHashMap$TreeNode*)nullptr : xp->parent);
				}
				if (xp != nullptr) {
					xp->red = false;
					if (xpp != nullptr) {
						xpp->red = true;
						$assign(root, rotateLeft(root, xpp));
					}
				}
			}
		}
	}
}

$ConcurrentHashMap$TreeNode* ConcurrentHashMap$TreeBin::balanceDeletion($ConcurrentHashMap$TreeNode* root$renamed, $ConcurrentHashMap$TreeNode* x$renamed) {
	$init(ConcurrentHashMap$TreeBin);
	$var($ConcurrentHashMap$TreeNode, root, root$renamed);
	$var($ConcurrentHashMap$TreeNode, x, x$renamed);
	{
		$var($ConcurrentHashMap$TreeNode, xp, nullptr);
		$var($ConcurrentHashMap$TreeNode, xpl, nullptr);
		$var($ConcurrentHashMap$TreeNode, xpr, nullptr);
		for (;;) {
			if (x == nullptr || x == root) {
				return root;
			} else if (($assign(xp, $nc(x)->parent)) == nullptr) {
				x->red = false;
				return x;
			} else if (x->red) {
				x->red = false;
				return root;
			} else if (($assign(xpl, $nc(xp)->left)) == x) {
				bool var$0 = ($assign(xpr, xp->right)) != nullptr;
				if (var$0 && $nc(xpr)->red) {
					xpr->red = false;
					xp->red = true;
					$assign(root, rotateLeft(root, xp));
					$assign(xpr, ($assign(xp, x->parent)) == nullptr ? ($ConcurrentHashMap$TreeNode*)nullptr : xp->right);
				}
				if (xpr == nullptr) {
					$assign(x, xp);
				} else {
					$var($ConcurrentHashMap$TreeNode, sl, $nc(xpr)->left);
					$var($ConcurrentHashMap$TreeNode, sr, xpr->right);
					if ((sr == nullptr || !$nc(sr)->red) && (sl == nullptr || !$nc(sl)->red)) {
						xpr->red = true;
						$assign(x, xp);
					} else {
						if (sr == nullptr || !$nc(sr)->red) {
							if (sl != nullptr) {
								sl->red = false;
							}
							xpr->red = true;
							$assign(root, rotateRight(root, xpr));
							$assign(xpr, ($assign(xp, x->parent)) == nullptr ? ($ConcurrentHashMap$TreeNode*)nullptr : xp->right);
						}
						if (xpr != nullptr) {
							xpr->red = (xp == nullptr) ? false : xp->red;
							if (($assign(sr, xpr->right)) != nullptr) {
								$nc(sr)->red = false;
							}
						}
						if (xp != nullptr) {
							xp->red = false;
							$assign(root, rotateLeft(root, xp));
						}
						$assign(x, root);
					}
				}
			} else {
				if (xpl != nullptr && xpl->red) {
					xpl->red = false;
					xp->red = true;
					$assign(root, rotateRight(root, xp));
					$assign(xpl, ($assign(xp, x->parent)) == nullptr ? ($ConcurrentHashMap$TreeNode*)nullptr : xp->left);
				}
				if (xpl == nullptr) {
					$assign(x, xp);
				} else {
					$var($ConcurrentHashMap$TreeNode, sl, $nc(xpl)->left);
					$var($ConcurrentHashMap$TreeNode, sr, xpl->right);
					if ((sl == nullptr || !$nc(sl)->red) && (sr == nullptr || !$nc(sr)->red)) {
						xpl->red = true;
						$assign(x, xp);
					} else {
						if (sl == nullptr || !$nc(sl)->red) {
							if (sr != nullptr) {
								sr->red = false;
							}
							xpl->red = true;
							$assign(root, rotateLeft(root, xpl));
							$assign(xpl, ($assign(xp, x->parent)) == nullptr ? ($ConcurrentHashMap$TreeNode*)nullptr : xp->left);
						}
						if (xpl != nullptr) {
							xpl->red = (xp == nullptr) ? false : xp->red;
							if (($assign(sl, xpl->left)) != nullptr) {
								$nc(sl)->red = false;
							}
						}
						if (xp != nullptr) {
							xp->red = false;
							$assign(root, rotateRight(root, xp));
						}
						$assign(x, root);
					}
				}
			}
		}
	}
}

bool ConcurrentHashMap$TreeBin::checkInvariants($ConcurrentHashMap$TreeNode* t) {
	$init(ConcurrentHashMap$TreeBin);
	$var($ConcurrentHashMap$TreeNode, tp, $nc(t)->parent);
	$var($ConcurrentHashMap$TreeNode, tl, t->left);
	$var($ConcurrentHashMap$TreeNode, tr, t->right);
	$var($ConcurrentHashMap$TreeNode, tb, t->prev);
	$var($ConcurrentHashMap$TreeNode, tn, $cast($ConcurrentHashMap$TreeNode, t->next));
	if (tb != nullptr && !$equals(tb->next, t)) {
		return false;
	}
	if (tn != nullptr && tn->prev != t) {
		return false;
	}
	if (tp != nullptr && t != tp->left && t != tp->right) {
		return false;
	}
	if (tl != nullptr && (tl->parent != t || $nc(tl)->hash > t->hash)) {
		return false;
	}
	if (tr != nullptr && (tr->parent != t || $nc(tr)->hash < t->hash)) {
		return false;
	}
	if (t->red && tl != nullptr && tl->red && tr != nullptr && tr->red) {
		return false;
	}
	if (tl != nullptr && !checkInvariants(tl)) {
		return false;
	}
	if (tr != nullptr && !checkInvariants(tr)) {
		return false;
	}
	return true;
}

void clinit$ConcurrentHashMap$TreeBin($Class* class$) {
	$load($ConcurrentHashMap);
	ConcurrentHashMap$TreeBin::$assertionsDisabled = !$ConcurrentHashMap::class$->desiredAssertionStatus();
	$init($ConcurrentHashMap);
	ConcurrentHashMap$TreeBin::LOCKSTATE = $nc($ConcurrentHashMap::U)->objectFieldOffset(ConcurrentHashMap$TreeBin::class$, "lockState"_s);
}

ConcurrentHashMap$TreeBin::ConcurrentHashMap$TreeBin() {
}

$Class* ConcurrentHashMap$TreeBin::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$TreeBin, name, initialize, &_ConcurrentHashMap$TreeBin_ClassInfo_, clinit$ConcurrentHashMap$TreeBin, allocate$ConcurrentHashMap$TreeBin);
	return class$;
}

$Class* ConcurrentHashMap$TreeBin::class$ = nullptr;

		} // concurrent
	} // util
} // java