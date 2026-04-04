#include <java/util/regex/IntHashSet.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace util {
		namespace regex {

void IntHashSet::init$() {
	this->pos = 0;
	$set(this, entries, $new($ints, 16 << 1));
	$set(this, hashes, $new($ints, (16 / 2) | 1));
	$Arrays::fill(this->entries, -1);
	$Arrays::fill(this->hashes, -1);
}

bool IntHashSet::contains(int32_t i) {
	int32_t h = $nc(this->hashes)->get($mod(i, $nc(this->hashes)->length));
	while (h != -1) {
		if ($nc(this->entries)->get(h) == i) {
			return true;
		}
		h = this->entries->get(h + 1);
	}
	return false;
}

void IntHashSet::add(int32_t i) {
	int32_t h0 = $mod(i, $nc(this->hashes)->length);
	int32_t next = this->hashes->get(h0);
	int32_t next0 = next;
	while (next0 != -1) {
		if ($nc(this->entries)->get(next0) == i) {
			return;
		}
		next0 = this->entries->get(next0 + 1);
	}
	this->hashes->set(h0, this->pos);
	$nc(this->entries)->set(this->pos++, i);
	this->entries->set(this->pos++, next);
	if (this->pos == this->entries->length) {
		expand();
	}
}

void IntHashSet::clear() {
	$Arrays::fill(this->entries, -1);
	$Arrays::fill(this->hashes, -1);
	this->pos = 0;
}

void IntHashSet::expand() {
	$useLocalObjectStack();
	$var($ints, old, this->entries);
	$var($ints, es, $new($ints, $nc(old)->length << 1));
	int32_t hlen = (old->length / 2) | 1;
	$var($ints, hs, $new($ints, hlen));
	$Arrays::fill(es, -1);
	$Arrays::fill(hs, -1);
	for (int32_t n = 0; n < this->pos;) {
		int32_t i = old->get(n);
		int32_t hsh = $mod(i, hlen);
		int32_t next = hs->get(hsh);
		hs->set(hsh, n);
		es->set(n++, i);
		es->set(n++, next);
	}
	$set(this, entries, es);
	$set(this, hashes, hs);
}

IntHashSet::IntHashSet() {
}

$Class* IntHashSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"entries", "[I", nullptr, $PRIVATE, $field(IntHashSet, entries)},
		{"hashes", "[I", nullptr, $PRIVATE, $field(IntHashSet, hashes)},
		{"pos", "I", nullptr, $PRIVATE, $field(IntHashSet, pos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntHashSet, init$, void)},
		{"add", "(I)V", nullptr, $PUBLIC, $virtualMethod(IntHashSet, add, void, int32_t)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(IntHashSet, clear, void)},
		{"contains", "(I)Z", nullptr, $PUBLIC, $virtualMethod(IntHashSet, contains, bool, int32_t)},
		{"expand", "()V", nullptr, $PRIVATE, $method(IntHashSet, expand, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.IntHashSet",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntHashSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntHashSet);
	});
	return class$;
}

$Class* IntHashSet::class$ = nullptr;

		} // regex
	} // util
} // java