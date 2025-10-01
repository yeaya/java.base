#ifndef _java_lang_WeakPairMap$Pair_h_
#define _java_lang_WeakPairMap$Pair_h_
//$ interface java.lang.WeakPairMap$Pair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace lang {

class WeakPairMap$Pair : public ::java::lang::Object {
	$interface(WeakPairMap$Pair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	using ::java::lang::Object::equals;
	static bool equals(Object$* first, Object$* second, ::java::lang::WeakPairMap$Pair* p);
	virtual $Object* first() {return nullptr;}
	using ::java::lang::Object::hashCode;
	static int32_t hashCode(Object$* first, Object$* second);
	static ::java::lang::WeakPairMap$Pair* lookup(Object$* k1, Object$* k2);
	virtual $Object* second() {return nullptr;}
	static ::java::lang::WeakPairMap$Pair* weak(Object$* k1, Object$* k2, ::java::lang::ref::ReferenceQueue* queue);
};

	} // lang
} // java

#endif // _java_lang_WeakPairMap$Pair_h_