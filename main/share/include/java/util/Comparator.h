#ifndef _java_util_Comparator_h_
#define _java_util_Comparator_h_
//$ interface java.util.Comparator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
			class ToDoubleFunction;
			class ToIntFunction;
			class ToLongFunction;
		}
	}
}

namespace java {
	namespace util {

class $import Comparator : public ::java::lang::Object {
	$interface(Comparator, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	virtual int32_t compare(Object$* o1, Object$* o2) {return 0;}
	static ::java::util::Comparator* comparing(::java::util::function::Function* keyExtractor, ::java::util::Comparator* keyComparator);
	static ::java::util::Comparator* comparing(::java::util::function::Function* keyExtractor);
	static ::java::util::Comparator* comparingDouble(::java::util::function::ToDoubleFunction* keyExtractor);
	static ::java::util::Comparator* comparingInt(::java::util::function::ToIntFunction* keyExtractor);
	static ::java::util::Comparator* comparingLong(::java::util::function::ToLongFunction* keyExtractor);
	virtual bool equals(Object$* obj) override;
	static int32_t lambda$comparing$77a9974f$1(::java::util::function::Function* keyExtractor, Object$* c1, Object$* c2);
	static int32_t lambda$comparing$ea9a8b3a$1(::java::util::Comparator* keyComparator, ::java::util::function::Function* keyExtractor, Object$* c1, Object$* c2);
	static int32_t lambda$comparingDouble$8dcf42ea$1(::java::util::function::ToDoubleFunction* keyExtractor, Object$* c1, Object$* c2);
	static int32_t lambda$comparingInt$7b0bb60$1(::java::util::function::ToIntFunction* keyExtractor, Object$* c1, Object$* c2);
	static int32_t lambda$comparingLong$6043328a$1(::java::util::function::ToLongFunction* keyExtractor, Object$* c1, Object$* c2);
	int32_t lambda$thenComparing$36697e65$1(::java::util::Comparator* other, Object$* c1, Object$* c2);
	static ::java::util::Comparator* naturalOrder();
	static ::java::util::Comparator* nullsFirst(::java::util::Comparator* comparator);
	static ::java::util::Comparator* nullsLast(::java::util::Comparator* comparator);
	static ::java::util::Comparator* reverseOrder();
	virtual ::java::util::Comparator* reversed();
	virtual ::java::util::Comparator* thenComparing(::java::util::Comparator* other);
	virtual ::java::util::Comparator* thenComparing(::java::util::function::Function* keyExtractor, ::java::util::Comparator* keyComparator);
	virtual ::java::util::Comparator* thenComparing(::java::util::function::Function* keyExtractor);
	virtual ::java::util::Comparator* thenComparingDouble(::java::util::function::ToDoubleFunction* keyExtractor);
	virtual ::java::util::Comparator* thenComparingInt(::java::util::function::ToIntFunction* keyExtractor);
	virtual ::java::util::Comparator* thenComparingLong(::java::util::function::ToLongFunction* keyExtractor);
};

	} // util
} // java

#endif // _java_util_Comparator_h_