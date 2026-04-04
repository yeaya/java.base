#include <java/util/HashMap$TreeNode.h>
#include <java/lang/AssertionError.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap$Entry.h>
#include <jcpp.h>

using $HashMap$NodeArray = $Array<::java::util::HashMap$Node>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $HashMap$Node = ::java::util::HashMap$Node;
using $LinkedHashMap$Entry = ::java::util::LinkedHashMap$Entry;

namespace java {
	namespace util {

bool HashMap$TreeNode::$assertionsDisabled = false;

void HashMap$TreeNode::init$(int32_t hash, Object$* key, Object$* val, $HashMap$Node* next) {
	$LinkedHashMap$Entry::init$(hash, key, val, next);
}

HashMap$TreeNode* HashMap$TreeNode::root() {
	$useLocalObjectStack();
	$var(HashMap$TreeNode, r, this);
	$var(HashMap$TreeNode, p, nullptr);
	for (;;) {
		if (($assign(p, $nc(r)->parent)) == nullptr) {
			return r;
		}
		$assign(r, p);
	}
}

void HashMap$TreeNode::moveRootToFront($HashMap$NodeArray* tab, HashMap$TreeNode* root) {
	$init(HashMap$TreeNode);
	$useLocalObjectStack();
	int32_t n = 0;
	if (root != nullptr && tab != nullptr && (n = tab->length) > 0) {
		int32_t index = (n - 1) & root->hash;
		$var(HashMap$TreeNode, first, $cast(HashMap$TreeNode, tab->get(index)));
		if (root != first) {
			$var($HashMap$Node, rn, nullptr);
			tab->set(index, root);
			$var(HashMap$TreeNode, rp, root->prev);
			if (($assign(rn, root->next)) != nullptr) {
				$set($nc($cast(HashMap$TreeNode, rn)), prev, rp);
			}
			if (rp != nullptr) {
				$set(rp, next, rn);
			}
			if (first != nullptr) {
				$set(first, prev, root);
			}
			$set(root, next, first);
			$set(root, prev, nullptr);
		}
		if (!HashMap$TreeNode::$assertionsDisabled && !checkInvariants(root)) {
			$throwNew($AssertionError);
		}
	}
}

HashMap$TreeNode* HashMap$TreeNode::find(int32_t h, Object$* k, $Class* kc) {
	$useLocalObjectStack();
	$var(HashMap$TreeNode, p, this);
	do {
		int32_t ph = 0;
		int32_t dir = 0;
		$var($Object, pk, nullptr);
		$var(HashMap$TreeNode, pl, $nc(p)->left);
		$var(HashMap$TreeNode, pr, p->right);
		$var(HashMap$TreeNode, q, nullptr);
		if ((ph = p->hash) > h) {
			$assign(p, pl);
		} else if (ph < h) {
			$assign(p, pr);
		} else {
			bool var$0 = $equals($assign(pk, p->key), k);
			if (var$0 || (k != nullptr && $of(k)->equals(pk))) {
				return p;
			} else if (pl == nullptr) {
				$assign(p, pr);
			} else if (pr == nullptr) {
				$assign(p, pl);
			} else {
				bool var$1 = kc != nullptr || (kc = $HashMap::comparableClassFor(k)) != nullptr;
				if (var$1 && (dir = $HashMap::compareComparables(kc, k, pk)) != 0) {
					$assign(p, (dir < 0) ? pl : pr);
				} else if (($assign(q, pr->find(h, k, kc))) != nullptr) {
					return q;
				} else {
					$assign(p, pl);
				}
			}
		}
	} while (p != nullptr);
	return nullptr;
}

HashMap$TreeNode* HashMap$TreeNode::getTreeNode(int32_t h, Object$* k) {
	return $nc(((this->parent != nullptr) ? $(root()) : this))->find(h, k, nullptr);
}

int32_t HashMap$TreeNode::tieBreakOrder(Object$* a, Object$* b) {
	$init(HashMap$TreeNode);
	$useLocalObjectStack();
	int32_t d = 0;
	if (a == nullptr || b == nullptr || (d = $$nc($of(a)->getClass()->getName())->compareTo($($of(b)->getClass()->getName()))) == 0) {
		int32_t var$0 = $System::identityHashCode(a);
		d = (var$0 <= $System::identityHashCode(b) ? -1 : 1);
	}
	return d;
}

void HashMap$TreeNode::treeify($HashMap$NodeArray* tab) {
	$useLocalObjectStack();
	$var(HashMap$TreeNode, root, nullptr);
	{
		$var(HashMap$TreeNode, x, this);
		$var(HashMap$TreeNode, next, nullptr);
		for (; x != nullptr; $assign(x, next)) {
			$assign(next, $cast(HashMap$TreeNode, x->next));
			$set(x, left, $set(x, right, nullptr));
			if (root == nullptr) {
				$set(x, parent, nullptr);
				x->red = false;
				$assign(root, x);
			} else {
				$var($Object, k, x->key);
				int32_t h = x->hash;
				$Class* kc = nullptr;
				{
					$var(HashMap$TreeNode, p, root);
					for (;;) {
						int32_t dir = 0;
						int32_t ph = 0;
						$var($Object, pk, $nc(p)->key);
						if ((ph = p->hash) > h) {
							dir = -1;
						} else if (ph < h) {
							dir = 1;
						} else {
							bool var$0 = kc == nullptr && (kc = $HashMap::comparableClassFor(k)) == nullptr;
							if (var$0 || (dir = $HashMap::compareComparables(kc, k, pk)) == 0) {
								dir = tieBreakOrder(k, pk);
							}
						}
						$var(HashMap$TreeNode, xp, p);
						if (($assign(p, (dir <= 0) ? p->left : p->right)) == nullptr) {
							$set(x, parent, xp);
							if (dir <= 0) {
								$set(xp, left, x);
							} else {
								$set(xp, right, x);
							}
							$assign(root, balanceInsertion(root, x));
							break;
						}
					}
				}
			}
		}
	}
	moveRootToFront(tab, root);
}

$HashMap$Node* HashMap$TreeNode::untreeify($HashMap* map) {
	$useLocalObjectStack();
	$var($HashMap$Node, hd, nullptr);
	$var($HashMap$Node, tl, nullptr);
	{
		$var($HashMap$Node, q, this);
		for (; q != nullptr; $assign(q, q->next)) {
			$var($HashMap$Node, p, $nc(map)->replacementNode(q, nullptr));
			if (tl == nullptr) {
				$assign(hd, p);
			} else {
				$set(tl, next, p);
			}
			$assign(tl, p);
		}
	}
	return hd;
}

HashMap$TreeNode* HashMap$TreeNode::putTreeVal($HashMap* map, $HashMap$NodeArray* tab, int32_t h, Object$* k, Object$* v) {
	$useLocalObjectStack();
	$Class* kc = nullptr;
	bool searched = false;
	$var(HashMap$TreeNode, root, (this->parent != nullptr) ? this->root() : this);
	{
		$var(HashMap$TreeNode, p, root);
		for (;;) {
			int32_t dir = 0;
			int32_t ph = 0;
			$var($Object, pk, nullptr);
			if ((ph = $nc(p)->hash) > h) {
				dir = -1;
			} else if (ph < h) {
				dir = 1;
			} else {
				bool var$0 = $equals($assign(pk, p->key), k);
				if (var$0 || (k != nullptr && $of(k)->equals(pk))) {
					return p;
				} else {
					bool var$1 = kc == nullptr && (kc = $HashMap::comparableClassFor(k)) == nullptr;
					if (var$1 || (dir = $HashMap::compareComparables(kc, k, pk)) == 0) {
						if (!searched) {
							$var(HashMap$TreeNode, q, nullptr);
							$var(HashMap$TreeNode, ch, nullptr);
							searched = true;
							bool var$3 = ($assign(ch, p->left)) != nullptr;
							bool var$2 = var$3 && ($assign(q, $nc(ch)->find(h, k, kc))) != nullptr;
							if (!var$2) {
								bool var$4 = ($assign(ch, p->right)) != nullptr;
								var$2 = var$4 && ($assign(q, $nc(ch)->find(h, k, kc))) != nullptr;
							}
							if (var$2) {
								return q;
							}
						}
						dir = tieBreakOrder(k, pk);
					}
				}
			}
			$var(HashMap$TreeNode, xp, p);
			if (($assign(p, (dir <= 0) ? p->left : p->right)) == nullptr) {
				$var($HashMap$Node, xpn, xp->next);
				$var(HashMap$TreeNode, x, $nc(map)->newTreeNode(h, k, v, xpn));
				if (dir <= 0) {
					$set(xp, left, x);
				} else {
					$set(xp, right, x);
				}
				$set(xp, next, x);
				$set($nc(x), parent, $set($nc(x), prev, xp));
				if (xpn != nullptr) {
					$set($cast(HashMap$TreeNode, xpn), prev, x);
				}
				moveRootToFront(tab, $(balanceInsertion(root, x)));
				return nullptr;
			}
		}
	}
}

void HashMap$TreeNode::removeTreeNode($HashMap* map, $HashMap$NodeArray* tab, bool movable) {
	$useLocalObjectStack();
	int32_t n = 0;
	if (tab == nullptr || (n = tab->length) == 0) {
		return;
	}
	int32_t index = (n - 1) & this->hash;
	$var(HashMap$TreeNode, first, $cast(HashMap$TreeNode, $nc(tab)->get(index)));
	$var(HashMap$TreeNode, root, first);
	$var(HashMap$TreeNode, rl, nullptr);
	$var(HashMap$TreeNode, succ, $cast(HashMap$TreeNode, this->next));
	$var(HashMap$TreeNode, pred, this->prev);
	if (pred == nullptr) {
		tab->set(index, $assign(first, succ));
	} else {
		$set(pred, next, succ);
	}
	if (succ != nullptr) {
		$set(succ, prev, pred);
	}
	if (first == nullptr) {
		return;
	}
	if ($nc(root)->parent != nullptr) {
		$assign(root, root->root());
	}
	bool var$0 = root == nullptr;
	if (!var$0) {
		bool var$1 = movable;
		if (var$1) {
			bool var$2 = root->right == nullptr || ($assign(rl, root->left)) == nullptr;
			var$1 = var$2 || $nc(rl)->left == nullptr;
		}
		var$0 = var$1;
	}
	if (var$0) {
		tab->set(index, $($nc(first)->untreeify(map)));
		return;
	}
	$var(HashMap$TreeNode, p, this);
	$var(HashMap$TreeNode, pl, this->left);
	$var(HashMap$TreeNode, pr, this->right);
	$var(HashMap$TreeNode, replacement, nullptr);
	if (pl != nullptr && pr != nullptr) {
		$var(HashMap$TreeNode, s, pr);
		$var(HashMap$TreeNode, sl, nullptr);
		while (($assign(sl, $nc(s)->left)) != nullptr) {
			$assign(s, sl);
		}
		bool c = $nc(s)->red;
		s->red = p->red;
		p->red = c;
		$var(HashMap$TreeNode, sr, s->right);
		$var(HashMap$TreeNode, pp, p->parent);
		if (s == pr) {
			$set(p, parent, s);
			$set(s, right, p);
		} else {
			$var(HashMap$TreeNode, sp, s->parent);
			if (($set(p, parent, sp)) != nullptr) {
				if (s == $nc(sp)->left) {
					$set(sp, left, p);
				} else {
					$set(sp, right, p);
				}
			}
			if (($set(s, right, pr)) != nullptr) {
				$set(pr, parent, s);
			}
		}
		$set(p, left, nullptr);
		if (($set(p, right, sr)) != nullptr) {
			$set($nc(sr), parent, p);
		}
		if (($set(s, left, pl)) != nullptr) {
			$set(pl, parent, s);
		}
		if (($set(s, parent, pp)) == nullptr) {
			$assign(root, s);
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
		$var(HashMap$TreeNode, pp, $set($nc(replacement), parent, p->parent));
		if (pp == nullptr) {
			$nc(($assign(root, replacement)))->red = false;
		} else if (p == pp->left) {
			$set(pp, left, replacement);
		} else {
			$set(pp, right, replacement);
		}
		$set(p, left, $set(p, right, $set(p, parent, nullptr)));
	}
	$var(HashMap$TreeNode, r, p->red ? root : balanceDeletion(root, replacement));
	if (replacement == p) {
		$var(HashMap$TreeNode, pp, p->parent);
		$set(p, parent, nullptr);
		if (pp != nullptr) {
			if (p == pp->left) {
				$set(pp, left, nullptr);
			} else if (p == pp->right) {
				$set(pp, right, nullptr);
			}
		}
	}
	if (movable) {
		moveRootToFront(tab, r);
	}
}

void HashMap$TreeNode::split($HashMap* map, $HashMap$NodeArray* tab, int32_t index, int32_t bit) {
	$useLocalObjectStack();
	$var(HashMap$TreeNode, b, this);
	$var(HashMap$TreeNode, loHead, nullptr);
	$var(HashMap$TreeNode, loTail, nullptr);
	$var(HashMap$TreeNode, hiHead, nullptr);
	$var(HashMap$TreeNode, hiTail, nullptr);
	int32_t lc = 0;
	int32_t hc = 0;
	{
		$var(HashMap$TreeNode, e, b);
		$var(HashMap$TreeNode, next, nullptr);
		for (; e != nullptr; $assign(e, next)) {
			$assign(next, $cast(HashMap$TreeNode, e->next));
			$set(e, next, nullptr);
			if ((e->hash & bit) == 0) {
				if (($set(e, prev, loTail)) == nullptr) {
					$assign(loHead, e);
				} else {
					$set($nc(loTail), next, e);
				}
				$assign(loTail, e);
				++lc;
			} else {
				if (($set(e, prev, hiTail)) == nullptr) {
					$assign(hiHead, e);
				} else {
					$set($nc(hiTail), next, e);
				}
				$assign(hiTail, e);
				++hc;
			}
		}
	}
	if (loHead != nullptr) {
		if (lc <= 6) {
			$nc(tab)->set(index, $(loHead->untreeify(map)));
		} else {
			$nc(tab)->set(index, loHead);
			if (hiHead != nullptr) {
				loHead->treeify(tab);
			}
		}
	}
	if (hiHead != nullptr) {
		if (hc <= 6) {
			$nc(tab)->set(index + bit, $(hiHead->untreeify(map)));
		} else {
			$nc(tab)->set(index + bit, hiHead);
			if (loHead != nullptr) {
				hiHead->treeify(tab);
			}
		}
	}
}

HashMap$TreeNode* HashMap$TreeNode::rotateLeft(HashMap$TreeNode* root$renamed, HashMap$TreeNode* p) {
	$init(HashMap$TreeNode);
	$useLocalObjectStack();
	$var(HashMap$TreeNode, root, root$renamed);
	$var(HashMap$TreeNode, r, nullptr);
	$var(HashMap$TreeNode, pp, nullptr);
	$var(HashMap$TreeNode, rl, nullptr);
	if (p != nullptr && ($assign(r, p->right)) != nullptr) {
		if (($assign(rl, $set(p, right, $nc(r)->left))) != nullptr) {
			$set($nc(rl), parent, p);
		}
		if (($assign(pp, $set(r, parent, p->parent))) == nullptr) {
			$nc(($assign(root, r)))->red = false;
		} else if ($nc(pp)->left == p) {
			$set(pp, left, r);
		} else {
			$set(pp, right, r);
		}
		$set(r, left, p);
		$set(p, parent, r);
	}
	return root;
}

HashMap$TreeNode* HashMap$TreeNode::rotateRight(HashMap$TreeNode* root$renamed, HashMap$TreeNode* p) {
	$init(HashMap$TreeNode);
	$useLocalObjectStack();
	$var(HashMap$TreeNode, root, root$renamed);
	$var(HashMap$TreeNode, l, nullptr);
	$var(HashMap$TreeNode, pp, nullptr);
	$var(HashMap$TreeNode, lr, nullptr);
	if (p != nullptr && ($assign(l, p->left)) != nullptr) {
		if (($assign(lr, $set(p, left, $nc(l)->right))) != nullptr) {
			$set($nc(lr), parent, p);
		}
		if (($assign(pp, $set(l, parent, p->parent))) == nullptr) {
			$nc(($assign(root, l)))->red = false;
		} else if ($nc(pp)->right == p) {
			$set(pp, right, l);
		} else {
			$set(pp, left, l);
		}
		$set(l, right, p);
		$set(p, parent, l);
	}
	return root;
}

HashMap$TreeNode* HashMap$TreeNode::balanceInsertion(HashMap$TreeNode* root$renamed, HashMap$TreeNode* x$renamed) {
	$init(HashMap$TreeNode);
	$useLocalObjectStack();
	$var(HashMap$TreeNode, root, root$renamed);
	$var(HashMap$TreeNode, x, x$renamed);
	$nc(x)->red = true;
	{
		$var(HashMap$TreeNode, xp, nullptr);
		$var(HashMap$TreeNode, xpp, nullptr);
		$var(HashMap$TreeNode, xppl, nullptr);
		$var(HashMap$TreeNode, xppr, nullptr);
		for (;;) {
			if (($assign(xp, $nc(x)->parent)) == nullptr) {
				x->red = false;
				return x;
			} else if (!$nc(xp)->red || ($assign(xpp, xp->parent)) == nullptr) {
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
						$assign(xpp, ($assign(xp, x->parent)) == nullptr ? (HashMap$TreeNode*)nullptr : $nc(xp)->parent);
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
					$assign(xpp, ($assign(xp, x->parent)) == nullptr ? (HashMap$TreeNode*)nullptr : $nc(xp)->parent);
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

HashMap$TreeNode* HashMap$TreeNode::balanceDeletion(HashMap$TreeNode* root$renamed, HashMap$TreeNode* x$renamed) {
	$init(HashMap$TreeNode);
	$useLocalObjectStack();
	$var(HashMap$TreeNode, root, root$renamed);
	$var(HashMap$TreeNode, x, x$renamed);
	$var(HashMap$TreeNode, xp, nullptr);
	$var(HashMap$TreeNode, xpl, nullptr);
	$var(HashMap$TreeNode, xpr, nullptr);
	for (;;) {
		if (x == nullptr || x == root) {
			return root;
		} else if (($assign(xp, x->parent)) == nullptr) {
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
				$assign(xpr, ($assign(xp, x->parent)) == nullptr ? (HashMap$TreeNode*)nullptr : $nc(xp)->right);
			}
			if (xpr == nullptr) {
				$assign(x, xp);
			} else {
				$var(HashMap$TreeNode, sl, xpr->left);
				$var(HashMap$TreeNode, sr, xpr->right);
				if ((sr == nullptr || !sr->red) && (sl == nullptr || !sl->red)) {
					xpr->red = true;
					$assign(x, xp);
				} else {
					if (sr == nullptr || !sr->red) {
						if (sl != nullptr) {
							sl->red = false;
						}
						xpr->red = true;
						$assign(root, rotateRight(root, xpr));
						$assign(xpr, ($assign(xp, x->parent)) == nullptr ? (HashMap$TreeNode*)nullptr : $nc(xp)->right);
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
				$assign(xpl, ($assign(xp, x->parent)) == nullptr ? (HashMap$TreeNode*)nullptr : $nc(xp)->left);
			}
			if (xpl == nullptr) {
				$assign(x, xp);
			} else {
				$var(HashMap$TreeNode, sl, xpl->left);
				$var(HashMap$TreeNode, sr, xpl->right);
				if ((sl == nullptr || !sl->red) && (sr == nullptr || !sr->red)) {
					xpl->red = true;
					$assign(x, xp);
				} else {
					if (sl == nullptr || !sl->red) {
						if (sr != nullptr) {
							sr->red = false;
						}
						xpl->red = true;
						$assign(root, rotateLeft(root, xpl));
						$assign(xpl, ($assign(xp, x->parent)) == nullptr ? (HashMap$TreeNode*)nullptr : $nc(xp)->left);
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

bool HashMap$TreeNode::checkInvariants(HashMap$TreeNode* t) {
	$init(HashMap$TreeNode);
	$useLocalObjectStack();
	$var(HashMap$TreeNode, tp, $nc(t)->parent);
	$var(HashMap$TreeNode, tl, t->left);
	$var(HashMap$TreeNode, tr, t->right);
	$var(HashMap$TreeNode, tb, t->prev);
	$var(HashMap$TreeNode, tn, $cast(HashMap$TreeNode, t->next));
	if (tb != nullptr && !$equals(tb->next, t)) {
		return false;
	}
	if (tn != nullptr && tn->prev != t) {
		return false;
	}
	if (tp != nullptr && t != tp->left && t != tp->right) {
		return false;
	}
	if (tl != nullptr && (tl->parent != t || tl->hash > t->hash)) {
		return false;
	}
	if (tr != nullptr && (tr->parent != t || tr->hash < t->hash)) {
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

void HashMap$TreeNode::clinit$($Class* clazz) {
	$load($HashMap);
	HashMap$TreeNode::$assertionsDisabled = !$HashMap::class$->desiredAssertionStatus();
}

HashMap$TreeNode::HashMap$TreeNode() {
}

$Class* HashMap$TreeNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HashMap$TreeNode, $assertionsDisabled)},
		{"parent", "Ljava/util/HashMap$TreeNode;", "Ljava/util/HashMap$TreeNode<TK;TV;>;", 0, $field(HashMap$TreeNode, parent)},
		{"left", "Ljava/util/HashMap$TreeNode;", "Ljava/util/HashMap$TreeNode<TK;TV;>;", 0, $field(HashMap$TreeNode, left)},
		{"right", "Ljava/util/HashMap$TreeNode;", "Ljava/util/HashMap$TreeNode<TK;TV;>;", 0, $field(HashMap$TreeNode, right)},
		{"prev", "Ljava/util/HashMap$TreeNode;", "Ljava/util/HashMap$TreeNode<TK;TV;>;", 0, $field(HashMap$TreeNode, prev)},
		{"red", "Z", nullptr, 0, $field(HashMap$TreeNode, red)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Node;)V", "(ITK;TV;Ljava/util/HashMap$Node<TK;TV;>;)V", 0, $method(HashMap$TreeNode, init$, void, int32_t, Object$*, Object$*, $HashMap$Node*)},
		{"balanceDeletion", "(Ljava/util/HashMap$TreeNode;Ljava/util/HashMap$TreeNode;)Ljava/util/HashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/HashMap$TreeNode<TK;TV;>;Ljava/util/HashMap$TreeNode<TK;TV;>;)Ljava/util/HashMap$TreeNode<TK;TV;>;", $STATIC, $staticMethod(HashMap$TreeNode, balanceDeletion, HashMap$TreeNode*, HashMap$TreeNode*, HashMap$TreeNode*)},
		{"balanceInsertion", "(Ljava/util/HashMap$TreeNode;Ljava/util/HashMap$TreeNode;)Ljava/util/HashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/HashMap$TreeNode<TK;TV;>;Ljava/util/HashMap$TreeNode<TK;TV;>;)Ljava/util/HashMap$TreeNode<TK;TV;>;", $STATIC, $staticMethod(HashMap$TreeNode, balanceInsertion, HashMap$TreeNode*, HashMap$TreeNode*, HashMap$TreeNode*)},
		{"checkInvariants", "(Ljava/util/HashMap$TreeNode;)Z", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/HashMap$TreeNode<TK;TV;>;)Z", $STATIC, $staticMethod(HashMap$TreeNode, checkInvariants, bool, HashMap$TreeNode*)},
		{"find", "(ILjava/lang/Object;Ljava/lang/Class;)Ljava/util/HashMap$TreeNode;", "(ILjava/lang/Object;Ljava/lang/Class<*>;)Ljava/util/HashMap$TreeNode<TK;TV;>;", $FINAL, $method(HashMap$TreeNode, find, HashMap$TreeNode*, int32_t, Object$*, $Class*)},
		{"getTreeNode", "(ILjava/lang/Object;)Ljava/util/HashMap$TreeNode;", "(ILjava/lang/Object;)Ljava/util/HashMap$TreeNode<TK;TV;>;", $FINAL, $method(HashMap$TreeNode, getTreeNode, HashMap$TreeNode*, int32_t, Object$*)},
		{"moveRootToFront", "([Ljava/util/HashMap$Node;Ljava/util/HashMap$TreeNode;)V", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>([Ljava/util/HashMap$Node<TK;TV;>;Ljava/util/HashMap$TreeNode<TK;TV;>;)V", $STATIC, $staticMethod(HashMap$TreeNode, moveRootToFront, void, $HashMap$NodeArray*, HashMap$TreeNode*)},
		{"putTreeVal", "(Ljava/util/HashMap;[Ljava/util/HashMap$Node;ILjava/lang/Object;Ljava/lang/Object;)Ljava/util/HashMap$TreeNode;", "(Ljava/util/HashMap<TK;TV;>;[Ljava/util/HashMap$Node<TK;TV;>;ITK;TV;)Ljava/util/HashMap$TreeNode<TK;TV;>;", $FINAL, $method(HashMap$TreeNode, putTreeVal, HashMap$TreeNode*, $HashMap*, $HashMap$NodeArray*, int32_t, Object$*, Object$*)},
		{"removeTreeNode", "(Ljava/util/HashMap;[Ljava/util/HashMap$Node;Z)V", "(Ljava/util/HashMap<TK;TV;>;[Ljava/util/HashMap$Node<TK;TV;>;Z)V", $FINAL, $method(HashMap$TreeNode, removeTreeNode, void, $HashMap*, $HashMap$NodeArray*, bool)},
		{"root", "()Ljava/util/HashMap$TreeNode;", "()Ljava/util/HashMap$TreeNode<TK;TV;>;", $FINAL, $method(HashMap$TreeNode, root, HashMap$TreeNode*)},
		{"rotateLeft", "(Ljava/util/HashMap$TreeNode;Ljava/util/HashMap$TreeNode;)Ljava/util/HashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/HashMap$TreeNode<TK;TV;>;Ljava/util/HashMap$TreeNode<TK;TV;>;)Ljava/util/HashMap$TreeNode<TK;TV;>;", $STATIC, $staticMethod(HashMap$TreeNode, rotateLeft, HashMap$TreeNode*, HashMap$TreeNode*, HashMap$TreeNode*)},
		{"rotateRight", "(Ljava/util/HashMap$TreeNode;Ljava/util/HashMap$TreeNode;)Ljava/util/HashMap$TreeNode;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/HashMap$TreeNode<TK;TV;>;Ljava/util/HashMap$TreeNode<TK;TV;>;)Ljava/util/HashMap$TreeNode<TK;TV;>;", $STATIC, $staticMethod(HashMap$TreeNode, rotateRight, HashMap$TreeNode*, HashMap$TreeNode*, HashMap$TreeNode*)},
		{"split", "(Ljava/util/HashMap;[Ljava/util/HashMap$Node;II)V", "(Ljava/util/HashMap<TK;TV;>;[Ljava/util/HashMap$Node<TK;TV;>;II)V", $FINAL, $method(HashMap$TreeNode, split, void, $HashMap*, $HashMap$NodeArray*, int32_t, int32_t)},
		{"tieBreakOrder", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(HashMap$TreeNode, tieBreakOrder, int32_t, Object$*, Object$*)},
		{"treeify", "([Ljava/util/HashMap$Node;)V", "([Ljava/util/HashMap$Node<TK;TV;>;)V", $FINAL, $method(HashMap$TreeNode, treeify, void, $HashMap$NodeArray*)},
		{"untreeify", "(Ljava/util/HashMap;)Ljava/util/HashMap$Node;", "(Ljava/util/HashMap<TK;TV;>;)Ljava/util/HashMap$Node<TK;TV;>;", $FINAL, $method(HashMap$TreeNode, untreeify, $HashMap$Node*, $HashMap*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.HashMap$TreeNode", "java.util.HashMap", "TreeNode", $STATIC | $FINAL},
		{"java.util.LinkedHashMap$Entry", "java.util.LinkedHashMap", "Entry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.HashMap$TreeNode",
		"java.util.LinkedHashMap$Entry",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/LinkedHashMap$Entry<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.HashMap"
	};
	$loadClass(HashMap$TreeNode, name, initialize, &classInfo$$, HashMap$TreeNode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HashMap$TreeNode);
	});
	return class$;
}

$Class* HashMap$TreeNode::class$ = nullptr;

	} // util
} // java