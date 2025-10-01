#ifndef _java_lang_WeakPairMap$WeakRefPeer_h_
#define _java_lang_WeakPairMap$WeakRefPeer_h_
//$ class java.lang.WeakPairMap$WeakRefPeer
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

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

class WeakPairMap$WeakRefPeer : public ::java::lang::ref::WeakReference {
	$class(WeakPairMap$WeakRefPeer, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	WeakPairMap$WeakRefPeer();
	void init$(Object$* k, ::java::lang::ref::ReferenceQueue* queue);
	virtual ::java::lang::WeakPairMap$Pair$Weak* weakPair() {return nullptr;}
};

	} // lang
} // java

#endif // _java_lang_WeakPairMap$WeakRefPeer_h_