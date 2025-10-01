#ifndef _java_lang_WeakPairMap$Pair$Weak$1_h_
#define _java_lang_WeakPairMap$Pair$Weak$1_h_
//$ class java.lang.WeakPairMap$Pair$Weak$1
//$ extends java.lang.WeakPairMap$WeakRefPeer

#include <java/lang/WeakPairMap$WeakRefPeer.h>

namespace java {
	namespace lang {
		class WeakPairMap$Pair$Weak;
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
	namespace lang {

class WeakPairMap$Pair$Weak$1 : public ::java::lang::WeakPairMap$WeakRefPeer {
	$class(WeakPairMap$Pair$Weak$1, $NO_CLASS_INIT, ::java::lang::WeakPairMap$WeakRefPeer)
public:
	WeakPairMap$Pair$Weak$1();
	void init$(::java::lang::WeakPairMap$Pair$Weak* this$0, Object$* k, ::java::lang::ref::ReferenceQueue* queue);
	virtual ::java::lang::WeakPairMap$Pair$Weak* weakPair() override;
	::java::lang::WeakPairMap$Pair$Weak* this$0 = nullptr;
};

	} // lang
} // java

#endif // _java_lang_WeakPairMap$Pair$Weak$1_h_