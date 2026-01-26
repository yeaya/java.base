#include <java/lang/ThreadLocal$ThreadLocalMap.h>

#include <java/lang/ThreadLocal$ThreadLocalMap$Entry.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/Reference.h>
#include <jcpp.h>

#undef INITIAL_CAPACITY

using $ThreadLocal$ThreadLocalMap$EntryArray = $Array<::java::lang::ThreadLocal$ThreadLocalMap$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $ThreadLocal$ThreadLocalMap$Entry = ::java::lang::ThreadLocal$ThreadLocalMap$Entry;

namespace java {
	namespace lang {

$FieldInfo _ThreadLocal$ThreadLocalMap_FieldInfo_[] = {
	{"INITIAL_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ThreadLocal$ThreadLocalMap, INITIAL_CAPACITY)},
	{"table", "[Ljava/lang/ThreadLocal$ThreadLocalMap$Entry;", nullptr, $PRIVATE, $field(ThreadLocal$ThreadLocalMap, table)},
	{"size", "I", nullptr, $PRIVATE, $field(ThreadLocal$ThreadLocalMap, size)},
	{"threshold", "I", nullptr, $PRIVATE, $field(ThreadLocal$ThreadLocalMap, threshold)},
	{}
};

$MethodInfo _ThreadLocal$ThreadLocalMap_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadLocal;Ljava/lang/Object;)V", "(Ljava/lang/ThreadLocal<*>;Ljava/lang/Object;)V", 0, $method(ThreadLocal$ThreadLocalMap, init$, void, $ThreadLocal*, Object$*)},
	{"<init>", "(Ljava/lang/ThreadLocal$ThreadLocalMap;)V", nullptr, $PRIVATE, $method(ThreadLocal$ThreadLocalMap, init$, void, ThreadLocal$ThreadLocalMap*)},
	{"cleanSomeSlots", "(II)Z", nullptr, $PRIVATE, $method(ThreadLocal$ThreadLocalMap, cleanSomeSlots, bool, int32_t, int32_t)},
	{"expungeStaleEntries", "()V", nullptr, $PRIVATE, $method(ThreadLocal$ThreadLocalMap, expungeStaleEntries, void)},
	{"expungeStaleEntry", "(I)I", nullptr, $PRIVATE, $method(ThreadLocal$ThreadLocalMap, expungeStaleEntry, int32_t, int32_t)},
	{"getEntry", "(Ljava/lang/ThreadLocal;)Ljava/lang/ThreadLocal$ThreadLocalMap$Entry;", "(Ljava/lang/ThreadLocal<*>;)Ljava/lang/ThreadLocal$ThreadLocalMap$Entry;", $PRIVATE, $method(ThreadLocal$ThreadLocalMap, getEntry, $ThreadLocal$ThreadLocalMap$Entry*, $ThreadLocal*)},
	{"getEntryAfterMiss", "(Ljava/lang/ThreadLocal;ILjava/lang/ThreadLocal$ThreadLocalMap$Entry;)Ljava/lang/ThreadLocal$ThreadLocalMap$Entry;", "(Ljava/lang/ThreadLocal<*>;ILjava/lang/ThreadLocal$ThreadLocalMap$Entry;)Ljava/lang/ThreadLocal$ThreadLocalMap$Entry;", $PRIVATE, $method(ThreadLocal$ThreadLocalMap, getEntryAfterMiss, $ThreadLocal$ThreadLocalMap$Entry*, $ThreadLocal*, int32_t, $ThreadLocal$ThreadLocalMap$Entry*)},
	{"nextIndex", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(ThreadLocal$ThreadLocalMap, nextIndex, int32_t, int32_t, int32_t)},
	{"prevIndex", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(ThreadLocal$ThreadLocalMap, prevIndex, int32_t, int32_t, int32_t)},
	{"rehash", "()V", nullptr, $PRIVATE, $method(ThreadLocal$ThreadLocalMap, rehash, void)},
	{"remove", "(Ljava/lang/ThreadLocal;)V", "(Ljava/lang/ThreadLocal<*>;)V", $PRIVATE, $method(ThreadLocal$ThreadLocalMap, remove, void, $ThreadLocal*)},
	{"replaceStaleEntry", "(Ljava/lang/ThreadLocal;Ljava/lang/Object;I)V", "(Ljava/lang/ThreadLocal<*>;Ljava/lang/Object;I)V", $PRIVATE, $method(ThreadLocal$ThreadLocalMap, replaceStaleEntry, void, $ThreadLocal*, Object$*, int32_t)},
	{"resize", "()V", nullptr, $PRIVATE, $method(ThreadLocal$ThreadLocalMap, resize, void)},
	{"set", "(Ljava/lang/ThreadLocal;Ljava/lang/Object;)V", "(Ljava/lang/ThreadLocal<*>;Ljava/lang/Object;)V", $PRIVATE, $method(ThreadLocal$ThreadLocalMap, set, void, $ThreadLocal*, Object$*)},
	{"setThreshold", "(I)V", nullptr, $PRIVATE, $method(ThreadLocal$ThreadLocalMap, setThreshold, void, int32_t)},
	{}
};

$InnerClassInfo _ThreadLocal$ThreadLocalMap_InnerClassesInfo_[] = {
	{"java.lang.ThreadLocal$ThreadLocalMap", "java.lang.ThreadLocal", "ThreadLocalMap", $STATIC},
	{"java.lang.ThreadLocal$ThreadLocalMap$Entry", "java.lang.ThreadLocal$ThreadLocalMap", "Entry", $STATIC},
	{}
};

$ClassInfo _ThreadLocal$ThreadLocalMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ThreadLocal$ThreadLocalMap",
	"java.lang.Object",
	nullptr,
	_ThreadLocal$ThreadLocalMap_FieldInfo_,
	_ThreadLocal$ThreadLocalMap_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadLocal$ThreadLocalMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ThreadLocal"
};

