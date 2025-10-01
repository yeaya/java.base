#ifndef _java_lang_WeakPairMap_h_
#define _java_lang_WeakPairMap_h_
//$ class java.lang.WeakPairMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class WeakPairMap$Pair;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}

namespace java {
	namespace lang {

class WeakPairMap : public ::java::lang::Object {
	$class(WeakPairMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WeakPairMap();
	void init$();
	$Object* computeIfAbsent(Object$* k1, Object$* k2, ::java::util::function::BiFunction* mappingFunction);
	bool containsKeyPair(Object$* k1, Object$* k2);
	void expungeStaleAssociations();
	$Object* get(Object$* k1, Object$* k2);
	static $Object* lambda$computeIfAbsent$0(::java::util::function::BiFunction* mappingFunction, ::java::lang::WeakPairMap$Pair* pair);
	$Object* put(Object$* k1, Object$* k2, Object$* v);
	$Object* putIfAbsent(Object$* k1, Object$* k2, Object$* v);
	::java::util::Collection* values();
	::java::util::concurrent::ConcurrentHashMap* map = nullptr;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
};

	} // lang
} // java

#endif // _java_lang_WeakPairMap_h_