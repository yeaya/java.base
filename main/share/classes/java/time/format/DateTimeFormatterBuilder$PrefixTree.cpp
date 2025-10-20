#include <java/time/format/DateTimeFormatterBuilder$PrefixTree.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/ParsePosition.h>
#include <java/time/format/DateTimeFormatterBuilder$PrefixTree$CI.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsePosition = ::java::text::ParsePosition;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$PrefixTree$CI = ::java::time::format::DateTimeFormatterBuilder$PrefixTree$CI;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$PrefixTree_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DateTimeFormatterBuilder$PrefixTree, key)},
	{"value", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DateTimeFormatterBuilder$PrefixTree, value)},
	{"c0", "C", nullptr, $PROTECTED, $field(DateTimeFormatterBuilder$PrefixTree, c0)},
	{"child", "Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", nullptr, $PROTECTED, $field(DateTimeFormatterBuilder$PrefixTree, child)},
	{"sibling", "Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", nullptr, $PROTECTED, $field(DateTimeFormatterBuilder$PrefixTree, sibling)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$PrefixTree_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;)V", nullptr, $PRIVATE, $method(static_cast<void(DateTimeFormatterBuilder$PrefixTree::*)($String*,$String*,DateTimeFormatterBuilder$PrefixTree*)>(&DateTimeFormatterBuilder$PrefixTree::init$))},
	{"add", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"add0", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DateTimeFormatterBuilder$PrefixTree::*)($String*,$String*)>(&DateTimeFormatterBuilder$PrefixTree::add0))},
	{"copyTree", "()Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", nullptr, $PUBLIC},
	{"isEqual", "(CC)Z", nullptr, $PROTECTED},
	{"match", "(Ljava/lang/CharSequence;II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"match", "(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"newNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;)Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", nullptr, $PROTECTED},
	{"newTree", "(Ljava/time/format/DateTimeParseContext;)Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DateTimeFormatterBuilder$PrefixTree*(*)($DateTimeParseContext*)>(&DateTimeFormatterBuilder$PrefixTree::newTree))},
	{"newTree", "(Ljava/util/Set;Ljava/time/format/DateTimeParseContext;)Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", "(Ljava/util/Set<Ljava/lang/String;>;Ljava/time/format/DateTimeParseContext;)Ljava/time/format/DateTimeFormatterBuilder$PrefixTree;", $PUBLIC | $STATIC, $method(static_cast<DateTimeFormatterBuilder$PrefixTree*(*)($Set*,$DateTimeParseContext*)>(&DateTimeFormatterBuilder$PrefixTree::newTree))},
	{"prefixLength", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DateTimeFormatterBuilder$PrefixTree::*)($String*)>(&DateTimeFormatterBuilder$PrefixTree::prefixLength))},
	{"prefixOf", "(Ljava/lang/CharSequence;II)Z", nullptr, $PROTECTED},
	{"toKey", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$PrefixTree_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree", "java.time.format.DateTimeFormatterBuilder", "PrefixTree", $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree$LENIENT", "java.time.format.DateTimeFormatterBuilder$PrefixTree", "LENIENT", $PRIVATE | $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$PrefixTree$CI", "java.time.format.DateTimeFormatterBuilder$PrefixTree", "CI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$PrefixTree_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$PrefixTree",
	"java.lang.Object",
	nullptr,
	_DateTimeFormatterBuilder$PrefixTree_FieldInfo_,
	_DateTimeFormatterBuilder$PrefixTree_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$PrefixTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$PrefixTree($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$PrefixTree));
}

void DateTimeFormatterBuilder$PrefixTree::init$($String* k, $String* v, DateTimeFormatterBuilder$PrefixTree* child) {
	$set(this, key, k);
	$set(this, value, v);
	$set(this, child, child);
	if ($nc(k)->isEmpty()) {
		this->c0 = (char16_t)0x0000FFFF;
	} else {
		this->c0 = $nc(this->key)->charAt(0);
	}
}

DateTimeFormatterBuilder$PrefixTree* DateTimeFormatterBuilder$PrefixTree::newTree($DateTimeParseContext* context) {
	if ($nc(context)->isCaseSensitive()) {
		return $new(DateTimeFormatterBuilder$PrefixTree, ""_s, nullptr, nullptr);
	}
	return $new($DateTimeFormatterBuilder$PrefixTree$CI, ""_s, nullptr, nullptr);
}

DateTimeFormatterBuilder$PrefixTree* DateTimeFormatterBuilder$PrefixTree::newTree($Set* keys, $DateTimeParseContext* context) {
	$useLocalCurrentObjectStackCache();
	$var(DateTimeFormatterBuilder$PrefixTree, tree, newTree(context));
	{
		$var($Iterator, i$, $nc(keys)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, k, $cast($String, i$->next()));
			{
				$nc(tree)->add0(k, k);
			}
		}
	}
	return tree;
}

DateTimeFormatterBuilder$PrefixTree* DateTimeFormatterBuilder$PrefixTree::copyTree() {
	$var(DateTimeFormatterBuilder$PrefixTree, copy, $new(DateTimeFormatterBuilder$PrefixTree, this->key, this->value, nullptr));
	if (this->child != nullptr) {
		$set(copy, child, $nc(this->child)->copyTree());
	}
	if (this->sibling != nullptr) {
		$set(copy, sibling, $nc(this->sibling)->copyTree());
	}
	return copy;
}