$Object* allocate$ThreadLocal$ThreadLocalMap($Class* clazz) {
	return $of($alloc(ThreadLocal$ThreadLocalMap));
}

void ThreadLocal$ThreadLocalMap::setThreshold(int32_t len) {
	this->threshold = len * 2 / 3;
}

int32_t ThreadLocal$ThreadLocalMap::nextIndex(int32_t i, int32_t len) {
	return ((i + 1 < len) ? i + 1 : 0);
}

int32_t ThreadLocal$ThreadLocalMap::prevIndex(int32_t i, int32_t len) {
	return ((i - 1 >= 0) ? i - 1 : len - 1);
}

void ThreadLocal$ThreadLocalMap::init$($ThreadLocal* firstKey, Object$* firstValue) {
	this->size = 0;
	$set(this, table, $new($ThreadLocal$ThreadLocalMap$EntryArray, ThreadLocal$ThreadLocalMap::INITIAL_CAPACITY));
	int32_t i = (int32_t)($nc(firstKey)->threadLocalHashCode & (uint32_t)(ThreadLocal$ThreadLocalMap::INITIAL_CAPACITY - 1));
	$nc(this->table)->set(i, $$new($ThreadLocal$ThreadLocalMap$Entry, firstKey, firstValue));
	this->size = 1;
	setThreshold(ThreadLocal$ThreadLocalMap::INITIAL_CAPACITY);
}

void ThreadLocal$ThreadLocalMap::init$(ThreadLocal$ThreadLocalMap* parentMap) {
	$useLocalCurrentObjectStackCache();
	this->size = 0;
	$var($ThreadLocal$ThreadLocalMap$EntryArray, parentTable, $nc(parentMap)->table);
	int32_t len = $nc(parentTable)->length;
	setThreshold(len);
	$set(this, table, $new($ThreadLocal$ThreadLocalMap$EntryArray, len));
	{
		$var($ThreadLocal$ThreadLocalMap$EntryArray, arr$, parentTable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ThreadLocal$ThreadLocalMap$Entry, e, arr$->get(i$));
			{
				if (e != nullptr) {
					$var($ThreadLocal, key, $cast($ThreadLocal, e->get()));
					if (key != nullptr) {
						$var($Object, value, key->childValue(e->value));
						$var($ThreadLocal$ThreadLocalMap$Entry, c, $new($ThreadLocal$ThreadLocalMap$Entry, key, value));
						int32_t h = (int32_t)(key->threadLocalHashCode & (uint32_t)(len - 1));
						while ($nc(this->table)->get(h) != nullptr) {
							h = nextIndex(h, len);
						}
						$nc(this->table)->set(h, c);
						++this->size;
					}
				}
			}
		}
	}
}

