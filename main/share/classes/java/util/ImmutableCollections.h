#ifndef _java_util_ImmutableCollections_h_
#define _java_util_ImmutableCollections_h_
//$ class java.util.ImmutableCollections
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SALT32L")
#undef SALT32L
#pragma push_macro("EMPTY_MAP")
#undef EMPTY_MAP
#pragma push_macro("EMPTY_LIST_NULLS")
#undef EMPTY_LIST_NULLS
#pragma push_macro("EMPTY_LIST")
#undef EMPTY_LIST
#pragma push_macro("EMPTY_SET")
#undef EMPTY_SET
#pragma push_macro("REVERSE")
#undef REVERSE
#pragma push_macro("EXPAND_FACTOR")
#undef EXPAND_FACTOR
#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace lang {
		class UnsupportedOperationException;
	}
}
namespace java {
	namespace util {
		class Collection;
		class ImmutableCollections$ListN;
		class ImmutableCollections$MapN;
		class ImmutableCollections$SetN;
		class List;
	}
}

namespace java {
	namespace util {

class ImmutableCollections : public ::java::lang::Object {
	$class(ImmutableCollections, $PRELOAD, ::java::lang::Object)
public:
	ImmutableCollections();
	void init$();
	static ::java::util::List* listCopy(::java::util::Collection* coll);
	static ::java::util::List* listFromArray($ObjectArray* input);
	static ::java::util::List* listFromTrustedArray($ObjectArray* input);
	static ::java::util::List* listFromTrustedArrayNullsAllowed($ObjectArray* input);
	static ::java::lang::UnsupportedOperationException* uoe();
	static bool $assertionsDisabled;
	static int64_t SALT32L;
	static bool REVERSE;
	static $ObjectArray* archivedObjects;
	static $Object* EMPTY;
	static ::java::util::ImmutableCollections$ListN* EMPTY_LIST;
	static ::java::util::ImmutableCollections$ListN* EMPTY_LIST_NULLS;
	static ::java::util::ImmutableCollections$SetN* EMPTY_SET;
	static ::java::util::ImmutableCollections$MapN* EMPTY_MAP;
	static const int32_t EXPAND_FACTOR = 2;
};

	} // util
} // java

#pragma pop_macro("SALT32L")
#pragma pop_macro("EMPTY_MAP")
#pragma pop_macro("EMPTY_LIST_NULLS")
#pragma pop_macro("EMPTY_LIST")
#pragma pop_macro("EMPTY_SET")
#pragma pop_macro("REVERSE")
#pragma pop_macro("EXPAND_FACTOR")
#pragma pop_macro("EMPTY")

#endif // _java_util_ImmutableCollections_h_