bool DateTimeFormatterBuilder$PrefixTree::add($String* k, $String* v) {
	return add0(k, v);
}

bool DateTimeFormatterBuilder$PrefixTree::add0($String* k$renamed, $String* v) {
	$useLocalCurrentObjectStackCache();
	$var($String, k, k$renamed);
	$assign(k, toKey(k));
	int32_t prefixLen = prefixLength(k);
	if (prefixLen == $nc(this->key)->length()) {
		if (prefixLen < $nc(k)->length()) {
			$var($String, subKey, k->substring(prefixLen));
			$var(DateTimeFormatterBuilder$PrefixTree, c, this->child);
			while (c != nullptr) {
				if (isEqual(c->c0, subKey->charAt(0))) {
					return c->add0(subKey, v);
				}
				$assign(c, c->sibling);
			}
			$assign(c, newNode(subKey, v, nullptr));
			$set($nc(c), sibling, this->child);
			$set(this, child, c);
			return true;
		}
		$set(this, value, v);
		return true;
	}
	$var(DateTimeFormatterBuilder$PrefixTree, n1, newNode($($nc(this->key)->substring(prefixLen)), this->value, this->child));
	$set(this, key, $nc(k)->substring(0, prefixLen));
	$set(this, child, n1);
	if (prefixLen < k->length()) {
		$var(DateTimeFormatterBuilder$PrefixTree, n2, newNode($(k->substring(prefixLen)), v, nullptr));
		$set($nc(this->child), sibling, n2);
		$set(this, value, nullptr);
	} else {
		$set(this, value, v);
	}
	return true;
}

$String* DateTimeFormatterBuilder$PrefixTree::match($CharSequence* text, int32_t off, int32_t end) {
	$useLocalCurrentObjectStackCache();
	if (!prefixOf(text, off, end)) {
		return nullptr;
	}
	if (this->child != nullptr && (off += $nc(this->key)->length()) != end) {
		$var(DateTimeFormatterBuilder$PrefixTree, c, this->child);
		do {
			if (isEqual($nc(c)->c0, $nc(text)->charAt(off))) {
				$var($String, found, $nc(c)->match(text, off, end));
				if (found != nullptr) {
					return found;
				}
				return this->value;
			}
			$assign(c, $nc(c)->sibling);
		} while (c != nullptr);
	}
	return this->value;
}

$String* DateTimeFormatterBuilder$PrefixTree::match($CharSequence* text, $ParsePosition* pos) {
	$useLocalCurrentObjectStackCache();
	int32_t off = $nc(pos)->getIndex();
	int32_t end = $nc(text)->length();
	if (!prefixOf(text, off, end)) {
		return nullptr;
	}
	off += $nc(this->key)->length();
	if (this->child != nullptr && off != end) {
		$var(DateTimeFormatterBuilder$PrefixTree, c, this->child);
		do {
			if (isEqual($nc(c)->c0, text->charAt(off))) {
				pos->setIndex(off);
				$var($String, found, $nc(c)->match(text, pos));
				if (found != nullptr) {
					return found;
				}
				break;
			}
			$assign(c, $nc(c)->sibling);
		} while (c != nullptr);
	}
	pos->setIndex(off);
	return this->value;
}

$String* DateTimeFormatterBuilder$PrefixTree::toKey($String* k) {
	return k;
}

DateTimeFormatterBuilder$PrefixTree* DateTimeFormatterBuilder$PrefixTree::newNode($String* k, $String* v, DateTimeFormatterBuilder$PrefixTree* child) {
	return $new(DateTimeFormatterBuilder$PrefixTree, k, v, child);
}

bool DateTimeFormatterBuilder$PrefixTree::isEqual(char16_t c1, char16_t c2) {
	return c1 == c2;
}

bool DateTimeFormatterBuilder$PrefixTree::prefixOf($CharSequence* text, int32_t off, int32_t end) {
	if ($instanceOf($String, text)) {
		return $nc(($cast($String, text)))->startsWith(this->key, off);
	}
	int32_t len = $nc(this->key)->length();
	if (len > end - off) {
		return false;
	}
	int32_t off0 = 0;
	while (len-- > 0) {
		char16_t var$0 = $nc(this->key)->charAt(off0++);
		if (!isEqual(var$0, $nc(text)->charAt(off++))) {
			return false;
		}
	}
	return true;
}

int32_t DateTimeFormatterBuilder$PrefixTree::prefixLength($String* k) {
	int32_t off = 0;
	while (true) {
		bool var$0 = off < $nc(k)->length();
		if (!(var$0 && off < $nc(this->key)->length())) {
			break;
		}
		{
			char16_t var$1 = k->charAt(off);
			if (!isEqual(var$1, $nc(this->key)->charAt(off))) {
				return off;
			}
			++off;
		}
	}
	return off;
}

DateTimeFormatterBuilder$PrefixTree::DateTimeFormatterBuilder$PrefixTree() {
}

$Class* DateTimeFormatterBuilder$PrefixTree::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$PrefixTree, name, initialize, &_DateTimeFormatterBuilder$PrefixTree_ClassInfo_, allocate$DateTimeFormatterBuilder$PrefixTree);
	return class$;
}

$Class* DateTimeFormatterBuilder$PrefixTree::class$ = nullptr;

		} // format
	} // time
} // java