$ThreadLocal$ThreadLocalMap$Entry* ThreadLocal$ThreadLocalMap::getEntry($ThreadLocal* key) {
	int32_t i = (int32_t)($nc(key)->threadLocalHashCode & (uint32_t)($nc(this->table)->length - 1));
	$var($ThreadLocal$ThreadLocalMap$Entry, e, $nc(this->table)->get(i));
	if (e != nullptr && e->refersTo(key)) {
		return e;
	} else {
		return getEntryAfterMiss(key, i, e);
	}
}

$ThreadLocal$ThreadLocalMap$Entry* ThreadLocal$ThreadLocalMap::getEntryAfterMiss($ThreadLocal* key, int32_t i, $ThreadLocal$ThreadLocalMap$Entry* e$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadLocal$ThreadLocalMap$Entry, e, e$renamed);
	$var($ThreadLocal$ThreadLocalMap$EntryArray, tab, this->table);
	int32_t len = $nc(tab)->length;
	while (e != nullptr) {
		if (e->refersTo(key)) {
			return e;
		}
		if (e->refersTo(nullptr)) {
			expungeStaleEntry(i);
		} else {
			i = nextIndex(i, len);
		}
		$assign(e, tab->get(i));
	}
	return nullptr;
}

void ThreadLocal$ThreadLocalMap::set($ThreadLocal* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadLocal$ThreadLocalMap$EntryArray, tab, this->table);
	int32_t len = $nc(tab)->length;
	int32_t i = (int32_t)($nc(key)->threadLocalHashCode & (uint32_t)(len - 1));
	{
		$var($ThreadLocal$ThreadLocalMap$Entry, e, tab->get(i));
		for (; e != nullptr; $assign(e, tab->get(i = nextIndex(i, len)))) {
			if ($nc(e)->refersTo(key)) {
				$set(e, value, value);
				return;
			}
			if ($nc(e)->refersTo(nullptr)) {
				replaceStaleEntry(key, value, i);
				return;
			}
		}
	}
	tab->set(i, $$new($ThreadLocal$ThreadLocalMap$Entry, key, value));
	int32_t sz = ++this->size;
	if (!cleanSomeSlots(i, sz) && sz >= this->threshold) {
		rehash();
	}
}

void ThreadLocal$ThreadLocalMap::remove($ThreadLocal* key) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadLocal$ThreadLocalMap$EntryArray, tab, this->table);
	int32_t len = $nc(tab)->length;
	int32_t i = (int32_t)($nc(key)->threadLocalHashCode & (uint32_t)(len - 1));
	{
		$var($ThreadLocal$ThreadLocalMap$Entry, e, tab->get(i));
		for (; e != nullptr; $assign(e, tab->get(i = nextIndex(i, len)))) {
			if ($nc(e)->refersTo(key)) {
				e->clear();
				expungeStaleEntry(i);
				return;
			}
		}
	}
}

void ThreadLocal$ThreadLocalMap::replaceStaleEntry($ThreadLocal* key, Object$* value, int32_t staleSlot) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadLocal$ThreadLocalMap$EntryArray, tab, this->table);
	int32_t len = $nc(tab)->length;
	$var($ThreadLocal$ThreadLocalMap$Entry, e, nullptr);
	int32_t slotToExpunge = staleSlot;
	for (int32_t i = prevIndex(staleSlot, len); ($assign(e, tab->get(i))) != nullptr; i = prevIndex(i, len)) {
		if ($nc(e)->refersTo(nullptr)) {
			slotToExpunge = i;
		}
	}
	for (int32_t i = nextIndex(staleSlot, len); ($assign(e, tab->get(i))) != nullptr; i = nextIndex(i, len)) {
		if ($nc(e)->refersTo(key)) {
			$set(e, value, value);
			tab->set(i, tab->get(staleSlot));
			tab->set(staleSlot, e);
			if (slotToExpunge == staleSlot) {
				slotToExpunge = i;
			}
			cleanSomeSlots(expungeStaleEntry(slotToExpunge), len);
			return;
		}
		if ($nc(e)->refersTo(nullptr) && slotToExpunge == staleSlot) {
			slotToExpunge = i;
		}
	}
	$set($nc(tab->get(staleSlot)), value, nullptr);
	tab->set(staleSlot, $$new($ThreadLocal$ThreadLocalMap$Entry, key, value));
	if (slotToExpunge != staleSlot) {
		cleanSomeSlots(expungeStaleEntry(slotToExpunge), len);
	}
}

