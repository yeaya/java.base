#include <java/io/ExpiringCache.h>

#include <java/io/ExpiringCache$1.h>
#include <java/io/ExpiringCache$Entry.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MAX_ENTRIES

using $ExpiringCache$1 = ::java::io::ExpiringCache$1;
using $ExpiringCache$Entry = ::java::io::ExpiringCache$Entry;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace java {
	namespace io {

$FieldInfo _ExpiringCache_FieldInfo_[] = {
	{"millisUntilExpiration", "J", nullptr, $PRIVATE, $field(ExpiringCache, millisUntilExpiration)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/io/ExpiringCache$Entry;>;", $PRIVATE, $field(ExpiringCache, map)},
	{"queryCount", "I", nullptr, $PRIVATE, $field(ExpiringCache, queryCount)},
	{"queryOverflow", "I", nullptr, $PRIVATE, $field(ExpiringCache, queryOverflow)},
	{"MAX_ENTRIES", "I", nullptr, $PRIVATE, $field(ExpiringCache, MAX_ENTRIES)},
	{}
};

$MethodInfo _ExpiringCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExpiringCache::*)()>(&ExpiringCache::init$))},
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(ExpiringCache::*)(int64_t)>(&ExpiringCache::init$))},
	{"cleanup", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExpiringCache::*)()>(&ExpiringCache::cleanup))},
	{"clear", "()V", nullptr, $SYNCHRONIZED},
	{"entryFor", "(Ljava/lang/String;)Ljava/io/ExpiringCache$Entry;", nullptr, $PRIVATE, $method(static_cast<$ExpiringCache$Entry*(ExpiringCache::*)($String*)>(&ExpiringCache::entryFor))},
	{"get", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $SYNCHRONIZED},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _ExpiringCache_InnerClassesInfo_[] = {
	{"java.io.ExpiringCache$Entry", "java.io.ExpiringCache", "Entry", $STATIC},
	{"java.io.ExpiringCache$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExpiringCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ExpiringCache",
	"java.lang.Object",
	nullptr,
	_ExpiringCache_FieldInfo_,
	_ExpiringCache_MethodInfo_,
	nullptr,
	nullptr,
	_ExpiringCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.ExpiringCache$Entry,java.io.ExpiringCache$1"
};

$Object* allocate$ExpiringCache($Class* clazz) {
	return $of($alloc(ExpiringCache));
}

void ExpiringCache::init$() {
	ExpiringCache::init$(30000);
}

void ExpiringCache::init$(int64_t millisUntilExpiration) {
	this->queryOverflow = 300;
	this->MAX_ENTRIES = 200;
	this->millisUntilExpiration = millisUntilExpiration;
	$set(this, map, $new($ExpiringCache$1, this));
}

$String* ExpiringCache::get($String* key) {
	$synchronized(this) {
		if (++this->queryCount >= this->queryOverflow) {
			cleanup();
		}
		$var($ExpiringCache$Entry, entry, entryFor(key));
		if (entry != nullptr) {
			return entry->val();
		}
		return nullptr;
	}
}

void ExpiringCache::put($String* key, $String* val) {
	$synchronized(this) {
		if (++this->queryCount >= this->queryOverflow) {
			cleanup();
		}
		$var($ExpiringCache$Entry, entry, entryFor(key));
		if (entry != nullptr) {
			entry->setTimestamp($System::currentTimeMillis());
			entry->setVal(val);
		} else {
			$nc(this->map)->put(key, $$new($ExpiringCache$Entry, $System::currentTimeMillis(), val));
		}
	}
}

void ExpiringCache::clear() {
	$synchronized(this) {
		$nc(this->map)->clear();
	}
}

$ExpiringCache$Entry* ExpiringCache::entryFor($String* key) {
	$var($ExpiringCache$Entry, entry, $cast($ExpiringCache$Entry, $nc(this->map)->get(key)));
	if (entry != nullptr) {
		int64_t var$0 = $System::currentTimeMillis();
		int64_t delta = var$0 - entry->timestamp();
		if (delta < 0 || delta >= this->millisUntilExpiration) {
			$nc(this->map)->remove(key);
			$assign(entry, nullptr);
		}
	}
	return entry;
}

void ExpiringCache::cleanup() {
	$var($Set, keySet, $nc(this->map)->keySet());
	$var($StringArray, keys, $new($StringArray, $nc(keySet)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, keySet->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				keys->set(i++, key);
			}
		}
	}
	for (int32_t j = 0; j < keys->length; ++j) {
		entryFor(keys->get(j));
	}
	this->queryCount = 0;
}

ExpiringCache::ExpiringCache() {
}

$Class* ExpiringCache::load$($String* name, bool initialize) {
	$loadClass(ExpiringCache, name, initialize, &_ExpiringCache_ClassInfo_, allocate$ExpiringCache);
	return class$;
}

$Class* ExpiringCache::class$ = nullptr;

	} // io
} // java