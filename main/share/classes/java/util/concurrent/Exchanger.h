#ifndef _java_util_concurrent_Exchanger_h_
#define _java_util_concurrent_Exchanger_h_
//$ class java.util.concurrent.Exchanger
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AA")
#undef AA
#pragma push_macro("ASHIFT")
#undef ASHIFT
#pragma push_macro("BOUND")
#undef BOUND
#pragma push_macro("FULL")
#undef FULL
#pragma push_macro("MATCH")
#undef MATCH
#pragma push_macro("MMASK")
#undef MMASK
#pragma push_macro("NCPU")
#undef NCPU
#pragma push_macro("NULL_ITEM")
#undef NULL_ITEM
#pragma push_macro("SEQ")
#undef SEQ
#pragma push_macro("SLOT")
#undef SLOT
#pragma push_macro("SPINS")
#undef SPINS
#pragma push_macro("TIMED_OUT")
#undef TIMED_OUT

namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Exchanger$Node;
			class Exchanger$Participant;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export Exchanger : public ::java::lang::Object {
	$class(Exchanger, 0, ::java::lang::Object)
public:
	Exchanger();
	void init$();
	$Object* arenaExchange(Object$* item, bool timed, int64_t ns);
	virtual $Object* exchange(Object$* x);
	virtual $Object* exchange(Object$* x, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	$Object* slotExchange(Object$* item, bool timed, int64_t ns);
	static const int32_t ASHIFT = 5;
	static const int32_t MMASK = 255;
	static const int32_t SEQ = 256; // MMASK + 1
	static int32_t NCPU;
	static int32_t FULL;
	static const int32_t SPINS = 1024; // 1 << 10
	static $Object* NULL_ITEM;
	static $Object* TIMED_OUT;
	::java::util::concurrent::Exchanger$Participant* participant = nullptr;
	$volatile($Array<::java::util::concurrent::Exchanger$Node>*) arena = nullptr;
	$volatile(::java::util::concurrent::Exchanger$Node*) slot = nullptr;
	$volatile(int32_t) bound = 0;
	static ::java::lang::invoke::VarHandle* BOUND;
	static ::java::lang::invoke::VarHandle* SLOT;
	static ::java::lang::invoke::VarHandle* MATCH;
	static ::java::lang::invoke::VarHandle* AA;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("AA")
#pragma pop_macro("ASHIFT")
#pragma pop_macro("BOUND")
#pragma pop_macro("FULL")
#pragma pop_macro("MATCH")
#pragma pop_macro("MMASK")
#pragma pop_macro("NCPU")
#pragma pop_macro("NULL_ITEM")
#pragma pop_macro("SEQ")
#pragma pop_macro("SLOT")
#pragma pop_macro("SPINS")
#pragma pop_macro("TIMED_OUT")

#endif // _java_util_concurrent_Exchanger_h_