int32_t ThreadLocal$ThreadLocalMap::expungeStaleEntry(int32_t staleSlot) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadLocal$ThreadLocalMap$EntryArray, tab, this->table);
	int32_t len = $nc(tab)->length;
	$set($nc(tab->get(staleSlot)), value, nullptr);
	tab->set(staleSlot, nullptr);
	--this->size;
	$var($ThreadLocal$ThreadLocalMap$Entry, e, nullptr);
	int32_t i = 0;
	for (i = nextIndex(staleSlot, len); ($assign(e, tab->get(i))) != nullptr; i = nextIndex(i, len)) {
		$var($ThreadLocal, k, $cast($ThreadLocal, $nc(e)->get()));
		if (k == nullptr) {
			$set(e, value, nullptr);
			tab->set(i, nullptr);
			--this->size;
		} else {
			int32_t h = (int32_t)($nc(k)->threadLocalHashCode & (uint32_t)(len - 1));
			if (h != i) {
				tab->set(i, nullptr);
				while (tab->get(h) != nullptr) {
					h = nextIndex(h, len);
				}
				tab->set(h, e);
			}
		}
	}
	return i;
}

bool ThreadLocal$ThreadLocalMap::cleanSomeSlots(int32_t i, int32_t n) {
	$useLocalCurrentObjectStackCache();
	bool removed = false;
	$var($ThreadLocal$ThreadLocalMap$EntryArray, tab, this->table);
	int32_t len = $nc(tab)->length;
	do {
		i = nextIndex(i, len);
		$var($ThreadLocal$ThreadLocalMap$Entry, e, tab->get(i));
		if (e != nullptr && e->refersTo(nullptr)) {
			n = len;
			removed = true;
			i = expungeStaleEntry(i);
		}
	} while (($usrAssign(n, 1)) != 0);
	return removed;
}

void ThreadLocal$ThreadLocalMap::rehash() {
	expungeStaleEntries();
	if (this->size >= this->threshold - this->threshold / 4) {
		resize();
	}
}

void ThreadLocal$ThreadLocalMap::resize() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadLocal$ThreadLocalMap$EntryArray, oldTab, this->table);
	int32_t oldLen = $nc(oldTab)->length;
	int32_t newLen = oldLen * 2;
	$var($ThreadLocal$ThreadLocalMap$EntryArray, newTab, $new($ThreadLocal$ThreadLocalMap$EntryArray, newLen));
	int32_t count = 0;
	{
		$var($ThreadLocal$ThreadLocalMap$EntryArray, arr$, oldTab);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ThreadLocal$ThreadLocalMap$Entry, e, arr$->get(i$));
			{
				if (e != nullptr) {
					$var($ThreadLocal, k, $cast($ThreadLocal, e->get()));
					if (k == nullptr) {
						$set(e, value, nullptr);
					} else {
						int32_t h = (int32_t)($nc(k)->threadLocalHashCode & (uint32_t)(newLen - 1));
						while (newTab->get(h) != nullptr) {
							h = nextIndex(h, newLen);
						}
						newTab->set(h, e);
						++count;
					}
				}
			}
		}
	}
	setThreshold(newLen);
	this->size = count;
	$set(this, table, newTab);
}

void ThreadLocal$ThreadLocalMap::expungeStaleEntries() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadLocal$ThreadLocalMap$EntryArray, tab, this->table);
	int32_t len = $nc(tab)->length;
	for (int32_t j = 0; j < len; ++j) {
		$var($ThreadLocal$ThreadLocalMap$Entry, e, tab->get(j));
		if (e != nullptr && e->refersTo(nullptr)) {
			expungeStaleEntry(j);
		}
	}
}

ThreadLocal$ThreadLocalMap::ThreadLocal$ThreadLocalMap() {
}

$Class* ThreadLocal$ThreadLocalMap::load$($String* name, bool initialize) {
	$loadClass(ThreadLocal$ThreadLocalMap, name, initialize, &_ThreadLocal$ThreadLocalMap_ClassInfo_, allocate$ThreadLocal$ThreadLocalMap);
	return class$;
}

$Class* ThreadLocal$ThreadLocalMap::class$ = nullptr;

	} // lang
} // java